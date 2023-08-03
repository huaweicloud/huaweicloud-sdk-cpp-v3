

#include "huaweicloud/rds/v3/model/ApplyConfigurationResponse_apply_results.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ApplyConfigurationResponse_apply_results::ApplyConfigurationResponse_apply_results()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

ApplyConfigurationResponse_apply_results::~ApplyConfigurationResponse_apply_results() = default;

void ApplyConfigurationResponse_apply_results::validate()
{
}

web::json::value ApplyConfigurationResponse_apply_results::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(restartRequiredIsSet_) {
        val[utility::conversions::to_string_t("restart_required")] = ModelBase::toJson(restartRequired_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}

bool ApplyConfigurationResponse_apply_results::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restart_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}

std::string ApplyConfigurationResponse_apply_results::getInstanceId() const
{
    return instanceId_;
}

void ApplyConfigurationResponse_apply_results::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ApplyConfigurationResponse_apply_results::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ApplyConfigurationResponse_apply_results::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ApplyConfigurationResponse_apply_results::getInstanceName() const
{
    return instanceName_;
}

void ApplyConfigurationResponse_apply_results::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ApplyConfigurationResponse_apply_results::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ApplyConfigurationResponse_apply_results::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

bool ApplyConfigurationResponse_apply_results::isRestartRequired() const
{
    return restartRequired_;
}

void ApplyConfigurationResponse_apply_results::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool ApplyConfigurationResponse_apply_results::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void ApplyConfigurationResponse_apply_results::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

bool ApplyConfigurationResponse_apply_results::isSuccess() const
{
    return success_;
}

void ApplyConfigurationResponse_apply_results::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool ApplyConfigurationResponse_apply_results::successIsSet() const
{
    return successIsSet_;
}

void ApplyConfigurationResponse_apply_results::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


