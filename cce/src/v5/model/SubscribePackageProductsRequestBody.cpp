

#include "huaweicloud/cce/v5/model/SubscribePackageProductsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {
namespace Model {




SubscribePackageProductsRequestBody::SubscribePackageProductsRequestBody()
{
    packageProductsIsSet_ = false;
}

SubscribePackageProductsRequestBody::~SubscribePackageProductsRequestBody() = default;

void SubscribePackageProductsRequestBody::validate()
{
}

web::json::value SubscribePackageProductsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(packageProductsIsSet_) {
        val[utility::conversions::to_string_t("package_products")] = ModelBase::toJson(packageProducts_);
    }

    return val;
}
bool SubscribePackageProductsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("package_products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_products"));
        if(!fieldValue.is_null())
        {
            std::vector<PackageProductRequestDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageProducts(refVal);
        }
    }
    return ok;
}


std::vector<PackageProductRequestDetail>& SubscribePackageProductsRequestBody::getPackageProducts()
{
    return packageProducts_;
}

void SubscribePackageProductsRequestBody::setPackageProducts(const std::vector<PackageProductRequestDetail>& value)
{
    packageProducts_ = value;
    packageProductsIsSet_ = true;
}

bool SubscribePackageProductsRequestBody::packageProductsIsSet() const
{
    return packageProductsIsSet_;
}

void SubscribePackageProductsRequestBody::unsetpackageProducts()
{
    packageProductsIsSet_ = false;
}

}
}
}
}
}


