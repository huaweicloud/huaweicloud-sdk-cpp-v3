

#include "huaweicloud/rds/v3/model/ListRdSforMySqlProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRdSforMySqlProxyResponse::ListRdSforMySqlProxyResponse()
{
    proxyQueryInfoListIsSet_ = false;
    maxProxyNum_ = 0;
    maxProxyNumIsSet_ = false;
    maxProxyNodeNum_ = 0;
    maxProxyNodeNumIsSet_ = false;
    supportBalanceRouteModeForFavoredVersion_ = false;
    supportBalanceRouteModeForFavoredVersionIsSet_ = false;
}

ListRdSforMySqlProxyResponse::~ListRdSforMySqlProxyResponse() = default;

void ListRdSforMySqlProxyResponse::validate()
{
}

web::json::value ListRdSforMySqlProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyQueryInfoListIsSet_) {
        val[utility::conversions::to_string_t("proxy_query_info_list")] = ModelBase::toJson(proxyQueryInfoList_);
    }
    if(maxProxyNumIsSet_) {
        val[utility::conversions::to_string_t("max_proxy_num")] = ModelBase::toJson(maxProxyNum_);
    }
    if(maxProxyNodeNumIsSet_) {
        val[utility::conversions::to_string_t("max_proxy_node_num")] = ModelBase::toJson(maxProxyNodeNum_);
    }
    if(supportBalanceRouteModeForFavoredVersionIsSet_) {
        val[utility::conversions::to_string_t("support_balance_route_mode_for_favored_version")] = ModelBase::toJson(supportBalanceRouteModeForFavoredVersion_);
    }

    return val;
}
bool ListRdSforMySqlProxyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_query_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_query_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryProxyResponseV3> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyQueryInfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_proxy_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_proxy_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxProxyNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_proxy_node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_proxy_node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxProxyNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_balance_route_mode_for_favored_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_balance_route_mode_for_favored_version"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportBalanceRouteModeForFavoredVersion(refVal);
        }
    }
    return ok;
}


std::vector<QueryProxyResponseV3>& ListRdSforMySqlProxyResponse::getProxyQueryInfoList()
{
    return proxyQueryInfoList_;
}

void ListRdSforMySqlProxyResponse::setProxyQueryInfoList(const std::vector<QueryProxyResponseV3>& value)
{
    proxyQueryInfoList_ = value;
    proxyQueryInfoListIsSet_ = true;
}

bool ListRdSforMySqlProxyResponse::proxyQueryInfoListIsSet() const
{
    return proxyQueryInfoListIsSet_;
}

void ListRdSforMySqlProxyResponse::unsetproxyQueryInfoList()
{
    proxyQueryInfoListIsSet_ = false;
}

int32_t ListRdSforMySqlProxyResponse::getMaxProxyNum() const
{
    return maxProxyNum_;
}

void ListRdSforMySqlProxyResponse::setMaxProxyNum(int32_t value)
{
    maxProxyNum_ = value;
    maxProxyNumIsSet_ = true;
}

bool ListRdSforMySqlProxyResponse::maxProxyNumIsSet() const
{
    return maxProxyNumIsSet_;
}

void ListRdSforMySqlProxyResponse::unsetmaxProxyNum()
{
    maxProxyNumIsSet_ = false;
}

int32_t ListRdSforMySqlProxyResponse::getMaxProxyNodeNum() const
{
    return maxProxyNodeNum_;
}

void ListRdSforMySqlProxyResponse::setMaxProxyNodeNum(int32_t value)
{
    maxProxyNodeNum_ = value;
    maxProxyNodeNumIsSet_ = true;
}

bool ListRdSforMySqlProxyResponse::maxProxyNodeNumIsSet() const
{
    return maxProxyNodeNumIsSet_;
}

void ListRdSforMySqlProxyResponse::unsetmaxProxyNodeNum()
{
    maxProxyNodeNumIsSet_ = false;
}

bool ListRdSforMySqlProxyResponse::isSupportBalanceRouteModeForFavoredVersion() const
{
    return supportBalanceRouteModeForFavoredVersion_;
}

void ListRdSforMySqlProxyResponse::setSupportBalanceRouteModeForFavoredVersion(bool value)
{
    supportBalanceRouteModeForFavoredVersion_ = value;
    supportBalanceRouteModeForFavoredVersionIsSet_ = true;
}

bool ListRdSforMySqlProxyResponse::supportBalanceRouteModeForFavoredVersionIsSet() const
{
    return supportBalanceRouteModeForFavoredVersionIsSet_;
}

void ListRdSforMySqlProxyResponse::unsetsupportBalanceRouteModeForFavoredVersion()
{
    supportBalanceRouteModeForFavoredVersionIsSet_ = false;
}

}
}
}
}
}


