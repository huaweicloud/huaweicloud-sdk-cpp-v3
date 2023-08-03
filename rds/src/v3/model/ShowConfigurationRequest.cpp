

#include "huaweicloud/rds/v3/model/ShowConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowConfigurationRequest::ShowConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
}

ShowConfigurationRequest::~ShowConfigurationRequest() = default;

void ShowConfigurationRequest::validate()
{
}

web::json::value ShowConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }

    return val;
}

bool ShowConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    return ok;
}

std::string ShowConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowConfigurationRequest::getConfigId() const
{
    return configId_;
}

void ShowConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ShowConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ShowConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


