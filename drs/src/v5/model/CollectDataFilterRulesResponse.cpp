

#include "huaweicloud/drs/v5/model/CollectDataFilterRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CollectDataFilterRulesResponse::CollectDataFilterRulesResponse()
{
    id_ = "";
    idIsSet_ = false;
}

CollectDataFilterRulesResponse::~CollectDataFilterRulesResponse() = default;

void CollectDataFilterRulesResponse::validate()
{
}

web::json::value CollectDataFilterRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool CollectDataFilterRulesResponse::fromJson(const web::json::value& val)
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


std::string CollectDataFilterRulesResponse::getId() const
{
    return id_;
}

void CollectDataFilterRulesResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CollectDataFilterRulesResponse::idIsSet() const
{
    return idIsSet_;
}

void CollectDataFilterRulesResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


