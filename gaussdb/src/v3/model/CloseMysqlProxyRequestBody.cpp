

#include "huaweicloud/gaussdb/v3/model/CloseMysqlProxyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CloseMysqlProxyRequestBody::CloseMysqlProxyRequestBody()
{
    proxyIdsIsSet_ = false;
}

CloseMysqlProxyRequestBody::~CloseMysqlProxyRequestBody() = default;

void CloseMysqlProxyRequestBody::validate()
{
}

web::json::value CloseMysqlProxyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyIdsIsSet_) {
        val[utility::conversions::to_string_t("proxy_ids")] = ModelBase::toJson(proxyIds_);
    }

    return val;
}
bool CloseMysqlProxyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CloseMysqlProxyRequestBody::getProxyIds()
{
    return proxyIds_;
}

void CloseMysqlProxyRequestBody::setProxyIds(const std::vector<std::string>& value)
{
    proxyIds_ = value;
    proxyIdsIsSet_ = true;
}

bool CloseMysqlProxyRequestBody::proxyIdsIsSet() const
{
    return proxyIdsIsSet_;
}

void CloseMysqlProxyRequestBody::unsetproxyIds()
{
    proxyIdsIsSet_ = false;
}

}
}
}
}
}


