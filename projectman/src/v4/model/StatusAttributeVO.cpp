

#include "huaweicloud/projectman/v4/model/StatusAttributeVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StatusAttributeVO::StatusAttributeVO()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

StatusAttributeVO::~StatusAttributeVO() = default;

void StatusAttributeVO::validate()
{
}

web::json::value StatusAttributeVO::toJson() const
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
bool StatusAttributeVO::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StatusAttributeVO::getId() const
{
    return id_;
}

void StatusAttributeVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StatusAttributeVO::idIsSet() const
{
    return idIsSet_;
}

void StatusAttributeVO::unsetid()
{
    idIsSet_ = false;
}

std::string StatusAttributeVO::getName() const
{
    return name_;
}

void StatusAttributeVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StatusAttributeVO::nameIsSet() const
{
    return nameIsSet_;
}

void StatusAttributeVO::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


