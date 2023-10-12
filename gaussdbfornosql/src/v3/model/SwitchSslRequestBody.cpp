

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchSslRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchSslRequestBody::SwitchSslRequestBody()
{
    sslOption_ = "";
    sslOptionIsSet_ = false;
}

SwitchSslRequestBody::~SwitchSslRequestBody() = default;

void SwitchSslRequestBody::validate()
{
}

web::json::value SwitchSslRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }

    return val;
}
bool SwitchSslRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ssl_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_option"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslOption(refVal);
        }
    }
    return ok;
}


std::string SwitchSslRequestBody::getSslOption() const
{
    return sslOption_;
}

void SwitchSslRequestBody::setSslOption(const std::string& value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool SwitchSslRequestBody::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void SwitchSslRequestBody::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

}
}
}
}
}


