

#include "huaweicloud/cfw/v1/model/RuleId.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleId::RuleId()
{
    id_ = "";
    idIsSet_ = false;
}

RuleId::~RuleId() = default;

void RuleId::validate()
{
}

web::json::value RuleId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool RuleId::fromJson(const web::json::value& val)
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

std::string RuleId::getId() const
{
    return id_;
}

void RuleId::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RuleId::idIsSet() const
{
    return idIsSet_;
}

void RuleId::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


