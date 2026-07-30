

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_job_config_engine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_job_config_engine::AlgorithmResponse_job_config_engine()
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

AlgorithmResponse_job_config_engine::~AlgorithmResponse_job_config_engine() = default;

void AlgorithmResponse_job_config_engine::validate()
{
}

web::json::value AlgorithmResponse_job_config_engine::toJson() const
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
bool AlgorithmResponse_job_config_engine::fromJson(const web::json::value& val)
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


std::string AlgorithmResponse_job_config_engine::getEngineId() const
{
    return engineId_;
}

void AlgorithmResponse_job_config_engine::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool AlgorithmResponse_job_config_engine::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void AlgorithmResponse_job_config_engine::unsetengineId()
{
    engineIdIsSet_ = false;
}

std::string AlgorithmResponse_job_config_engine::getEngineName() const
{
    return engineName_;
}

void AlgorithmResponse_job_config_engine::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool AlgorithmResponse_job_config_engine::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void AlgorithmResponse_job_config_engine::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string AlgorithmResponse_job_config_engine::getEngineVersion() const
{
    return engineVersion_;
}

void AlgorithmResponse_job_config_engine::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool AlgorithmResponse_job_config_engine::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void AlgorithmResponse_job_config_engine::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string AlgorithmResponse_job_config_engine::getImageUrl() const
{
    return imageUrl_;
}

void AlgorithmResponse_job_config_engine::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool AlgorithmResponse_job_config_engine::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void AlgorithmResponse_job_config_engine::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

}
}
}
}
}


