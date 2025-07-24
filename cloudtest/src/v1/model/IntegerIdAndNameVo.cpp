

#include "huaweicloud/cloudtest/v1/model/IntegerIdAndNameVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IntegerIdAndNameVo::IntegerIdAndNameVo()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

IntegerIdAndNameVo::~IntegerIdAndNameVo() = default;

void IntegerIdAndNameVo::validate()
{
}

web::json::value IntegerIdAndNameVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool IntegerIdAndNameVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int32_t IntegerIdAndNameVo::getId() const
{
    return id_;
}

void IntegerIdAndNameVo::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IntegerIdAndNameVo::idIsSet() const
{
    return idIsSet_;
}

void IntegerIdAndNameVo::unsetid()
{
    idIsSet_ = false;
}

std::string IntegerIdAndNameVo::getName() const
{
    return name_;
}

void IntegerIdAndNameVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IntegerIdAndNameVo::nameIsSet() const
{
    return nameIsSet_;
}

void IntegerIdAndNameVo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


