

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAvailableFlavorsDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAvailableFlavorsDetailResponse::ListAvailableFlavorsDetailResponse()
{
    flavorCategoryIsSet_ = false;
}

ListAvailableFlavorsDetailResponse::~ListAvailableFlavorsDetailResponse() = default;

void ListAvailableFlavorsDetailResponse::validate()
{
}

web::json::value ListAvailableFlavorsDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorCategoryIsSet_) {
        val[utility::conversions::to_string_t("flavor_category")] = ModelBase::toJson(flavorCategory_);
    }

    return val;
}
bool ListAvailableFlavorsDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_category"));
        if(!fieldValue.is_null())
        {
            FlavorCategoryDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorCategory(refVal);
        }
    }
    return ok;
}


FlavorCategoryDetail ListAvailableFlavorsDetailResponse::getFlavorCategory() const
{
    return flavorCategory_;
}

void ListAvailableFlavorsDetailResponse::setFlavorCategory(const FlavorCategoryDetail& value)
{
    flavorCategory_ = value;
    flavorCategoryIsSet_ = true;
}

bool ListAvailableFlavorsDetailResponse::flavorCategoryIsSet() const
{
    return flavorCategoryIsSet_;
}

void ListAvailableFlavorsDetailResponse::unsetflavorCategory()
{
    flavorCategoryIsSet_ = false;
}

}
}
}
}
}


