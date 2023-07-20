

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlConfigurationRequest::ShowGaussMySqlConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

ShowGaussMySqlConfigurationRequest::~ShowGaussMySqlConfigurationRequest() = default;

void ShowGaussMySqlConfigurationRequest::validate()
{
}

web::json::value ShowGaussMySqlConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }

    return val;
}

bool ShowGaussMySqlConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    return ok;
}

std::string ShowGaussMySqlConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlConfigurationRequest::getConfigurationId() const
{
    return configurationId_;
}

void ShowGaussMySqlConfigurationRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool ShowGaussMySqlConfigurationRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void ShowGaussMySqlConfigurationRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


