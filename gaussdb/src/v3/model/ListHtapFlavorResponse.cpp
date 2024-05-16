

#include "huaweicloud/gaussdb/v3/model/ListHtapFlavorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListHtapFlavorResponse::ListHtapFlavorResponse()
{
    flavorsIsSet_ = false;
}

ListHtapFlavorResponse::~ListHtapFlavorResponse() = default;

void ListHtapFlavorResponse::validate()
{
}

web::json::value ListHtapFlavorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool ListHtapFlavorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapFlavorInfo_flavors> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


std::vector<HtapFlavorInfo_flavors>& ListHtapFlavorResponse::getFlavors()
{
    return flavors_;
}

void ListHtapFlavorResponse::setFlavors(const std::vector<HtapFlavorInfo_flavors>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListHtapFlavorResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListHtapFlavorResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


