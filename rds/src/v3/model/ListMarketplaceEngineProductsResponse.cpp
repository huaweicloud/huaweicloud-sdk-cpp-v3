

#include "huaweicloud/rds/v3/model/ListMarketplaceEngineProductsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListMarketplaceEngineProductsResponse::ListMarketplaceEngineProductsResponse()
{
    marketplaceEngineProductsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListMarketplaceEngineProductsResponse::~ListMarketplaceEngineProductsResponse() = default;

void ListMarketplaceEngineProductsResponse::validate()
{
}

web::json::value ListMarketplaceEngineProductsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(marketplaceEngineProductsIsSet_) {
        val[utility::conversions::to_string_t("marketplace_engine_products")] = ModelBase::toJson(marketplaceEngineProducts_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListMarketplaceEngineProductsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marketplace_engine_products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marketplace_engine_products"));
        if(!fieldValue.is_null())
        {
            std::vector<MarketplaceEngineProduct> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarketplaceEngineProducts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<MarketplaceEngineProduct>& ListMarketplaceEngineProductsResponse::getMarketplaceEngineProducts()
{
    return marketplaceEngineProducts_;
}

void ListMarketplaceEngineProductsResponse::setMarketplaceEngineProducts(const std::vector<MarketplaceEngineProduct>& value)
{
    marketplaceEngineProducts_ = value;
    marketplaceEngineProductsIsSet_ = true;
}

bool ListMarketplaceEngineProductsResponse::marketplaceEngineProductsIsSet() const
{
    return marketplaceEngineProductsIsSet_;
}

void ListMarketplaceEngineProductsResponse::unsetmarketplaceEngineProducts()
{
    marketplaceEngineProductsIsSet_ = false;
}

int32_t ListMarketplaceEngineProductsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListMarketplaceEngineProductsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListMarketplaceEngineProductsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListMarketplaceEngineProductsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


