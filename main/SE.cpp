#include "SE.h"
#include <iostream>
#include <fstream>
#include <string>

namespace SE {
    float gravity = 9.81f;
    
    void Log(const char* message) {
        std::ofstream logFile("logs/debug.txt", std::ios::app);
        if (logFile.is_open()) {
            logFile << "[ShadowEngine Log]: " << message << std::endl;
        }
    }

    bool Init() {
        Log("Motor baslatiliyor...");
        std::ifstream metaFile("metadata/appmetadata.dat");
        if (!metaFile.is_open()) {
            Log("HATA: metadata/appmetadata.dat bulunamadi!");
            return false;
        }
        Log("Metadata basariyla yuklendi.");
        return true;
    }

    void setPlayerPos(float x, float y, float z) {}
    void setGravity(float g) { gravity = g; }
    void setSkyColor(int r, int g, int b) {}
    void setWorldType(int type) {}
    void setFOV(float angle) {}
    void setPlayerSpeed(float speed) {}
    bool isGrounded() { return true; }
    void setFogDensity(float density) {}
    void setLightingMode(int mode) {}
    void setPlayerHealth(int hp) {}
    void setEntityID(int id) {}
    const char* getEngineVersion() { return "1.2"; }
}
