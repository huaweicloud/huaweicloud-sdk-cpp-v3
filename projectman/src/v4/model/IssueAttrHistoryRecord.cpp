

#include "huaweicloud/projectman/v4/model/IssueAttrHistoryRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueAttrHistoryRecord::IssueAttrHistoryRecord()
{
    fieldKey_ = "";
    fieldKeyIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
    id_ = 0L;
    idIsSet_ = false;
    issueId_ = 0L;
    issueIdIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    operatedTime_ = 0L;
    operatedTimeIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    operatorIsSet_ = false;
    property_ = "";
    propertyIsSet_ = false;
}

IssueAttrHistoryRecord::~IssueAttrHistoryRecord() = default;

void IssueAttrHistoryRecord::validate()
{
}

web::json::value IssueAttrHistoryRecord::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldKeyIsSet_) {
        val[utility::conversions::to_string_t("field_key")] = ModelBase::toJson(fieldKey_);
    }
    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("field_name")] = ModelBase::toJson(fieldName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(newValueIsSet_) {
        val[utility::conversions::to_string_t("new_value")] = ModelBase::toJson(newValue_);
    }
    if(oldValueIsSet_) {
        val[utility::conversions::to_string_t("old_value")] = ModelBase::toJson(oldValue_);
    }
    if(operatedTimeIsSet_) {
        val[utility::conversions::to_string_t("operated_time")] = ModelBase::toJson(operatedTime_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(operatorIsSet_) {
        val[utility::conversions::to_string_t("operator")] = ModelBase::toJson(operator_);
    }
    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }

    return val;
}
bool IssueAttrHistoryRecord::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("field_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operated_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operator"));
        if(!fieldValue.is_null())
        {
            IssueUser refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("property"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperty(refVal);
        }
    }
    return ok;
}


std::string IssueAttrHistoryRecord::getFieldKey() const
{
    return fieldKey_;
}

void IssueAttrHistoryRecord::setFieldKey(const std::string& value)
{
    fieldKey_ = value;
    fieldKeyIsSet_ = true;
}

bool IssueAttrHistoryRecord::fieldKeyIsSet() const
{
    return fieldKeyIsSet_;
}

void IssueAttrHistoryRecord::unsetfieldKey()
{
    fieldKeyIsSet_ = false;
}

std::string IssueAttrHistoryRecord::getFieldName() const
{
    return fieldName_;
}

void IssueAttrHistoryRecord::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool IssueAttrHistoryRecord::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void IssueAttrHistoryRecord::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

int64_t IssueAttrHistoryRecord::getId() const
{
    return id_;
}

void IssueAttrHistoryRecord::setId(int64_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueAttrHistoryRecord::idIsSet() const
{
    return idIsSet_;
}

void IssueAttrHistoryRecord::unsetid()
{
    idIsSet_ = false;
}

int64_t IssueAttrHistoryRecord::getIssueId() const
{
    return issueId_;
}

void IssueAttrHistoryRecord::setIssueId(int64_t value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool IssueAttrHistoryRecord::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void IssueAttrHistoryRecord::unsetissueId()
{
    issueIdIsSet_ = false;
}

std::string IssueAttrHistoryRecord::getNewValue() const
{
    return newValue_;
}

void IssueAttrHistoryRecord::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool IssueAttrHistoryRecord::newValueIsSet() const
{
    return newValueIsSet_;
}

void IssueAttrHistoryRecord::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string IssueAttrHistoryRecord::getOldValue() const
{
    return oldValue_;
}

void IssueAttrHistoryRecord::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool IssueAttrHistoryRecord::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void IssueAttrHistoryRecord::unsetoldValue()
{
    oldValueIsSet_ = false;
}

int64_t IssueAttrHistoryRecord::getOperatedTime() const
{
    return operatedTime_;
}

void IssueAttrHistoryRecord::setOperatedTime(int64_t value)
{
    operatedTime_ = value;
    operatedTimeIsSet_ = true;
}

bool IssueAttrHistoryRecord::operatedTimeIsSet() const
{
    return operatedTimeIsSet_;
}

void IssueAttrHistoryRecord::unsetoperatedTime()
{
    operatedTimeIsSet_ = false;
}

std::string IssueAttrHistoryRecord::getOperation() const
{
    return operation_;
}

void IssueAttrHistoryRecord::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool IssueAttrHistoryRecord::operationIsSet() const
{
    return operationIsSet_;
}

void IssueAttrHistoryRecord::unsetoperation()
{
    operationIsSet_ = false;
}

IssueUser IssueAttrHistoryRecord::getOperator() const
{
    return operator_;
}

void IssueAttrHistoryRecord::setOperator(const IssueUser& value)
{
    operator_ = value;
    operatorIsSet_ = true;
}

bool IssueAttrHistoryRecord::operatorIsSet() const
{
    return operatorIsSet_;
}

void IssueAttrHistoryRecord::unsetoperator()
{
    operatorIsSet_ = false;
}

std::string IssueAttrHistoryRecord::getProperty() const
{
    return property_;
}

void IssueAttrHistoryRecord::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool IssueAttrHistoryRecord::propertyIsSet() const
{
    return propertyIsSet_;
}

void IssueAttrHistoryRecord::unsetproperty()
{
    propertyIsSet_ = false;
}

}
}
}
}
}


