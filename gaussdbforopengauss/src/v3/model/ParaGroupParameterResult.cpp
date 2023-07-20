

#include "huaweicloud/gaussdbforopengauss/v3/model/ParaGroupParameterResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ParaGroupParameterResult::ParaGroupParameterResult()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    needRestart_ = false;
    needRestartIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ParaGroupParameterResult::~ParaGroupParameterResult() = default;

void ParaGroupParameterResult::validate()
{
}

web::json::value ParaGroupParameterResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(needRestartIsSet_) {
        val[utility::conversions::to_string_t("need_restart")] = ModelBase::toJson(needRestart_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool ParaGroupParameterResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("need_restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_restart"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedRestart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueRange(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}

std::string ParaGroupParameterResult::getName() const
{
    return name_;
}

void ParaGroupParameterResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParaGroupParameterResult::nameIsSet() const
{
    return nameIsSet_;
}

void ParaGroupParameterResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ParaGroupParameterResult::getValue() const
{
    return value_;
}

void ParaGroupParameterResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ParaGroupParameterResult::valueIsSet() const
{
    return valueIsSet_;
}

void ParaGroupParameterResult::unsetvalue()
{
    valueIsSet_ = false;
}

bool ParaGroupParameterResult::isNeedRestart() const
{
    return needRestart_;
}

void ParaGroupParameterResult::setNeedRestart(bool value)
{
    needRestart_ = value;
    needRestartIsSet_ = true;
}

bool ParaGroupParameterResult::needRestartIsSet() const
{
    return needRestartIsSet_;
}

void ParaGroupParameterResult::unsetneedRestart()
{
    needRestartIsSet_ = false;
}

bool ParaGroupParameterResult::isReadonly() const
{
    return readonly_;
}

void ParaGroupParameterResult::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool ParaGroupParameterResult::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void ParaGroupParameterResult::unsetreadonly()
{
    readonlyIsSet_ = false;
}

std::string ParaGroupParameterResult::getValueRange() const
{
    return valueRange_;
}

void ParaGroupParameterResult::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ParaGroupParameterResult::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ParaGroupParameterResult::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string ParaGroupParameterResult::getDataType() const
{
    return dataType_;
}

void ParaGroupParameterResult::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool ParaGroupParameterResult::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void ParaGroupParameterResult::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string ParaGroupParameterResult::getDescription() const
{
    return description_;
}

void ParaGroupParameterResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ParaGroupParameterResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ParaGroupParameterResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


