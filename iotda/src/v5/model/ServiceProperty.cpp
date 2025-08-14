

#include "huaweicloud/iotda/v5/model/ServiceProperty.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ServiceProperty::ServiceProperty()
{
    propertyName_ = "";
    propertyNameIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    enumListIsSet_ = false;
    min_ = "";
    minIsSet_ = false;
    max_ = "";
    maxIsSet_ = false;
    maxLength_ = 0;
    maxLengthIsSet_ = false;
    step_ = 0.0;
    stepIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    method_ = "";
    methodIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    defaultValueIsSet_ = false;
}

ServiceProperty::~ServiceProperty() = default;

void ServiceProperty::validate()
{
}

web::json::value ServiceProperty::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertyNameIsSet_) {
        val[utility::conversions::to_string_t("property_name")] = ModelBase::toJson(propertyName_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(enumListIsSet_) {
        val[utility::conversions::to_string_t("enum_list")] = ModelBase::toJson(enumList_);
    }
    if(minIsSet_) {
        val[utility::conversions::to_string_t("min")] = ModelBase::toJson(min_);
    }
    if(maxIsSet_) {
        val[utility::conversions::to_string_t("max")] = ModelBase::toJson(max_);
    }
    if(maxLengthIsSet_) {
        val[utility::conversions::to_string_t("max_length")] = ModelBase::toJson(maxLength_);
    }
    if(stepIsSet_) {
        val[utility::conversions::to_string_t("step")] = ModelBase::toJson(step_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(methodIsSet_) {
        val[utility::conversions::to_string_t("method")] = ModelBase::toJson(method_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }

    return val;
}
bool ServiceProperty::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("property_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPropertyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enum_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enum_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnumList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    return ok;
}


std::string ServiceProperty::getPropertyName() const
{
    return propertyName_;
}

void ServiceProperty::setPropertyName(const std::string& value)
{
    propertyName_ = value;
    propertyNameIsSet_ = true;
}

bool ServiceProperty::propertyNameIsSet() const
{
    return propertyNameIsSet_;
}

void ServiceProperty::unsetpropertyName()
{
    propertyNameIsSet_ = false;
}

std::string ServiceProperty::getDataType() const
{
    return dataType_;
}

void ServiceProperty::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool ServiceProperty::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void ServiceProperty::unsetdataType()
{
    dataTypeIsSet_ = false;
}

bool ServiceProperty::isRequired() const
{
    return required_;
}

void ServiceProperty::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool ServiceProperty::requiredIsSet() const
{
    return requiredIsSet_;
}

void ServiceProperty::unsetrequired()
{
    requiredIsSet_ = false;
}

std::vector<std::string>& ServiceProperty::getEnumList()
{
    return enumList_;
}

void ServiceProperty::setEnumList(const std::vector<std::string>& value)
{
    enumList_ = value;
    enumListIsSet_ = true;
}

bool ServiceProperty::enumListIsSet() const
{
    return enumListIsSet_;
}

void ServiceProperty::unsetenumList()
{
    enumListIsSet_ = false;
}

std::string ServiceProperty::getMin() const
{
    return min_;
}

void ServiceProperty::setMin(const std::string& value)
{
    min_ = value;
    minIsSet_ = true;
}

bool ServiceProperty::minIsSet() const
{
    return minIsSet_;
}

void ServiceProperty::unsetmin()
{
    minIsSet_ = false;
}

std::string ServiceProperty::getMax() const
{
    return max_;
}

void ServiceProperty::setMax(const std::string& value)
{
    max_ = value;
    maxIsSet_ = true;
}

bool ServiceProperty::maxIsSet() const
{
    return maxIsSet_;
}

void ServiceProperty::unsetmax()
{
    maxIsSet_ = false;
}

int32_t ServiceProperty::getMaxLength() const
{
    return maxLength_;
}

void ServiceProperty::setMaxLength(int32_t value)
{
    maxLength_ = value;
    maxLengthIsSet_ = true;
}

bool ServiceProperty::maxLengthIsSet() const
{
    return maxLengthIsSet_;
}

void ServiceProperty::unsetmaxLength()
{
    maxLengthIsSet_ = false;
}

double ServiceProperty::getStep() const
{
    return step_;
}

void ServiceProperty::setStep(double value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool ServiceProperty::stepIsSet() const
{
    return stepIsSet_;
}

void ServiceProperty::unsetstep()
{
    stepIsSet_ = false;
}

std::string ServiceProperty::getUnit() const
{
    return unit_;
}

void ServiceProperty::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ServiceProperty::unitIsSet() const
{
    return unitIsSet_;
}

void ServiceProperty::unsetunit()
{
    unitIsSet_ = false;
}

std::string ServiceProperty::getMethod() const
{
    return method_;
}

void ServiceProperty::setMethod(const std::string& value)
{
    method_ = value;
    methodIsSet_ = true;
}

bool ServiceProperty::methodIsSet() const
{
    return methodIsSet_;
}

void ServiceProperty::unsetmethod()
{
    methodIsSet_ = false;
}

std::string ServiceProperty::getDescription() const
{
    return description_;
}

void ServiceProperty::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceProperty::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceProperty::unsetdescription()
{
    descriptionIsSet_ = false;
}

Object ServiceProperty::getDefaultValue() const
{
    return defaultValue_;
}

void ServiceProperty::setDefaultValue(const Object& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool ServiceProperty::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void ServiceProperty::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

}
}
}
}
}


