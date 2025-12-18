

#include "huaweicloud/cce/v5/model/ListPackageProductsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




ListPackageProductsResponse::ListPackageProductsResponse()
{
    packageProductsIsSet_ = false;
}

ListPackageProductsResponse::~ListPackageProductsResponse() = default;

void ListPackageProductsResponse::validate()
{
}

web::json::value ListPackageProductsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageProductsIsSet_) {
        val[utility::conversions::to_string_t("package_products")] = ModelBase::toJson(packageProducts_);
    }

    return val;
}
bool ListPackageProductsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_products"));
        if(!fieldValue.is_null())
        {
            std::vector<PackageProductDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageProducts(refVal);
        }
    }
    return ok;
}


std::vector<PackageProductDetail>& ListPackageProductsResponse::getPackageProducts()
{
    return packageProducts_;
}

void ListPackageProductsResponse::setPackageProducts(const std::vector<PackageProductDetail>& value)
{
    packageProducts_ = value;
    packageProductsIsSet_ = true;
}

bool ListPackageProductsResponse::packageProductsIsSet() const
{
    return packageProductsIsSet_;
}

void ListPackageProductsResponse::unsetpackageProducts()
{
    packageProductsIsSet_ = false;
}

}
}
}
}
}


