

#include "huaweicloud/gaussdb/v3/model/ProxyUpdateProxyNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyUpdateProxyNameRequest::ProxyUpdateProxyNameRequest()
{
    alias_ = "";
    aliasIsSet_ = false;
}

ProxyUpdateProxyNameRequest::~ProxyUpdateProxyNameRequest() = default;

void ProxyUpdateProxyNameRequest::validate()
{
}

web::json::value ProxyUpdateProxyNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool ProxyUpdateProxyNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    return ok;
}


std::string ProxyUpdateProxyNameRequest::getAlias() const
{
    return alias_;
}

void ProxyUpdateProxyNameRequest::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool ProxyUpdateProxyNameRequest::aliasIsSet() const
{
    return aliasIsSet_;
}

void ProxyUpdateProxyNameRequest::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


