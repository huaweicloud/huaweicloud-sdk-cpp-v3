

#include "huaweicloud/vpc/v2/model/DeleteRouteTableRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




DeleteRouteTableRequest::DeleteRouteTableRequest()
{
    routetableId_ = "";
    routetableIdIsSet_ = false;
}

DeleteRouteTableRequest::~DeleteRouteTableRequest() = default;

void DeleteRouteTableRequest::validate()
{
}

web::json::value DeleteRouteTableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIdIsSet_) {
        val[utility::conversions::to_string_t("routetable_id")] = ModelBase::toJson(routetableId_);
    }

    return val;
}

bool DeleteRouteTableRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("routetable_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("routetable_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoutetableId(refVal);
        }
    }
    return ok;
}

std::string DeleteRouteTableRequest::getRoutetableId() const
{
    return routetableId_;
}

void DeleteRouteTableRequest::setRoutetableId(const std::string& value)
{
    routetableId_ = value;
    routetableIdIsSet_ = true;
}

bool DeleteRouteTableRequest::routetableIdIsSet() const
{
    return routetableIdIsSet_;
}

void DeleteRouteTableRequest::unsetroutetableId()
{
    routetableIdIsSet_ = false;
}

}
}
}
}
}


