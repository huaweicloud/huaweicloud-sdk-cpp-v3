

#include "huaweicloud/gaussdbforopengauss/v3/model/InstallKernelPluginRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstallKernelPluginRequestBody::InstallKernelPluginRequestBody()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    sha256_ = "";
    sha256IsSet_ = false;
}

InstallKernelPluginRequestBody::~InstallKernelPluginRequestBody() = default;

void InstallKernelPluginRequestBody::validate()
{
}

web::json::value InstallKernelPluginRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(sha256IsSet_) {
        val[utility::conversions::to_string_t("sha_256")] = ModelBase::toJson(sha256_);
    }

    return val;
}
bool InstallKernelPluginRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha_256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha_256"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha256(refVal);
        }
    }
    return ok;
}


std::string InstallKernelPluginRequestBody::getPluginName() const
{
    return pluginName_;
}

void InstallKernelPluginRequestBody::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool InstallKernelPluginRequestBody::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void InstallKernelPluginRequestBody::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string InstallKernelPluginRequestBody::getUrl() const
{
    return url_;
}

void InstallKernelPluginRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool InstallKernelPluginRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void InstallKernelPluginRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::string InstallKernelPluginRequestBody::getSha256() const
{
    return sha256_;
}

void InstallKernelPluginRequestBody::setSha256(const std::string& value)
{
    sha256_ = value;
    sha256IsSet_ = true;
}

bool InstallKernelPluginRequestBody::sha256IsSet() const
{
    return sha256IsSet_;
}

void InstallKernelPluginRequestBody::unsetsha256()
{
    sha256IsSet_ = false;
}

}
}
}
}
}


