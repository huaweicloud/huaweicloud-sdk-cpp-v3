

#include "huaweicloud/vpc/v2/model/CreateRoutetableReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateRoutetableReqBody::CreateRoutetableReqBody()
{
    routetableIsSet_ = false;
}

CreateRoutetableReqBody::~CreateRoutetableReqBody() = default;

void CreateRoutetableReqBody::validate()
{
}

web::json::value CreateRoutetableReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIsSet_) {
        val[utility::conversions::to_string_t("routetable")] = ModelBase::toJson(routetable_);
    }

    return val;
}
bool CreateRoutetableReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routetable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routetable"));
        if(!fieldValue.is_null())
        {
            CreateRouteTableReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutetable(refVal);
        }
    }
    return ok;
}


CreateRouteTableReq CreateRoutetableReqBody::getRoutetable() const
{
    return routetable_;
}

void CreateRoutetableReqBody::setRoutetable(const CreateRouteTableReq& value)
{
    routetable_ = value;
    routetableIsSet_ = true;
}

bool CreateRoutetableReqBody::routetableIsSet() const
{
    return routetableIsSet_;
}

void CreateRoutetableReqBody::unsetroutetable()
{
    routetableIsSet_ = false;
}

}
}
}
}
}


