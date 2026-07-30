

#include "huaweicloud/modelarts/v1/model/JupyterLab.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JupyterLab::JupyterLab()
{
    url_ = "";
    urlIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
}

JupyterLab::~JupyterLab() = default;

void JupyterLab::validate()
{
}

web::json::value JupyterLab::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }

    return val;
}
bool JupyterLab::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    return ok;
}


std::string JupyterLab::getUrl() const
{
    return url_;
}

void JupyterLab::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool JupyterLab::urlIsSet() const
{
    return urlIsSet_;
}

void JupyterLab::unseturl()
{
    urlIsSet_ = false;
}

std::string JupyterLab::getToken() const
{
    return token_;
}

void JupyterLab::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool JupyterLab::tokenIsSet() const
{
    return tokenIsSet_;
}

void JupyterLab::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


