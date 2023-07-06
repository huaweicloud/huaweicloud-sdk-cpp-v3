

#include "huaweicloud/vpc/v2/model/ShowRouteTableRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowRouteTableRequest::ShowRouteTableRequest()
{
    routetableId_ = "";
    routetableIdIsSet_ = false;
}

ShowRouteTableRequest::~ShowRouteTableRequest() = default;

void ShowRouteTableRequest::validate()
{
}

web::json::value ShowRouteTableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(routetableIdIsSet_) {
        val[utility::conversions::to_string_t("routetable_id")] = ModelBase::toJson(routetableId_);
    }

    return val;
}

bool ShowRouteTableRequest::fromJson(const web::json::value& val)
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

std::string ShowRouteTableRequest::getRoutetableId() const
{
    return routetableId_;
}

void ShowRouteTableRequest::setRoutetableId(const std::string& value)
{
    routetableId_ = value;
    routetableIdIsSet_ = true;
}

bool ShowRouteTableRequest::routetableIdIsSet() const
{
    return routetableIdIsSet_;
}

void ShowRouteTableRequest::unsetroutetableId()
{
    routetableIdIsSet_ = false;
}

}
}
}
}
}


