

#include "huaweicloud/identitycenter/v1/model/DeleteAccountAssignmentReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DeleteAccountAssignmentReqBody::DeleteAccountAssignmentReqBody()
{
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    principalId_ = "";
    principalIdIsSet_ = false;
    principalType_ = "";
    principalTypeIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
}

DeleteAccountAssignmentReqBody::~DeleteAccountAssignmentReqBody() = default;

void DeleteAccountAssignmentReqBody::validate()
{
}

web::json::value DeleteAccountAssignmentReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }
    if(principalIdIsSet_) {
        val[utility::conversions::to_string_t("principal_id")] = ModelBase::toJson(principalId_);
    }
    if(principalTypeIsSet_) {
        val[utility::conversions::to_string_t("principal_type")] = ModelBase::toJson(principalType_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }

    return val;
}
bool DeleteAccountAssignmentReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permission_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    return ok;
}


std::string DeleteAccountAssignmentReqBody::getPermissionSetId() const
{
    return permissionSetId_;
}

void DeleteAccountAssignmentReqBody::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool DeleteAccountAssignmentReqBody::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void DeleteAccountAssignmentReqBody::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

std::string DeleteAccountAssignmentReqBody::getPrincipalId() const
{
    return principalId_;
}

void DeleteAccountAssignmentReqBody::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool DeleteAccountAssignmentReqBody::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void DeleteAccountAssignmentReqBody::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string DeleteAccountAssignmentReqBody::getPrincipalType() const
{
    return principalType_;
}

void DeleteAccountAssignmentReqBody::setPrincipalType(const std::string& value)
{
    principalType_ = value;
    principalTypeIsSet_ = true;
}

bool DeleteAccountAssignmentReqBody::principalTypeIsSet() const
{
    return principalTypeIsSet_;
}

void DeleteAccountAssignmentReqBody::unsetprincipalType()
{
    principalTypeIsSet_ = false;
}

std::string DeleteAccountAssignmentReqBody::getTargetId() const
{
    return targetId_;
}

void DeleteAccountAssignmentReqBody::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool DeleteAccountAssignmentReqBody::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void DeleteAccountAssignmentReqBody::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string DeleteAccountAssignmentReqBody::getTargetType() const
{
    return targetType_;
}

void DeleteAccountAssignmentReqBody::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool DeleteAccountAssignmentReqBody::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void DeleteAccountAssignmentReqBody::unsettargetType()
{
    targetTypeIsSet_ = false;
}

}
}
}
}
}


