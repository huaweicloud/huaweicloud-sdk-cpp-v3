

#include "huaweicloud/projectman/v4/model/WorkItemFlowFieldConfigVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowFieldConfigVO::WorkItemFlowFieldConfigVO()
{
    fieldCode_ = "";
    fieldCodeIsSet_ = false;
    valueType_ = "";
    valueTypeIsSet_ = false;
    fieldOperation_ = "";
    fieldOperationIsSet_ = false;
    fieldValueIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    fieldRangeIsSet_ = false;
}

WorkItemFlowFieldConfigVO::~WorkItemFlowFieldConfigVO() = default;

void WorkItemFlowFieldConfigVO::validate()
{
}

web::json::value WorkItemFlowFieldConfigVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldCodeIsSet_) {
        val[utility::conversions::to_string_t("field_code")] = ModelBase::toJson(fieldCode_);
    }
    if(valueTypeIsSet_) {
        val[utility::conversions::to_string_t("value_type")] = ModelBase::toJson(valueType_);
    }
    if(fieldOperationIsSet_) {
        val[utility::conversions::to_string_t("field_operation")] = ModelBase::toJson(fieldOperation_);
    }
    if(fieldValueIsSet_) {
        val[utility::conversions::to_string_t("field_value")] = ModelBase::toJson(fieldValue_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(fieldRangeIsSet_) {
        val[utility::conversions::to_string_t("field_range")] = ModelBase::toJson(fieldRange_);
    }

    return val;
}
bool WorkItemFlowFieldConfigVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("field_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_value"));
        if(!fieldValue.is_null())
        {
            WorkItemFlowFieldValueVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_range"));
        if(!fieldValue.is_null())
        {
            WorkItemFlowFieldRangeVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldRange(refVal);
        }
    }
    return ok;
}


std::string WorkItemFlowFieldConfigVO::getFieldCode() const
{
    return fieldCode_;
}

void WorkItemFlowFieldConfigVO::setFieldCode(const std::string& value)
{
    fieldCode_ = value;
    fieldCodeIsSet_ = true;
}

bool WorkItemFlowFieldConfigVO::fieldCodeIsSet() const
{
    return fieldCodeIsSet_;
}

void WorkItemFlowFieldConfigVO::unsetfieldCode()
{
    fieldCodeIsSet_ = false;
}

std::string WorkItemFlowFieldConfigVO::getValueType() const
{
    return valueType_;
}

void WorkItemFlowFieldConfigVO::setValueType(const std::string& value)
{
    valueType_ = value;
    valueTypeIsSet_ = true;
}

bool WorkItemFlowFieldConfigVO::valueTypeIsSet() const
{
    return valueTypeIsSet_;
}

void WorkItemFlowFieldConfigVO::unsetvalueType()
{
    valueTypeIsSet_ = false;
}

std::string WorkItemFlowFieldConfigVO::getFieldOperation() const
{
    return fieldOperation_;
}

void WorkItemFlowFieldConfigVO::setFieldOperation(const std::string& value)
{
    fieldOperation_ = value;
    fieldOperationIsSet_ = true;
}

bool WorkItemFlowFieldConfigVO::fieldOperationIsSet() const
{
    return fieldOperationIsSet_;
}

void WorkItemFlowFieldConfigVO::unsetfieldOperation()
{
    fieldOperationIsSet_ = false;
}

WorkItemFlowFieldValueVO WorkItemFlowFieldConfigVO::getFieldValue() const
{
    return fieldValue_;
}

void WorkItemFlowFieldConfigVO::setFieldValue(const WorkItemFlowFieldValueVO& value)
{
    fieldValue_ = value;
    fieldValueIsSet_ = true;
}

bool WorkItemFlowFieldConfigVO::fieldValueIsSet() const
{
    return fieldValueIsSet_;
}

void WorkItemFlowFieldConfigVO::unsetfieldValue()
{
    fieldValueIsSet_ = false;
}

bool WorkItemFlowFieldConfigVO::isRequired() const
{
    return required_;
}

void WorkItemFlowFieldConfigVO::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool WorkItemFlowFieldConfigVO::requiredIsSet() const
{
    return requiredIsSet_;
}

void WorkItemFlowFieldConfigVO::unsetrequired()
{
    requiredIsSet_ = false;
}

WorkItemFlowFieldRangeVO WorkItemFlowFieldConfigVO::getFieldRange() const
{
    return fieldRange_;
}

void WorkItemFlowFieldConfigVO::setFieldRange(const WorkItemFlowFieldRangeVO& value)
{
    fieldRange_ = value;
    fieldRangeIsSet_ = true;
}

bool WorkItemFlowFieldConfigVO::fieldRangeIsSet() const
{
    return fieldRangeIsSet_;
}

void WorkItemFlowFieldConfigVO::unsetfieldRange()
{
    fieldRangeIsSet_ = false;
}

}
}
}
}
}


