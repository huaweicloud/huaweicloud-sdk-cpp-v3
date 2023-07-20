

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlConfigurationRequest::DeleteGaussMySqlConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

DeleteGaussMySqlConfigurationRequest::~DeleteGaussMySqlConfigurationRequest() = default;

void DeleteGaussMySqlConfigurationRequest::validate()
{
}

web::json::value DeleteGaussMySqlConfigurationRequest::toJson() const
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

bool DeleteGaussMySqlConfigurationRequest::fromJson(const web::json::value& val)
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

std::string DeleteGaussMySqlConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteGaussMySqlConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteGaussMySqlConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteGaussMySqlConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteGaussMySqlConfigurationRequest::getConfigurationId() const
{
    return configurationId_;
}

void DeleteGaussMySqlConfigurationRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool DeleteGaussMySqlConfigurationRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void DeleteGaussMySqlConfigurationRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


