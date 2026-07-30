

#include "huaweicloud/modelarts/v1/model/Task_algorithm_job_config_engine.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task_algorithm_job_config_engine::Task_algorithm_job_config_engine()
{
    engineId_ = "";
    engineIdIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    runUser_ = "";
    runUserIsSet_ = false;
}

Task_algorithm_job_config_engine::~Task_algorithm_job_config_engine() = default;

void Task_algorithm_job_config_engine::validate()
{
}

web::json::value Task_algorithm_job_config_engine::toJson() const
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
    if(runUserIsSet_) {
        val[utility::conversions::to_string_t("run_user")] = ModelBase::toJson(runUser_);
    }

    return val;
}
bool Task_algorithm_job_config_engine::fromJson(const web::json::value& val)
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


std::string Task_algorithm_job_config_engine::getEngineId() const
{
    return engineId_;
}

void Task_algorithm_job_config_engine::setEngineId(const std::string& value)
{
    engineId_ = value;
    engineIdIsSet_ = true;
}

bool Task_algorithm_job_config_engine::engineIdIsSet() const
{
    return engineIdIsSet_;
}

void Task_algorithm_job_config_engine::unsetengineId()
{
    engineIdIsSet_ = false;
}

std::string Task_algorithm_job_config_engine::getEngineName() const
{
    return engineName_;
}

void Task_algorithm_job_config_engine::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool Task_algorithm_job_config_engine::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void Task_algorithm_job_config_engine::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string Task_algorithm_job_config_engine::getEngineVersion() const
{
    return engineVersion_;
}

void Task_algorithm_job_config_engine::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool Task_algorithm_job_config_engine::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void Task_algorithm_job_config_engine::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string Task_algorithm_job_config_engine::getImageUrl() const
{
    return imageUrl_;
}

void Task_algorithm_job_config_engine::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool Task_algorithm_job_config_engine::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void Task_algorithm_job_config_engine::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

std::string Task_algorithm_job_config_engine::getRunUser() const
{
    return runUser_;
}

void Task_algorithm_job_config_engine::setRunUser(const std::string& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool Task_algorithm_job_config_engine::runUserIsSet() const
{
    return runUserIsSet_;
}

void Task_algorithm_job_config_engine::unsetrunUser()
{
    runUserIsSet_ = false;
}

}
}
}
}
}


