

#include "huaweicloud/projectman/v4/model/CommentExtendAttribute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CommentExtendAttribute::CommentExtendAttribute()
{
    operatorIsSet_ = false;
    operatorId_ = "";
    operatorIdIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    actionUs_ = "";
    actionUsIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    preStatusCode_ = "";
    preStatusCodeIsSet_ = false;
    newStatusCode_ = "";
    newStatusCodeIsSet_ = false;
    preStatusIsSet_ = false;
    newStatusIsSet_ = false;
    fieldType_ = "";
    fieldTypeIsSet_ = false;
    fieldTypeId_ = "";
    fieldTypeIdIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

CommentExtendAttribute::~CommentExtendAttribute() = default;

void CommentExtendAttribute::validate()
{
}

web::json::value CommentExtendAttribute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(operatorIdIsSet_) {
        val[utility::conversions::to_string_t("operator_id")] = ModelBase::toJson(operatorId_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(actionUsIsSet_) {
        val[utility::conversions::to_string_t("action_us")] = ModelBase::toJson(actionUs_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(preStatusCodeIsSet_) {
        val[utility::conversions::to_string_t("pre_status_code")] = ModelBase::toJson(preStatusCode_);
    }
    if(newStatusCodeIsSet_) {
        val[utility::conversions::to_string_t("new_status_code")] = ModelBase::toJson(newStatusCode_);
    }
    if(preStatusIsSet_) {
        val[utility::conversions::to_string_t("pre_status")] = ModelBase::toJson(preStatus_);
    }
    if(newStatusIsSet_) {
        val[utility::conversions::to_string_t("new_status")] = ModelBase::toJson(newStatus_);
    }
    if(fieldTypeIsSet_) {
        val[utility::conversions::to_string_t("field_type")] = ModelBase::toJson(fieldType_);
    }
    if(fieldTypeIdIsSet_) {
        val[utility::conversions::to_string_t("field_type_id")] = ModelBase::toJson(fieldTypeId_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool CommentExtendAttribute::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            UserVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_us"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_us"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionUs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_status_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_status_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_status_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pre_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_status"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_status"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_type_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_type_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


UserVO CommentExtendAttribute::getOperator() const
{
    return operator_;
}

void CommentExtendAttribute::setOperator(const UserVO& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool CommentExtendAttribute::operatorIsSet() const
{
    return operatorIsSet_;
}

void CommentExtendAttribute::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string CommentExtendAttribute::getOperatorId() const
{
    return operatorId_;
}

void CommentExtendAttribute::setOperatorId(const std::string& value)
{
    operatorId_ = value;
    operatorIdIsSet_ = true;
}

bool CommentExtendAttribute::operatorIdIsSet() const
{
    return operatorIdIsSet_;
}

void CommentExtendAttribute::unsetoperatorId()
{
    operatorIdIsSet_ = false;
}

std::string CommentExtendAttribute::getAction() const
{
    return action_;
}

void CommentExtendAttribute::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool CommentExtendAttribute::actionIsSet() const
{
    return actionIsSet_;
}

void CommentExtendAttribute::unsetaction()
{
    actionIsSet_ = false;
}

std::string CommentExtendAttribute::getActionUs() const
{
    return actionUs_;
}

void CommentExtendAttribute::setActionUs(const std::string& value)
{
    actionUs_ = value;
    actionUsIsSet_ = true;
}

bool CommentExtendAttribute::actionUsIsSet() const
{
    return actionUsIsSet_;
}

void CommentExtendAttribute::unsetactionUs()
{
    actionUsIsSet_ = false;
}

std::string CommentExtendAttribute::getObjectType() const
{
    return objectType_;
}

void CommentExtendAttribute::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool CommentExtendAttribute::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void CommentExtendAttribute::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string CommentExtendAttribute::getPreStatusCode() const
{
    return preStatusCode_;
}

void CommentExtendAttribute::setPreStatusCode(const std::string& value)
{
    preStatusCode_ = value;
    preStatusCodeIsSet_ = true;
}

bool CommentExtendAttribute::preStatusCodeIsSet() const
{
    return preStatusCodeIsSet_;
}

void CommentExtendAttribute::unsetpreStatusCode()
{
    preStatusCodeIsSet_ = false;
}

std::string CommentExtendAttribute::getNewStatusCode() const
{
    return newStatusCode_;
}

void CommentExtendAttribute::setNewStatusCode(const std::string& value)
{
    newStatusCode_ = value;
    newStatusCodeIsSet_ = true;
}

bool CommentExtendAttribute::newStatusCodeIsSet() const
{
    return newStatusCodeIsSet_;
}

void CommentExtendAttribute::unsetnewStatusCode()
{
    newStatusCodeIsSet_ = false;
}

Object CommentExtendAttribute::getPreStatus() const
{
    return preStatus_;
}

void CommentExtendAttribute::setPreStatus(const Object& value)
{
    preStatus_ = value;
    preStatusIsSet_ = true;
}

bool CommentExtendAttribute::preStatusIsSet() const
{
    return preStatusIsSet_;
}

void CommentExtendAttribute::unsetpreStatus()
{
    preStatusIsSet_ = false;
}

Object CommentExtendAttribute::getNewStatus() const
{
    return newStatus_;
}

void CommentExtendAttribute::setNewStatus(const Object& value)
{
    newStatus_ = value;
    newStatusIsSet_ = true;
}

bool CommentExtendAttribute::newStatusIsSet() const
{
    return newStatusIsSet_;
}

void CommentExtendAttribute::unsetnewStatus()
{
    newStatusIsSet_ = false;
}

std::string CommentExtendAttribute::getFieldType() const
{
    return fieldType_;
}

void CommentExtendAttribute::setFieldType(const std::string& value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool CommentExtendAttribute::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void CommentExtendAttribute::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

std::string CommentExtendAttribute::getFieldTypeId() const
{
    return fieldTypeId_;
}

void CommentExtendAttribute::setFieldTypeId(const std::string& value)
{
    fieldTypeId_ = value;
    fieldTypeIdIsSet_ = true;
}

bool CommentExtendAttribute::fieldTypeIdIsSet() const
{
    return fieldTypeIdIsSet_;
}

void CommentExtendAttribute::unsetfieldTypeId()
{
    fieldTypeIdIsSet_ = false;
}

std::string CommentExtendAttribute::getDisplayName() const
{
    return displayName_;
}

void CommentExtendAttribute::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool CommentExtendAttribute::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void CommentExtendAttribute::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


