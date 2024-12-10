

#include "huaweicloud/csms/v1/model/GrantSecretReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




GrantSecretReqBody::GrantSecretReqBody()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    granteeType_ = "";
    granteeTypeIsSet_ = false;
    granteeTargetId_ = "";
    granteeTargetIdIsSet_ = false;
    validityTimeIsSet_ = false;
}

GrantSecretReqBody::~GrantSecretReqBody() = default;

void GrantSecretReqBody::validate()
{
}

web::json::value GrantSecretReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(granteeTypeIsSet_) {
        val[utility::conversions::to_string_t("grantee_type")] = ModelBase::toJson(granteeType_);
    }
    if(granteeTargetIdIsSet_) {
        val[utility::conversions::to_string_t("grantee_target_id")] = ModelBase::toJson(granteeTargetId_);
    }
    if(validityTimeIsSet_) {
        val[utility::conversions::to_string_t("validity_time")] = ModelBase::toJson(validityTime_);
    }

    return val;
}
bool GrantSecretReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
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
    if(val.has_field(utility::conversions::to_string_t("grantee_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grantee_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grantee_target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grantee_target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteeTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validity_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validity_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidityTime(refVal);
        }
    }
    return ok;
}


std::string GrantSecretReqBody::getResourceId() const
{
    return resourceId_;
}

void GrantSecretReqBody::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool GrantSecretReqBody::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void GrantSecretReqBody::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string GrantSecretReqBody::getType() const
{
    return type_;
}

void GrantSecretReqBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GrantSecretReqBody::typeIsSet() const
{
    return typeIsSet_;
}

void GrantSecretReqBody::unsettype()
{
    typeIsSet_ = false;
}

std::string GrantSecretReqBody::getGranteeType() const
{
    return granteeType_;
}

void GrantSecretReqBody::setGranteeType(const std::string& value)
{
    granteeType_ = value;
    granteeTypeIsSet_ = true;
}

bool GrantSecretReqBody::granteeTypeIsSet() const
{
    return granteeTypeIsSet_;
}

void GrantSecretReqBody::unsetgranteeType()
{
    granteeTypeIsSet_ = false;
}

std::string GrantSecretReqBody::getGranteeTargetId() const
{
    return granteeTargetId_;
}

void GrantSecretReqBody::setGranteeTargetId(const std::string& value)
{
    granteeTargetId_ = value;
    granteeTargetIdIsSet_ = true;
}

bool GrantSecretReqBody::granteeTargetIdIsSet() const
{
    return granteeTargetIdIsSet_;
}

void GrantSecretReqBody::unsetgranteeTargetId()
{
    granteeTargetIdIsSet_ = false;
}

utility::datetime GrantSecretReqBody::getValidityTime() const
{
    return validityTime_;
}

void GrantSecretReqBody::setValidityTime(const utility::datetime& value)
{
    validityTime_ = value;
    validityTimeIsSet_ = true;
}

bool GrantSecretReqBody::validityTimeIsSet() const
{
    return validityTimeIsSet_;
}

void GrantSecretReqBody::unsetvalidityTime()
{
    validityTimeIsSet_ = false;
}

}
}
}
}
}


