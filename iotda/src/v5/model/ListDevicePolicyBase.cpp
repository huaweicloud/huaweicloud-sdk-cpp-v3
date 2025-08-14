

#include "huaweicloud/iotda/v5/model/ListDevicePolicyBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDevicePolicyBase::ListDevicePolicyBase()
{
    appId_ = "";
    appIdIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

ListDevicePolicyBase::~ListDevicePolicyBase() = default;

void ListDevicePolicyBase::validate()
{
}

web::json::value ListDevicePolicyBase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ListDevicePolicyBase::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string ListDevicePolicyBase::getAppId() const
{
    return appId_;
}

void ListDevicePolicyBase::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListDevicePolicyBase::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListDevicePolicyBase::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListDevicePolicyBase::getPolicyId() const
{
    return policyId_;
}

void ListDevicePolicyBase::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool ListDevicePolicyBase::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void ListDevicePolicyBase::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string ListDevicePolicyBase::getPolicyName() const
{
    return policyName_;
}

void ListDevicePolicyBase::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ListDevicePolicyBase::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ListDevicePolicyBase::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string ListDevicePolicyBase::getCreateTime() const
{
    return createTime_;
}

void ListDevicePolicyBase::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListDevicePolicyBase::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListDevicePolicyBase::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListDevicePolicyBase::getUpdateTime() const
{
    return updateTime_;
}

void ListDevicePolicyBase::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListDevicePolicyBase::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListDevicePolicyBase::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


