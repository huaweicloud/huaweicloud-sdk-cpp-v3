

#include "huaweicloud/metastudio/v1/model/RelationProductInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RelationProductInfo::RelationProductInfo()
{
    productId_ = "";
    productIdIsSet_ = false;
    productTitle_ = "";
    productTitleIsSet_ = false;
}

RelationProductInfo::~RelationProductInfo() = default;

void RelationProductInfo::validate()
{
}

web::json::value RelationProductInfo::toJson() const
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
bool RelationProductInfo::fromJson(const web::json::value& val)
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


std::string RelationProductInfo::getProductId() const
{
    return productId_;
}

void RelationProductInfo::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool RelationProductInfo::productIdIsSet() const
{
    return productIdIsSet_;
}

void RelationProductInfo::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string RelationProductInfo::getProductTitle() const
{
    return productTitle_;
}

void RelationProductInfo::setProductTitle(const std::string& value)
{
    productTitle_ = value;
    productTitleIsSet_ = true;
}

bool RelationProductInfo::productTitleIsSet() const
{
    return productTitleIsSet_;
}

void RelationProductInfo::unsetproductTitle()
{
    productTitleIsSet_ = false;
}

}
}
}
}
}


