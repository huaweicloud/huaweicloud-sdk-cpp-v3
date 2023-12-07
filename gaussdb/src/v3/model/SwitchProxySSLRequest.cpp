

#include "huaweicloud/gaussdb/v3/model/SwitchProxySSLRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchProxySSLRequest::SwitchProxySSLRequest()
{
    sslOption_ = false;
    sslOptionIsSet_ = false;
}

SwitchProxySSLRequest::~SwitchProxySSLRequest() = default;

void SwitchProxySSLRequest::validate()
{
}

web::json::value SwitchProxySSLRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }

    return val;
}
bool SwitchProxySSLRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ssl_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_option"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslOption(refVal);
        }
    }
    return ok;
}


bool SwitchProxySSLRequest::isSslOption() const
{
    return sslOption_;
}

void SwitchProxySSLRequest::setSslOption(bool value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool SwitchProxySSLRequest::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void SwitchProxySSLRequest::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

}
}
}
}
}


