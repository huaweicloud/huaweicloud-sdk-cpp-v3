

#include "huaweicloud/rds/v3/model/ListSupabaseApplicationFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSupabaseApplicationFlavorsResponse::ListSupabaseApplicationFlavorsResponse()
{
    flavorsIsSet_ = false;
}

ListSupabaseApplicationFlavorsResponse::~ListSupabaseApplicationFlavorsResponse() = default;

void ListSupabaseApplicationFlavorsResponse::validate()
{
}

web::json::value ListSupabaseApplicationFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool ListSupabaseApplicationFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<SupabaseSpecFlavorInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


std::vector<SupabaseSpecFlavorInfo>& ListSupabaseApplicationFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ListSupabaseApplicationFlavorsResponse::setFlavors(const std::vector<SupabaseSpecFlavorInfo>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListSupabaseApplicationFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListSupabaseApplicationFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


