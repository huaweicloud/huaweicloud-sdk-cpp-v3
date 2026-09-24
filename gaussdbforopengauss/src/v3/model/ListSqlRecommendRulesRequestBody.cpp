

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlRecommendRulesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlRecommendRulesRequestBody::ListSqlRecommendRulesRequestBody()
{
    recommendType_ = "";
    recommendTypeIsSet_ = false;
    recommendCount_ = 0;
    recommendCountIsSet_ = false;
    useOpsTunnel_ = false;
    useOpsTunnelIsSet_ = false;
}

ListSqlRecommendRulesRequestBody::~ListSqlRecommendRulesRequestBody() = default;

void ListSqlRecommendRulesRequestBody::validate()
{
}

web::json::value ListSqlRecommendRulesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recommendTypeIsSet_) {
        val[utility::conversions::to_string_t("recommend_type")] = ModelBase::toJson(recommendType_);
    }
    if(recommendCountIsSet_) {
        val[utility::conversions::to_string_t("recommend_count")] = ModelBase::toJson(recommendCount_);
    }
    if(useOpsTunnelIsSet_) {
        val[utility::conversions::to_string_t("use_ops_tunnel")] = ModelBase::toJson(useOpsTunnel_);
    }

    return val;
}
bool ListSqlRecommendRulesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recommend_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommend_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommendType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recommend_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommend_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommendCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("use_ops_tunnel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_ops_tunnel"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseOpsTunnel(refVal);
        }
    }
    return ok;
}


std::string ListSqlRecommendRulesRequestBody::getRecommendType() const
{
    return recommendType_;
}

void ListSqlRecommendRulesRequestBody::setRecommendType(const std::string& value)
{
    recommendType_ = value;
    recommendTypeIsSet_ = true;
}

bool ListSqlRecommendRulesRequestBody::recommendTypeIsSet() const
{
    return recommendTypeIsSet_;
}

void ListSqlRecommendRulesRequestBody::unsetrecommendType()
{
    recommendTypeIsSet_ = false;
}

int32_t ListSqlRecommendRulesRequestBody::getRecommendCount() const
{
    return recommendCount_;
}

void ListSqlRecommendRulesRequestBody::setRecommendCount(int32_t value)
{
    recommendCount_ = value;
    recommendCountIsSet_ = true;
}

bool ListSqlRecommendRulesRequestBody::recommendCountIsSet() const
{
    return recommendCountIsSet_;
}

void ListSqlRecommendRulesRequestBody::unsetrecommendCount()
{
    recommendCountIsSet_ = false;
}

bool ListSqlRecommendRulesRequestBody::isUseOpsTunnel() const
{
    return useOpsTunnel_;
}

void ListSqlRecommendRulesRequestBody::setUseOpsTunnel(bool value)
{
    useOpsTunnel_ = value;
    useOpsTunnelIsSet_ = true;
}

bool ListSqlRecommendRulesRequestBody::useOpsTunnelIsSet() const
{
    return useOpsTunnelIsSet_;
}

void ListSqlRecommendRulesRequestBody::unsetuseOpsTunnel()
{
    useOpsTunnelIsSet_ = false;
}

}
}
}
}
}


