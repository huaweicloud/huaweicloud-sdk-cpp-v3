

#include "huaweicloud/codeartspipeline/v2/model/PipelineParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineParam::PipelineParam()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    paramType_ = "";
    paramTypeIsSet_ = false;
    isStatic_ = false;
    isStaticIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
}

PipelineParam::~PipelineParam() = default;

void PipelineParam::validate()
{
}

web::json::value PipelineParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(paramTypeIsSet_) {
        val[utility::conversions::to_string_t("param_type")] = ModelBase::toJson(paramType_);
    }
    if(isStaticIsSet_) {
        val[utility::conversions::to_string_t("is_static")] = ModelBase::toJson(isStatic_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }

    return val;
}
bool PipelineParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("param_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_static"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_static"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsStatic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    return ok;
}


std::string PipelineParam::getName() const
{
    return name_;
}

void PipelineParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineParam::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineParam::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineParam::getValue() const
{
    return value_;
}

void PipelineParam::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool PipelineParam::valueIsSet() const
{
    return valueIsSet_;
}

void PipelineParam::unsetvalue()
{
    valueIsSet_ = false;
}

std::string PipelineParam::getDescription() const
{
    return description_;
}

void PipelineParam::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PipelineParam::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PipelineParam::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PipelineParam::getParamType() const
{
    return paramType_;
}

void PipelineParam::setParamType(const std::string& value)
{
    paramType_ = value;
    paramTypeIsSet_ = true;
}

bool PipelineParam::paramTypeIsSet() const
{
    return paramTypeIsSet_;
}

void PipelineParam::unsetparamType()
{
    paramTypeIsSet_ = false;
}

bool PipelineParam::isIsStatic() const
{
    return isStatic_;
}

void PipelineParam::setIsStatic(bool value)
{
    isStatic_ = value;
    isStaticIsSet_ = true;
}

bool PipelineParam::isStaticIsSet() const
{
    return isStaticIsSet_;
}

void PipelineParam::unsetisStatic()
{
    isStaticIsSet_ = false;
}

bool PipelineParam::isIsDefault() const
{
    return isDefault_;
}

void PipelineParam::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool PipelineParam::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void PipelineParam::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

}
}
}
}
}


