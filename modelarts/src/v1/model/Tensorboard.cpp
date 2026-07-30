

#include "huaweicloud/modelarts/v1/model/Tensorboard.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Tensorboard::Tensorboard()
{
    url_ = "";
    urlIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
}

Tensorboard::~Tensorboard() = default;

void Tensorboard::validate()
{
}

web::json::value Tensorboard::toJson() const
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
bool Tensorboard::fromJson(const web::json::value& val)
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


std::string Tensorboard::getUrl() const
{
    return url_;
}

void Tensorboard::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool Tensorboard::urlIsSet() const
{
    return urlIsSet_;
}

void Tensorboard::unseturl()
{
    urlIsSet_ = false;
}

std::string Tensorboard::getToken() const
{
    return token_;
}

void Tensorboard::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool Tensorboard::tokenIsSet() const
{
    return tokenIsSet_;
}

void Tensorboard::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


