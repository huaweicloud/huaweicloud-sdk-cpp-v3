

#include "huaweicloud/modelarts/v1/model/Engine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Engine::Engine()
{
    engineId_ = "";
    engineIdIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    v1Compatible_ = false;
    v1CompatibleIsSet_ = false;
    runUser_ = "";
    runUserIsSet_ = false;
}

Engine::~Engine() = default;

void Engine::validate()
{
}

web::json::value Engine::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIdIsSet_) {
        val[utility::conversions::to_string_t("engine_id")] = ModelBase::toJson(engineId_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(v1CompatibleIsSet_) {
        val[utility::conversions::to_string_t("v1_compatible")] = ModelBase::toJson(v1Compatible_);
    }
    if(runUserIsSet_) {
        val[utility::conversions::to_string_t("run_user")] = ModelBase::toJson(runUser_);
    }

    return val;
}
bool Engine::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("v1_compatible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("v1_compatible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setV1Compatible(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunUser(refVal);
        }
    }
    return ok;
}


std::string Engine::getEngineId() const
{
    return engineId_;
}

void Engine::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool Engine::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void Engine::unsetengineId()
{
    engineIdIsSet_ = false;
}

std::string Engine::getEngineName() const
{
    return engineName_;
}

void Engine::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool Engine::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void Engine::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string Engine::getEngineVersion() const
{
    return engineVersion_;
}

void Engine::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool Engine::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void Engine::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

bool Engine::isV1Compatible() const
{
    return v1Compatible_;
}

void Engine::setV1Compatible(bool value)
{
    v1Compatible_ = value;
    v1CompatibleIsSet_ = true;
}

bool Engine::v1CompatibleIsSet() const
{
    return v1CompatibleIsSet_;
}

void Engine::unsetv1Compatible()
{
    v1CompatibleIsSet_ = false;
}

std::string Engine::getRunUser() const
{
    return runUser_;
}

void Engine::setRunUser(const std::string& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool Engine::runUserIsSet() const
{
    return runUserIsSet_;
}

void Engine::unsetrunUser()
{
    runUserIsSet_ = false;
}

}
}
}
}
}


