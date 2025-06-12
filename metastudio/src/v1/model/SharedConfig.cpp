

#include "huaweicloud/metastudio/v1/model/SharedConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SharedConfig::SharedConfig()
{
    sharedType_ = "";
    sharedTypeIsSet_ = false;
    sharedState_ = "";
    sharedStateIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
    allowedProjectIdsIsSet_ = false;
}

SharedConfig::~SharedConfig() = default;

void SharedConfig::validate()
{
}

web::json::value SharedConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sharedTypeIsSet_) {
        val[utility::conversions::to_string_t("shared_type")] = ModelBase::toJson(sharedType_);
    }
    if(sharedStateIsSet_) {
        val[utility::conversions::to_string_t("shared_state")] = ModelBase::toJson(sharedState_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(allowedProjectIdsIsSet_) {
        val[utility::conversions::to_string_t("allowed_project_ids")] = ModelBase::toJson(allowedProjectIds_);
    }

    return val;
}
bool SharedConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shared_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_project_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_project_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedProjectIds(refVal);
        }
    }
    return ok;
}


std::string SharedConfig::getSharedType() const
{
    return sharedType_;
}

void SharedConfig::setSharedType(const std::string& value)
{
    sharedType_ = value;
    sharedTypeIsSet_ = true;
}

bool SharedConfig::sharedTypeIsSet() const
{
    return sharedTypeIsSet_;
}

void SharedConfig::unsetsharedType()
{
    sharedTypeIsSet_ = false;
}

std::string SharedConfig::getSharedState() const
{
    return sharedState_;
}

void SharedConfig::setSharedState(const std::string& value)
{
    sharedState_ = value;
    sharedStateIsSet_ = true;
}

bool SharedConfig::sharedStateIsSet() const
{
    return sharedStateIsSet_;
}

void SharedConfig::unsetsharedState()
{
    sharedStateIsSet_ = false;
}

std::string SharedConfig::getExpireTime() const
{
    return expireTime_;
}

void SharedConfig::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool SharedConfig::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void SharedConfig::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::vector<std::string>& SharedConfig::getAllowedProjectIds()
{
    return allowedProjectIds_;
}

void SharedConfig::setAllowedProjectIds(const std::vector<std::string>& value)
{
    allowedProjectIds_ = value;
    allowedProjectIdsIsSet_ = true;
}

bool SharedConfig::allowedProjectIdsIsSet() const
{
    return allowedProjectIdsIsSet_;
}

void SharedConfig::unsetallowedProjectIds()
{
    allowedProjectIdsIsSet_ = false;
}

}
}
}
}
}


