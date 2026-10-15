

#include "huaweicloud/drs/v5/model/CheckDataFilterRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CheckDataFilterRulesResponse::CheckDataFilterRulesResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CheckDataFilterRulesResponse::~CheckDataFilterRulesResponse() = default;

void CheckDataFilterRulesResponse::validate()
{
}

web::json::value CheckDataFilterRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CheckDataFilterRulesResponse::fromJson(const web::json::value& val)
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


std::string CheckDataFilterRulesResponse::getId() const
{
    return id_;
}

void CheckDataFilterRulesResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckDataFilterRulesResponse::idIsSet() const
{
    return idIsSet_;
}

void CheckDataFilterRulesResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


