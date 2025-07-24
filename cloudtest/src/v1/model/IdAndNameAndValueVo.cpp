

#include "huaweicloud/cloudtest/v1/model/IdAndNameAndValueVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IdAndNameAndValueVo::IdAndNameAndValueVo()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

IdAndNameAndValueVo::~IdAndNameAndValueVo() = default;

void IdAndNameAndValueVo::validate()
{
}

web::json::value IdAndNameAndValueVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool IdAndNameAndValueVo::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string IdAndNameAndValueVo::getName() const
{
    return name_;
}

void IdAndNameAndValueVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IdAndNameAndValueVo::nameIsSet() const
{
    return nameIsSet_;
}

void IdAndNameAndValueVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t IdAndNameAndValueVo::getValue() const
{
    return value_;
}

void IdAndNameAndValueVo::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool IdAndNameAndValueVo::valueIsSet() const
{
    return valueIsSet_;
}

void IdAndNameAndValueVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string IdAndNameAndValueVo::getId() const
{
    return id_;
}

void IdAndNameAndValueVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IdAndNameAndValueVo::idIsSet() const
{
    return idIsSet_;
}

void IdAndNameAndValueVo::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


