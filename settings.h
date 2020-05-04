#ifndef SETTINGS_H_INCLUDED
#define SETTINGS_H_INCLUDED

enum DeoSettings{GRAPHIC, AUDIO};
enum Grafika{LOW, MID, HIGH};
enum Resolution{LOW, HDREADY, FULLHD};
enum SetAutio{MUTE ,TIHO, SREDNJE, GLASNO};

class settings(): public EscMenu{
private:
    DeoSettings dset;
    Grafika graf;
    Resolution reso;
    SetAudio audi;
    bool fullscreen;
    DinString TextureQ;
    DinString ShadowQ;
    DinString ReflectionQ;
    int volume;
    int music;
    int onlineV;
public:
    settings():EscMenu(){
        if(dset == GRAPHIC){
            if(graf == LOW){
                fullscreen = false;
                TextureQ = low;
                ShadowQ = low;
                ReflectionQ = low;
                reso = LOW;
                vreme = 4;
            }else if(graf == MID){
                fullscreen = true;
                TextureQ = mid;
                ShadowQ = mid;
                ReflectionQ = mid;
                reso = HDREADY;
                vreme = 4;
            }else if(graf == HIGH){
                fullscreen = true;
                TextureQ = high;
                ShadowQ = high;
                ReflectionQ = high;
                reso = FULLHD;
                vreme = 4;
            }
        }else if(dset == AUDIO){
            if(audi == MUTE){
            volume = 0;
            music = 0;
            online = 0;
            vreme 4;
            }else if(audi == TIHO){
            volume = 30;
            music = 0;
            online = 20;
            vreme 4;
            }else if(audi == SREDNJE){
            volume = 50;
            music = 50;
            online = 50;
            vreme 4;
            }else if(audi == GLASNO){
            volume = 100;
            music = 100;
            online = 100;
            vreme 4;
            }
        }
    }

    setting(int vv, int m, int ov, DinString tq, DinString rq, DinString sq, DeoSettings ds, grafika g, Resolution r):EscMenu(v){
    volume = vv;
    music = m;
    onlineV = ov;
    TextureQ = tq;
    ReflectionQ = rq;
    ShadowQ = sq;
    dset = ds;
    graf = g;
    reso = r;
    }

    settings(const settings& s): EscMenu(s.vreme){
    volume = s.volume;
    music = s.music;
    onlineV = s.onlineV;
    TextureQ = s.TextureQ;
    ReflectionQ = s.ReflectionQ;
    ShadowQ = s.ShadowQ;
    dset = s.dset;
    graf = s.graf;
    reso = s.reso;
    }

    bool settings()::select{
    bool uspesno;

    if(dset == GRAPHIC){
        if(graf == LOW){
            uspesno = true;
            fullscreen = true;
            TextureQ = mid;
            ShadowQ = mid;
            ReflectionQ = mid;
            reso = HDREADY;
            vreme = 4;
        }else if(graf == MID){
            uspesno = true;
            fullscreen = true;
            TextureQ = high;
            ShadowQ = high;
            ReflectionQ = high;
            reso = FULLHD;
            vreme = 4;
        }else if(graf == HIGH){
            uspesno = true;
            fullscreen = false;
            TextureQ = low;
            ShadowQ = low;
            ReflectionQ = low;
            reso = LOW;
            vreme = 4;
        }
    }else if(dset == AUDIO){
        if(audi == MUTE){
        uspesno = true;
        volume = 30;
        music = 0;
        online = 20;
        vreme 4;
        }else if(audi == TIHO){
        uspesno = true;
        volume = 50;
        music = 50;
        online = 50;
        vreme 4;
        }else if(audi == SREDNJE){
        uspesno = true;
        volume = 100;
        music = 100;
        online = 100;
        vreme 4;
    }else if(audi == GLASNO){
        uspesno = true;
        volume = 0;
        music = 0;
        online = 0;
        vreme 4;
    }
}


    int getvolume()const {return volume;}
    void setvolume(int v)(volume = v);

    int getmusic()const {return volume;}
    void setmusic(int m)(music = m);

    int get onlineV()const {return onlineV;}
    void setonlineV (int ov)(onlineV = ov);

    getDeoSettings()const {return DeoSettings;}
    void setDeoSettings(DeoSettings ds)(dset = ds);

    getGrafika()const {return Grafika;}
    void setGrafika(Grafika g)(graf = g);

    getResolution()const {return Resolution;}
    void setResolution(Resolution r)(reso = r);

    getSetAudio()const {return SetAudio;}
    void setSetAudio(SetAudio a)(audi = a);

    getTextureQ()const {return TextureQ;}
    void setTextureQ(DinString t)(tq = t);

    getShadowQ()const {return ShadowQ;}
    void setShadowQ(DinString s)(sq = s);

    getReflectionQ()const {return ReflectionQ;}
    void setReflectionQ(DinString r)(rq = r);

};

#endif // SETTINGS_H_INCLUDED
