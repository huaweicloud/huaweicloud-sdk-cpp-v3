

#include "huaweicloud/dds/v3/model/ListFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListFlavorsResponse::ListFlavorsResponse()
{
    flavorsIsSet_ = false;
}

ListFlavorsResponse::~ListFlavorsResponse() = default;

void ListFlavorsResponse::validate()
{
}

web::json::value ListFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool ListFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<Flavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


std::vector<Flavor>& ListFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ListFlavorsResponse::setFlavors(const std::vector<Flavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


