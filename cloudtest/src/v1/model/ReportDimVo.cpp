

#include "huaweicloud/cloudtest/v1/model/ReportDimVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ReportDimVo::ReportDimVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
}

ReportDimVo::~ReportDimVo() = default;

void ReportDimVo::validate()
{
}

web::json::value ReportDimVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ReportDimVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ReportDimVo::getId() const
{
    return id_;
}

void ReportDimVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReportDimVo::idIsSet() const
{
    return idIsSet_;
}

void ReportDimVo::unsetid()
{
    idIsSet_ = false;
}

std::string ReportDimVo::getName() const
{
    return name_;
}

void ReportDimVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReportDimVo::nameIsSet() const
{
    return nameIsSet_;
}

void ReportDimVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t ReportDimVo::getValue() const
{
    return value_;
}

void ReportDimVo::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ReportDimVo::valueIsSet() const
{
    return valueIsSet_;
}

void ReportDimVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


