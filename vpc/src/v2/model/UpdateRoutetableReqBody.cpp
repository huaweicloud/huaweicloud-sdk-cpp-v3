

#include "huaweicloud/vpc/v2/model/UpdateRoutetableReqBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateRoutetableReqBody::UpdateRoutetableReqBody()
{
    routetableIsSet_ = false;
}

UpdateRoutetableReqBody::~UpdateRoutetableReqBody() = default;

void UpdateRoutetableReqBody::validate()
{
}

web::json::value UpdateRoutetableReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIsSet_) {
        val[utility::conversions::to_string_t("routetable")] = ModelBase::toJson(routetable_);
    }

    return val;
}

bool UpdateRoutetableReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routetable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routetable"));
        if(!fieldValue.is_null())
        {
            UpdateRouteTableReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutetable(refVal);
        }
    }
    return ok;
}


UpdateRouteTableReq UpdateRoutetableReqBody::getRoutetable() const
{
    return routetable_;
}

void UpdateRoutetableReqBody::setRoutetable(const UpdateRouteTableReq& value)
{
    routetable_ = value;
    routetableIsSet_ = true;
}

bool UpdateRoutetableReqBody::routetableIsSet() const
{
    return routetableIsSet_;
}

void UpdateRoutetableReqBody::unsetroutetable()
{
    routetableIsSet_ = false;
}

}
}
}
}
}


