

#include "huaweicloud/rds/v3/model/ShowPostgresqlParamValueResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowPostgresqlParamValueResponse::ShowPostgresqlParamValueResponse()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ShowPostgresqlParamValueResponse::~ShowPostgresqlParamValueResponse() = default;

void ShowPostgresqlParamValueResponse::validate()
{
}

web::json::value ShowPostgresqlParamValueResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(restartRequiredIsSet_) {
        val[utility::conversions::to_string_t("restart_required")] = ModelBase::toJson(restartRequired_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool ShowPostgresqlParamValueResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("restart_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartRequired(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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

std::string ShowPostgresqlParamValueResponse::getName() const
{
    return name_;
}

void ShowPostgresqlParamValueResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPostgresqlParamValueResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPostgresqlParamValueResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowPostgresqlParamValueResponse::getValue() const
{
    return value_;
}

void ShowPostgresqlParamValueResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ShowPostgresqlParamValueResponse::valueIsSet() const
{
    return valueIsSet_;
}

void ShowPostgresqlParamValueResponse::unsetvalue()
{
    valueIsSet_ = false;
}

bool ShowPostgresqlParamValueResponse::isRestartRequired() const
{
    return restartRequired_;
}

void ShowPostgresqlParamValueResponse::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool ShowPostgresqlParamValueResponse::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void ShowPostgresqlParamValueResponse::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

std::string ShowPostgresqlParamValueResponse::getValueRange() const
{
    return valueRange_;
}

void ShowPostgresqlParamValueResponse::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ShowPostgresqlParamValueResponse::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ShowPostgresqlParamValueResponse::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string ShowPostgresqlParamValueResponse::getType() const
{
    return type_;
}

void ShowPostgresqlParamValueResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowPostgresqlParamValueResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowPostgresqlParamValueResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowPostgresqlParamValueResponse::getDescription() const
{
    return description_;
}

void ShowPostgresqlParamValueResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowPostgresqlParamValueResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowPostgresqlParamValueResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


