

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlRecommendRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlRecommendRulesResponse::ListSqlRecommendRulesResponse()
{
    recommendRulesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListSqlRecommendRulesResponse::~ListSqlRecommendRulesResponse() = default;

void ListSqlRecommendRulesResponse::validate()
{
}

web::json::value ListSqlRecommendRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recommendRulesIsSet_) {
        val[utility::conversions::to_string_t("recommend_rules")] = ModelBase::toJson(recommendRules_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListSqlRecommendRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recommend_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommend_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSqlRecommendRulesResponseResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommendRules(refVal);
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


std::vector<ListSqlRecommendRulesResponseResult>& ListSqlRecommendRulesResponse::getRecommendRules()
{
    return recommendRules_;
}

void ListSqlRecommendRulesResponse::setRecommendRules(const std::vector<ListSqlRecommendRulesResponseResult>& value)
{
    recommendRules_ = value;
    recommendRulesIsSet_ = true;
}

bool ListSqlRecommendRulesResponse::recommendRulesIsSet() const
{
    return recommendRulesIsSet_;
}

void ListSqlRecommendRulesResponse::unsetrecommendRules()
{
    recommendRulesIsSet_ = false;
}

int32_t ListSqlRecommendRulesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListSqlRecommendRulesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListSqlRecommendRulesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListSqlRecommendRulesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


