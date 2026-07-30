

#include "huaweicloud/modelarts/v1/model/AlgorithmEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmEngine::AlgorithmEngine()
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
    imageUrl_ = "";
    imageUrlIsSet_ = false;
}

AlgorithmEngine::~AlgorithmEngine() = default;

void AlgorithmEngine::validate()
{
}

web::json::value AlgorithmEngine::toJson() const
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
    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }

    return val;
}
bool AlgorithmEngine::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
        }
    }
    return ok;
}


std::string AlgorithmEngine::getEngineId() const
{
    return engineId_;
}

void AlgorithmEngine::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool AlgorithmEngine::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void AlgorithmEngine::unsetengineId()
{
    engineIdIsSet_ = false;
}

std::string AlgorithmEngine::getEngineName() const
{
    return engineName_;
}

void AlgorithmEngine::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool AlgorithmEngine::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void AlgorithmEngine::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string AlgorithmEngine::getEngineVersion() const
{
    return engineVersion_;
}

void AlgorithmEngine::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool AlgorithmEngine::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void AlgorithmEngine::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

bool AlgorithmEngine::isV1Compatible() const
{
    return v1Compatible_;
}

void AlgorithmEngine::setV1Compatible(bool value)
{
    v1Compatible_ = value;
    v1CompatibleIsSet_ = true;
}

bool AlgorithmEngine::v1CompatibleIsSet() const
{
    return v1CompatibleIsSet_;
}

void AlgorithmEngine::unsetv1Compatible()
{
    v1CompatibleIsSet_ = false;
}

std::string AlgorithmEngine::getRunUser() const
{
    return runUser_;
}

void AlgorithmEngine::setRunUser(const std::string& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool AlgorithmEngine::runUserIsSet() const
{
    return runUserIsSet_;
}

void AlgorithmEngine::unsetrunUser()
{
    runUserIsSet_ = false;
}

std::string AlgorithmEngine::getImageUrl() const
{
    return imageUrl_;
}

void AlgorithmEngine::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool AlgorithmEngine::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void AlgorithmEngine::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

}
}
}
}
}


