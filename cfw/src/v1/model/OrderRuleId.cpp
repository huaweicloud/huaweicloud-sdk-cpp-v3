

#include "huaweicloud/cfw/v1/model/OrderRuleId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




OrderRuleId::OrderRuleId()
{
    id_ = "";
    idIsSet_ = false;
}

OrderRuleId::~OrderRuleId() = default;

void OrderRuleId::validate()
{
}

web::json::value OrderRuleId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool OrderRuleId::fromJson(const web::json::value& val)
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
    return ok;
}


std::string OrderRuleId::getId() const
{
    return id_;
}

void OrderRuleId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OrderRuleId::idIsSet() const
{
    return idIsSet_;
}

void OrderRuleId::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


