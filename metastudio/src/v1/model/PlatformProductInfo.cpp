

#include "huaweicloud/metastudio/v1/model/PlatformProductInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PlatformProductInfo::PlatformProductInfo()
{
    productId_ = "";
    productIdIsSet_ = false;
    productTitle_ = "";
    productTitleIsSet_ = false;
}

PlatformProductInfo::~PlatformProductInfo() = default;

void PlatformProductInfo::validate()
{
}

web::json::value PlatformProductInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(productTitleIsSet_) {
        val[utility::conversions::to_string_t("product_title")] = ModelBase::toJson(productTitle_);
    }

    return val;
}
bool PlatformProductInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductTitle(refVal);
        }
    }
    return ok;
}


std::string PlatformProductInfo::getProductId() const
{
    return productId_;
}

void PlatformProductInfo::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool PlatformProductInfo::productIdIsSet() const
{
    return productIdIsSet_;
}

void PlatformProductInfo::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string PlatformProductInfo::getProductTitle() const
{
    return productTitle_;
}

void PlatformProductInfo::setProductTitle(const std::string& value)
{
    productTitle_ = value;
    productTitleIsSet_ = true;
}

bool PlatformProductInfo::productTitleIsSet() const
{
    return productTitleIsSet_;
}

void PlatformProductInfo::unsetproductTitle()
{
    productTitleIsSet_ = false;
}

}
}
}
}
}


