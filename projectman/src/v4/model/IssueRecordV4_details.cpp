

#include "huaweicloud/projectman/v4/model/IssueRecordV4_details.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueRecordV4_details::IssueRecordV4_details()
{
    property_ = "";
    propertyIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IssueRecordV4_details::~IssueRecordV4_details() = default;

void IssueRecordV4_details::validate()
{
}

web::json::value IssueRecordV4_details::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }
    if(oldValueIsSet_) {
        val[utility::conversions::to_string_t("old_value")] = ModelBase::toJson(oldValue_);
    }
    if(newValueIsSet_) {
        val[utility::conversions::to_string_t("new_value")] = ModelBase::toJson(newValue_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool IssueRecordV4_details::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("property"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperty(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("new_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string IssueRecordV4_details::getProperty() const
{
    return property_;
}

void IssueRecordV4_details::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool IssueRecordV4_details::propertyIsSet() const
{
    return propertyIsSet_;
}

void IssueRecordV4_details::unsetproperty()
{
    propertyIsSet_ = false;
}

std::string IssueRecordV4_details::getOldValue() const
{
    return oldValue_;
}

void IssueRecordV4_details::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool IssueRecordV4_details::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void IssueRecordV4_details::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string IssueRecordV4_details::getNewValue() const
{
    return newValue_;
}

void IssueRecordV4_details::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool IssueRecordV4_details::newValueIsSet() const
{
    return newValueIsSet_;
}

void IssueRecordV4_details::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string IssueRecordV4_details::getOperation() const
{
    return operation_;
}

void IssueRecordV4_details::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool IssueRecordV4_details::operationIsSet() const
{
    return operationIsSet_;
}

void IssueRecordV4_details::unsetoperation()
{
    operationIsSet_ = false;
}

int32_t IssueRecordV4_details::getId() const
{
    return id_;
}

void IssueRecordV4_details::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueRecordV4_details::idIsSet() const
{
    return idIsSet_;
}

void IssueRecordV4_details::unsetid()
{
    idIsSet_ = false;
}

std::string IssueRecordV4_details::getName() const
{
    return name_;
}

void IssueRecordV4_details::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IssueRecordV4_details::nameIsSet() const
{
    return nameIsSet_;
}

void IssueRecordV4_details::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


