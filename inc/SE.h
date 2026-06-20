#ifndef SE_H
#define SE_H

#ifdef __cplusplus
extern "C" {
#endif

namespace SE {
    bool Init(); 
    void Log(const char* message);
    const char* getEngineVersion();

    void setPlayerPos(float x, float y, float z);
    void setGravity(float gravityValue);
    void setSkyColor(int r, int g, int b);
    void setWorldType(int type);
    void setFOV(float angle);
    void setPlayerSpeed(float speed);
    bool isGrounded();
    void setFogDensity(float density);
    void setLightingMode(int mode);
    void setPlayerHealth(int hp);
    void setEntityID(int id);
}

#ifdef __cplusplus
}
#endif

#endif
