

#include "huaweicloud/gaussdb/v3/model/ShowProxyFlavorsByAzCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowProxyFlavorsByAzCodeRequest::ShowProxyFlavorsByAzCodeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    azCodes_ = "";
    azCodesIsSet_ = false;
    proxyEngineName_ = "";
    proxyEngineNameIsSet_ = false;
}

ShowProxyFlavorsByAzCodeRequest::~ShowProxyFlavorsByAzCodeRequest() = default;

void ShowProxyFlavorsByAzCodeRequest::validate()
{
}

web::json::value ShowProxyFlavorsByAzCodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(azCodesIsSet_) {
        val[utility::conversions::to_string_t("az_codes")] = ModelBase::toJson(azCodes_);
    }
    if(proxyEngineNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_engine_name")] = ModelBase::toJson(proxyEngineName_);
    }

    return val;
}
bool ShowProxyFlavorsByAzCodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("az_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_codes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyEngineName(refVal);
        }
    }
    return ok;
}


std::string ShowProxyFlavorsByAzCodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowProxyFlavorsByAzCodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowProxyFlavorsByAzCodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowProxyFlavorsByAzCodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowProxyFlavorsByAzCodeRequest::getAzCodes() const
{
    return azCodes_;
}

void ShowProxyFlavorsByAzCodeRequest::setAzCodes(const std::string& value)
{
    azCodes_ = value;
    azCodesIsSet_ = true;
}

bool ShowProxyFlavorsByAzCodeRequest::azCodesIsSet() const
{
    return azCodesIsSet_;
}

void ShowProxyFlavorsByAzCodeRequest::unsetazCodes()
{
    azCodesIsSet_ = false;
}

std::string ShowProxyFlavorsByAzCodeRequest::getProxyEngineName() const
{
    return proxyEngineName_;
}

void ShowProxyFlavorsByAzCodeRequest::setProxyEngineName(const std::string& value)
{
    proxyEngineName_ = value;
    proxyEngineNameIsSet_ = true;
}

bool ShowProxyFlavorsByAzCodeRequest::proxyEngineNameIsSet() const
{
    return proxyEngineNameIsSet_;
}

void ShowProxyFlavorsByAzCodeRequest::unsetproxyEngineName()
{
    proxyEngineNameIsSet_ = false;
}

}
}
}
}
}


