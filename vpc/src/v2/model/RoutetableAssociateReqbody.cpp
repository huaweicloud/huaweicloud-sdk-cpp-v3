

#include "huaweicloud/vpc/v2/model/RoutetableAssociateReqbody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




RoutetableAssociateReqbody::RoutetableAssociateReqbody()
{
    routetableIsSet_ = false;
}

RoutetableAssociateReqbody::~RoutetableAssociateReqbody() = default;

void RoutetableAssociateReqbody::validate()
{
}

web::json::value RoutetableAssociateReqbody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIsSet_) {
        val[utility::conversions::to_string_t("routetable")] = ModelBase::toJson(routetable_);
    }

    return val;
}

bool RoutetableAssociateReqbody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routetable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routetable"));
        if(!fieldValue.is_null())
        {
            AsscoiateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutetable(refVal);
        }
    }
    return ok;
}


AsscoiateReq RoutetableAssociateReqbody::getRoutetable() const
{
    return routetable_;
}

void RoutetableAssociateReqbody::setRoutetable(const AsscoiateReq& value)
{
    routetable_ = value;
    routetableIsSet_ = true;
}

bool RoutetableAssociateReqbody::routetableIsSet() const
{
    return routetableIsSet_;
}

void RoutetableAssociateReqbody::unsetroutetable()
{
    routetableIsSet_ = false;
}

}
}
}
}
}


