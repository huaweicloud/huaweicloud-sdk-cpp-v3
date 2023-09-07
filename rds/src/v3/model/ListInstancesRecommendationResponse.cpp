

#include "huaweicloud/rds/v3/model/ListInstancesRecommendationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesRecommendationResponse::ListInstancesRecommendationResponse()
{
    engine_ = "";
    engineIsSet_ = false;
    recommendedProductsIsSet_ = false;
}

ListInstancesRecommendationResponse::~ListInstancesRecommendationResponse() = default;

void ListInstancesRecommendationResponse::validate()
{
}

web::json::value ListInstancesRecommendationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }
    if(recommendedProductsIsSet_) {
        val[utility::conversions::to_string_t("recommended_products")] = ModelBase::toJson(recommendedProducts_);
    }

    return val;
}

bool ListInstancesRecommendationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recommended_products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommended_products"));
        if(!fieldValue.is_null())
        {
            std::vector<RecommendedProduct> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommendedProducts(refVal);
        }
    }
    return ok;
}

std::string ListInstancesRecommendationResponse::getEngine() const
{
    return engine_;
}

void ListInstancesRecommendationResponse::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListInstancesRecommendationResponse::engineIsSet() const
{
    return engineIsSet_;
}

void ListInstancesRecommendationResponse::unsetengine()
{
    engineIsSet_ = false;
}

std::vector<RecommendedProduct>& ListInstancesRecommendationResponse::getRecommendedProducts()
{
    return recommendedProducts_;
}

void ListInstancesRecommendationResponse::setRecommendedProducts(const std::vector<RecommendedProduct>& value)
{
    recommendedProducts_ = value;
    recommendedProductsIsSet_ = true;
}

bool ListInstancesRecommendationResponse::recommendedProductsIsSet() const
{
    return recommendedProductsIsSet_;
}

void ListInstancesRecommendationResponse::unsetrecommendedProducts()
{
    recommendedProductsIsSet_ = false;
}

}
}
}
}
}


