

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussUserForCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussUserForCreation::GaussDBforOpenGaussUserForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    isLoginOnly_ = false;
    isLoginOnlyIsSet_ = false;
}

GaussDBforOpenGaussUserForCreation::~GaussDBforOpenGaussUserForCreation() = default;

void GaussDBforOpenGaussUserForCreation::validate()
{
}

web::json::value GaussDBforOpenGaussUserForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(isLoginOnlyIsSet_) {
        val[utility::conversions::to_string_t("is_login_only")] = ModelBase::toJson(isLoginOnly_);
    }

    return val;
}
bool GaussDBforOpenGaussUserForCreation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_login_only"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_login_only"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLoginOnly(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenGaussUserForCreation::getName() const
{
    return name_;
}

void GaussDBforOpenGaussUserForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussDBforOpenGaussUserForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void GaussDBforOpenGaussUserForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string GaussDBforOpenGaussUserForCreation::getPassword() const
{
    return password_;
}

void GaussDBforOpenGaussUserForCreation::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool GaussDBforOpenGaussUserForCreation::passwordIsSet() const
{
    return passwordIsSet_;
}

void GaussDBforOpenGaussUserForCreation::unsetpassword()
{
    passwordIsSet_ = false;
}

bool GaussDBforOpenGaussUserForCreation::isIsLoginOnly() const
{
    return isLoginOnly_;
}

void GaussDBforOpenGaussUserForCreation::setIsLoginOnly(bool value)
{
    isLoginOnly_ = value;
    isLoginOnlyIsSet_ = true;
}

bool GaussDBforOpenGaussUserForCreation::isLoginOnlyIsSet() const
{
    return isLoginOnlyIsSet_;
}

void GaussDBforOpenGaussUserForCreation::unsetisLoginOnly()
{
    isLoginOnlyIsSet_ = false;
}

}
}
}
}
}


