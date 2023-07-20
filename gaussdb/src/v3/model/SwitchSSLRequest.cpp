

#include "huaweicloud/gaussdb/v3/model/SwitchSSLRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchSSLRequest::SwitchSSLRequest()
{
    sslOption_ = false;
    sslOptionIsSet_ = false;
}

SwitchSSLRequest::~SwitchSSLRequest() = default;

void SwitchSSLRequest::validate()
{
}

web::json::value SwitchSSLRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }

    return val;
}

bool SwitchSSLRequest::fromJson(const web::json::value& val)
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

bool SwitchSSLRequest::isSslOption() const
{
    return sslOption_;
}

void SwitchSSLRequest::setSslOption(bool value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool SwitchSSLRequest::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void SwitchSSLRequest::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

}
}
}
}
}


