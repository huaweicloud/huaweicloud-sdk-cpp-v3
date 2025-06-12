

#include "huaweicloud/metastudio/v1/model/ListLivePlatformProductsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListLivePlatformProductsResponse::ListLivePlatformProductsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    productsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListLivePlatformProductsResponse::~ListLivePlatformProductsResponse() = default;

void ListLivePlatformProductsResponse::validate()
{
}

web::json::value ListLivePlatformProductsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(productsIsSet_) {
        val[utility::conversions::to_string_t("products")] = ModelBase::toJson(products_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListLivePlatformProductsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("products"));
        if(!fieldValue.is_null())
        {
            std::vector<PlatformProductInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProducts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListLivePlatformProductsResponse::getCount() const
{
    return count_;
}

void ListLivePlatformProductsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListLivePlatformProductsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListLivePlatformProductsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<PlatformProductInfo>& ListLivePlatformProductsResponse::getProducts()
{
    return products_;
}

void ListLivePlatformProductsResponse::setProducts(const std::vector<PlatformProductInfo>& value)
{
    products_ = value;
    productsIsSet_ = true;
}

bool ListLivePlatformProductsResponse::productsIsSet() const
{
    return productsIsSet_;
}

void ListLivePlatformProductsResponse::unsetproducts()
{
    productsIsSet_ = false;
}

std::string ListLivePlatformProductsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListLivePlatformProductsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListLivePlatformProductsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListLivePlatformProductsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


