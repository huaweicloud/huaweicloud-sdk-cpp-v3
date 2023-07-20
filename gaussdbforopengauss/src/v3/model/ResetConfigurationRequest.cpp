

#include "huaweicloud/gaussdbforopengauss/v3/model/ResetConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResetConfigurationRequest::ResetConfigurationRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ResetConfigurationRequest::~ResetConfigurationRequest() = default;

void ResetConfigurationRequest::validate()
{
}

web::json::value ResetConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}

bool ResetConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}

std::string ResetConfigurationRequest::getConfigId() const
{
    return configId_;
}

void ResetConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ResetConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ResetConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

std::string ResetConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResetConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResetConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResetConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


