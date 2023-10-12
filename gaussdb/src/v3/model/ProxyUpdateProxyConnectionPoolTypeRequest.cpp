

#include "huaweicloud/gaussdb/v3/model/ProxyUpdateProxyConnectionPoolTypeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyUpdateProxyConnectionPoolTypeRequest::ProxyUpdateProxyConnectionPoolTypeRequest()
{
    connectionPoolType_ = "";
    connectionPoolTypeIsSet_ = false;
}

ProxyUpdateProxyConnectionPoolTypeRequest::~ProxyUpdateProxyConnectionPoolTypeRequest() = default;

void ProxyUpdateProxyConnectionPoolTypeRequest::validate()
{
}

web::json::value ProxyUpdateProxyConnectionPoolTypeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(connectionPoolTypeIsSet_) {
        val[utility::conversions::to_string_t("connection_pool_type")] = ModelBase::toJson(connectionPoolType_);
    }

    return val;
}
bool ProxyUpdateProxyConnectionPoolTypeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connection_pool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_pool_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionPoolType(refVal);
        }
    }
    return ok;
}


std::string ProxyUpdateProxyConnectionPoolTypeRequest::getConnectionPoolType() const
{
    return connectionPoolType_;
}

void ProxyUpdateProxyConnectionPoolTypeRequest::setConnectionPoolType(const std::string& value)
{
    connectionPoolType_ = value;
    connectionPoolTypeIsSet_ = true;
}

bool ProxyUpdateProxyConnectionPoolTypeRequest::connectionPoolTypeIsSet() const
{
    return connectionPoolTypeIsSet_;
}

void ProxyUpdateProxyConnectionPoolTypeRequest::unsetconnectionPoolType()
{
    connectionPoolTypeIsSet_ = false;
}

}
}
}
}
}


