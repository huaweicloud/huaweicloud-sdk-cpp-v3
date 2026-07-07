

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
    altForReadonly_ = "";
    altForReadonlyIsSet_ = false;
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
    if(altForReadonlyIsSet_) {
        val[utility::conversions::to_string_t("alt_for_readonly")] = ModelBase::toJson(altForReadonly_);
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
    if(val.has_field(utility::conversions::to_string_t("alt_for_readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alt_for_readonly"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAltForReadonly(refVal);
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

std::string SwitchGaussMySqlProxyAltRequestBody::getAltForReadonly() const
{
    return altForReadonly_;
}

void SwitchGaussMySqlProxyAltRequestBody::setAltForReadonly(const std::string& value)
{
    altForReadonly_ = value;
    altForReadonlyIsSet_ = true;
}

bool SwitchGaussMySqlProxyAltRequestBody::altForReadonlyIsSet() const
{
    return altForReadonlyIsSet_;
}

void SwitchGaussMySqlProxyAltRequestBody::unsetaltForReadonly()
{
    altForReadonlyIsSet_ = false;
}

}
}
}
}
}


