

#include "huaweicloud/rds/v3/model/EnableConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EnableConfigurationResponse::EnableConfigurationResponse()
{
    configurationId_ = "";
    configurationIdIsSet_ = false;
    configurationName_ = "";
    configurationNameIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
    applyResultsIsSet_ = false;
}

EnableConfigurationResponse::~EnableConfigurationResponse() = default;

void EnableConfigurationResponse::validate()
{
}

web::json::value EnableConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(configurationNameIsSet_) {
        val[utility::conversions::to_string_t("configuration_name")] = ModelBase::toJson(configurationName_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(applyResultsIsSet_) {
        val[utility::conversions::to_string_t("apply_results")] = ModelBase::toJson(applyResults_);
    }

    return val;
}
bool EnableConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("apply_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_results"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplyConfigurationResponse_apply_results> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyResults(refVal);
        }
    }
    return ok;
}


std::string EnableConfigurationResponse::getConfigurationId() const
{
    return configurationId_;
}

void EnableConfigurationResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool EnableConfigurationResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void EnableConfigurationResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string EnableConfigurationResponse::getConfigurationName() const
{
    return configurationName_;
}

void EnableConfigurationResponse::setConfigurationName(const std::string& value)
{
    configurationName_ = value;
    configurationNameIsSet_ = true;
}

bool EnableConfigurationResponse::configurationNameIsSet() const
{
    return configurationNameIsSet_;
}

void EnableConfigurationResponse::unsetconfigurationName()
{
    configurationNameIsSet_ = false;
}

bool EnableConfigurationResponse::isSuccess() const
{
    return success_;
}

void EnableConfigurationResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool EnableConfigurationResponse::successIsSet() const
{
    return successIsSet_;
}

void EnableConfigurationResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::vector<ApplyConfigurationResponse_apply_results>& EnableConfigurationResponse::getApplyResults()
{
    return applyResults_;
}

void EnableConfigurationResponse::setApplyResults(const std::vector<ApplyConfigurationResponse_apply_results>& value)
{
    applyResults_ = value;
    applyResultsIsSet_ = true;
}

bool EnableConfigurationResponse::applyResultsIsSet() const
{
    return applyResultsIsSet_;
}

void EnableConfigurationResponse::unsetapplyResults()
{
    applyResultsIsSet_ = false;
}

}
}
}
}
}


