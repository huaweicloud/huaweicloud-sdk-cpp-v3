

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteConfigurationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteConfigurationRequest::DeleteConfigurationRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
}

DeleteConfigurationRequest::~DeleteConfigurationRequest() = default;

void DeleteConfigurationRequest::validate()
{
}

web::json::value DeleteConfigurationRequest::toJson() const
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

bool DeleteConfigurationRequest::fromJson(const web::json::value& val)
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

std::string DeleteConfigurationRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteConfigurationRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteConfigurationRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteConfigurationRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteConfigurationRequest::getConfigId() const
{
    return configId_;
}

void DeleteConfigurationRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool DeleteConfigurationRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void DeleteConfigurationRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


