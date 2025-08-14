

#include "huaweicloud/iotda/v5/model/ListProductsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListProductsResponse::ListProductsResponse()
{
    productsIsSet_ = false;
    pageIsSet_ = false;
}

ListProductsResponse::~ListProductsResponse() = default;

void ListProductsResponse::validate()
{
}

web::json::value ListProductsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(productsIsSet_) {
        val[utility::conversions::to_string_t("products")] = ModelBase::toJson(products_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListProductsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("products"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProducts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<ProductSummary>& ListProductsResponse::getProducts()
{
    return products_;
}

void ListProductsResponse::setProducts(const std::vector<ProductSummary>& value)
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

Page ListProductsResponse::getPage() const
{
    return page_;
}

void ListProductsResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListProductsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListProductsResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


