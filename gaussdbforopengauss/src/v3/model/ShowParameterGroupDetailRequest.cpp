

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowParameterGroupDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowParameterGroupDetailRequest::ShowParameterGroupDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
}

ShowParameterGroupDetailRequest::~ShowParameterGroupDetailRequest() = default;

void ShowParameterGroupDetailRequest::validate()
{
}

web::json::value ShowParameterGroupDetailRequest::toJson() const
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
bool ShowParameterGroupDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowParameterGroupDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowParameterGroupDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowParameterGroupDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowParameterGroupDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowParameterGroupDetailRequest::getConfigId() const
{
    return configId_;
}

void ShowParameterGroupDetailRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ShowParameterGroupDetailRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ShowParameterGroupDetailRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

}
}
}
}
}


