

#include "huaweicloud/modelarts/v1/model/AlgorithmCreateEngine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmCreateEngine::AlgorithmCreateEngine()
{
    engineId_ = "";
    engineIdIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
}

AlgorithmCreateEngine::~AlgorithmCreateEngine() = default;

void AlgorithmCreateEngine::validate()
{
}

web::json::value AlgorithmCreateEngine::toJson() const
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
    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }

    return val;
}
bool AlgorithmCreateEngine::fromJson(const web::json::value& val)
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


std::string AlgorithmCreateEngine::getEngineId() const
{
    return engineId_;
}

void AlgorithmCreateEngine::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool AlgorithmCreateEngine::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void AlgorithmCreateEngine::unsetengineId()
{
    engineIdIsSet_ = false;
}

std::string AlgorithmCreateEngine::getEngineName() const
{
    return engineName_;
}

void AlgorithmCreateEngine::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool AlgorithmCreateEngine::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void AlgorithmCreateEngine::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string AlgorithmCreateEngine::getEngineVersion() const
{
    return engineVersion_;
}

void AlgorithmCreateEngine::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool AlgorithmCreateEngine::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void AlgorithmCreateEngine::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string AlgorithmCreateEngine::getImageUrl() const
{
    return imageUrl_;
}

void AlgorithmCreateEngine::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool AlgorithmCreateEngine::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void AlgorithmCreateEngine::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

}
}
}
}
}


