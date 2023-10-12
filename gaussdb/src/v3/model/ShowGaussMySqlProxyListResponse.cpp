

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlProxyListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlProxyListResponse::ShowGaussMySqlProxyListResponse()
{
    proxyListIsSet_ = false;
}

ShowGaussMySqlProxyListResponse::~ShowGaussMySqlProxyListResponse() = default;

void ShowGaussMySqlProxyListResponse::validate()
{
}

web::json::value ShowGaussMySqlProxyListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyListIsSet_) {
        val[utility::conversions::to_string_t("proxy_list")] = ModelBase::toJson(proxyList_);
    }

    return val;
}
bool ShowGaussMySqlProxyListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_list"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlShowProxyResponseV3> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyList(refVal);
        }
    }
    return ok;
}


std::vector<MysqlShowProxyResponseV3>& ShowGaussMySqlProxyListResponse::getProxyList()
{
    return proxyList_;
}

void ShowGaussMySqlProxyListResponse::setProxyList(const std::vector<MysqlShowProxyResponseV3>& value)
{
    proxyList_ = value;
    proxyListIsSet_ = true;
}

bool ShowGaussMySqlProxyListResponse::proxyListIsSet() const
{
    return proxyListIsSet_;
}

void ShowGaussMySqlProxyListResponse::unsetproxyList()
{
    proxyListIsSet_ = false;
}

}
}
}
}
}


