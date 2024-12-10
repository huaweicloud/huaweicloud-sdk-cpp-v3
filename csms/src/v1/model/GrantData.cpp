

#include "huaweicloud/csms/v1/model/GrantData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




GrantData::GrantData()
{
    uuid_ = "";
    uuidIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    granteeUser_ = "";
    granteeUserIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    validityTime_ = 0L;
    validityTimeIsSet_ = false;
    state_ = 0;
    stateIsSet_ = false;
    signature_ = "";
    signatureIsSet_ = false;
}

GrantData::~GrantData() = default;

void GrantData::validate()
{
}

web::json::value GrantData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resourceId")] = ModelBase::toJson(resourceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(granteeUserIsSet_) {
        val[utility::conversions::to_string_t("granteeUser")] = ModelBase::toJson(granteeUser_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("updateTime")] = ModelBase::toJson(updateTime_);
    }
    if(validityTimeIsSet_) {
        val[utility::conversions::to_string_t("validityTime")] = ModelBase::toJson(validityTime_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(signatureIsSet_) {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(signature_);
    }

    return val;
}
bool GrantData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("granteeUser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("granteeUser"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteeUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validityTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validityTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidityTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignature(refVal);
        }
    }
    return ok;
}


std::string GrantData::getUuid() const
{
    return uuid_;
}

void GrantData::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool GrantData::uuidIsSet() const
{
    return uuidIsSet_;
}

void GrantData::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string GrantData::getResourceId() const
{
    return resourceId_;
}

void GrantData::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool GrantData::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void GrantData::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string GrantData::getType() const
{
    return type_;
}

void GrantData::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GrantData::typeIsSet() const
{
    return typeIsSet_;
}

void GrantData::unsettype()
{
    typeIsSet_ = false;
}

std::string GrantData::getGranteeUser() const
{
    return granteeUser_;
}

void GrantData::setGranteeUser(const std::string& value)
{
    granteeUser_ = value;
    granteeUserIsSet_ = true;
}

bool GrantData::granteeUserIsSet() const
{
    return granteeUserIsSet_;
}

void GrantData::unsetgranteeUser()
{
    granteeUserIsSet_ = false;
}

int64_t GrantData::getCreateTime() const
{
    return createTime_;
}

void GrantData::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool GrantData::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void GrantData::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t GrantData::getUpdateTime() const
{
    return updateTime_;
}

void GrantData::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool GrantData::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void GrantData::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t GrantData::getValidityTime() const
{
    return validityTime_;
}

void GrantData::setValidityTime(int64_t value)
{
    validityTime_ = value;
    validityTimeIsSet_ = true;
}

bool GrantData::validityTimeIsSet() const
{
    return validityTimeIsSet_;
}

void GrantData::unsetvalidityTime()
{
    validityTimeIsSet_ = false;
}

int32_t GrantData::getState() const
{
    return state_;
}

void GrantData::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool GrantData::stateIsSet() const
{
    return stateIsSet_;
}

void GrantData::unsetstate()
{
    stateIsSet_ = false;
}

std::string GrantData::getSignature() const
{
    return signature_;
}

void GrantData::setSignature(const std::string& value)
{
    signature_ = value;
    signatureIsSet_ = true;
}

bool GrantData::signatureIsSet() const
{
    return signatureIsSet_;
}

void GrantData::unsetsignature()
{
    signatureIsSet_ = false;
}

}
}
}
}
}


