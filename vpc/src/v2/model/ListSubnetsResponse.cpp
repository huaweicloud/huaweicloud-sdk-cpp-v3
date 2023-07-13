

#include "huaweicloud/vpc/v2/model/ListSubnetsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSubnetsResponse::ListSubnetsResponse()
{
    subnetsIsSet_ = false;
}

ListSubnetsResponse::~ListSubnetsResponse() = default;

void ListSubnetsResponse::validate()
{
}

web::json::value ListSubnetsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }

    return val;
}

bool ListSubnetsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<Subnet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
        }
    }
    return ok;
}

std::vector<Subnet>& ListSubnetsResponse::getSubnets()
{
    return subnets_;
}

void ListSubnetsResponse::setSubnets(const std::vector<Subnet>& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool ListSubnetsResponse::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void ListSubnetsResponse::unsetsubnets()
{
    subnetsIsSet_ = false;
}

}
}
}
}
}


