

#include "huaweicloud/rds/v3/model/SslOptionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SslOptionRequest::SslOptionRequest()
{
    sslOption_ = false;
    sslOptionIsSet_ = false;
}

SslOptionRequest::~SslOptionRequest() = default;

void SslOptionRequest::validate()
{
}

web::json::value SslOptionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }

    return val;
}
bool SslOptionRequest::fromJson(const web::json::value& val)
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


bool SslOptionRequest::isSslOption() const
{
    return sslOption_;
}

void SslOptionRequest::setSslOption(bool value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool SslOptionRequest::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void SslOptionRequest::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

}
}
}
}
}


