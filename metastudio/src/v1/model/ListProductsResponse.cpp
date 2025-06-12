

#include "huaweicloud/metastudio/v1/model/ListProductsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListProductsResponse::ListProductsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    productsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListProductsResponse::~ListProductsResponse() = default;

void ListProductsResponse::validate()
{
}

web::json::value ListProductsResponse::toJson() const
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
bool ListProductsResponse::fromJson(const web::json::value& val)
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
            std::vector<ProductDetailInfo> refVal;
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


int32_t ListProductsResponse::getCount() const
{
    return count_;
}

void ListProductsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListProductsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListProductsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ProductDetailInfo>& ListProductsResponse::getProducts()
{
    return products_;
}

void ListProductsResponse::setProducts(const std::vector<ProductDetailInfo>& value)
{
    products_ = value;
    productsIsSet_ = true;
}

bool ListProductsResponse::productsIsSet() const
{
    return productsIsSet_;
}

void ListProductsResponse::unsetproducts()
{
    productsIsSet_ = false;
}

std::string ListProductsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListProductsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListProductsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListProductsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


