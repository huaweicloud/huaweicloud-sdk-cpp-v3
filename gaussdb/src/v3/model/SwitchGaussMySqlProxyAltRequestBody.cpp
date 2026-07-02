

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxyAltRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlProxyAltRequestBody::SwitchGaussMySqlProxyAltRequestBody()
{
    altEnabled_ = "";
    altEnabledIsSet_ = false;
}

SwitchGaussMySqlProxyAltRequestBody::~SwitchGaussMySqlProxyAltRequestBody() = default;

void SwitchGaussMySqlProxyAltRequestBody::validate()
{
}

web::json::value SwitchGaussMySqlProxyAltRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(altEnabledIsSet_) {
        val[utility::conversions::to_string_t("alt_enabled")] = ModelBase::toJson(altEnabled_);
    }

    return val;
}
bool SwitchGaussMySqlProxyAltRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alt_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alt_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAltEnabled(refVal);
        }
    }
    return ok;
}


std::string SwitchGaussMySqlProxyAltRequestBody::getAltEnabled() const
{
    return altEnabled_;
}

void SwitchGaussMySqlProxyAltRequestBody::setAltEnabled(const std::string& value)
{
    altEnabled_ = value;
    altEnabledIsSet_ = true;
}

bool SwitchGaussMySqlProxyAltRequestBody::altEnabledIsSet() const
{
    return altEnabledIsSet_;
}

void SwitchGaussMySqlProxyAltRequestBody::unsetaltEnabled()
{
    altEnabledIsSet_ = false;
}

}
}
}
}
}


