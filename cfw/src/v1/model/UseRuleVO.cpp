

#include "huaweicloud/cfw/v1/model/UseRuleVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UseRuleVO::UseRuleVO()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UseRuleVO::~UseRuleVO() = default;

void UseRuleVO::validate()
{
}

web::json::value UseRuleVO::toJson() const
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
bool UseRuleVO::fromJson(const web::json::value& val)
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


std::string UseRuleVO::getId() const
{
    return id_;
}

void UseRuleVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UseRuleVO::idIsSet() const
{
    return idIsSet_;
}

void UseRuleVO::unsetid()
{
    idIsSet_ = false;
}

std::string UseRuleVO::getName() const
{
    return name_;
}

void UseRuleVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UseRuleVO::nameIsSet() const
{
    return nameIsSet_;
}

void UseRuleVO::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


