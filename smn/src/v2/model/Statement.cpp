

#include "huaweicloud/smn/v2/model/Statement.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




Statement::Statement()
{
    sid_ = "";
    sidIsSet_ = false;
    effect_ = "";
    effectIsSet_ = false;
    principal_ = "";
    principalIsSet_ = false;
    notPrincipal_ = "";
    notPrincipalIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    notAction_ = "";
    notActionIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    notResource_ = "";
    notResourceIsSet_ = false;
}

Statement::~Statement() = default;

void Statement::validate()
{
}

web::json::value Statement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sidIsSet_) {
        val[utility::conversions::to_string_t("Sid")] = ModelBase::toJson(sid_);
    }
    if(effectIsSet_) {
        val[utility::conversions::to_string_t("Effect")] = ModelBase::toJson(effect_);
    }
    if(principalIsSet_) {
        val[utility::conversions::to_string_t("Principal")] = ModelBase::toJson(principal_);
    }
    if(notPrincipalIsSet_) {
        val[utility::conversions::to_string_t("NotPrincipal")] = ModelBase::toJson(notPrincipal_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("Action")] = ModelBase::toJson(action_);
    }
    if(notActionIsSet_) {
        val[utility::conversions::to_string_t("NotAction")] = ModelBase::toJson(notAction_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("Resource")] = ModelBase::toJson(resource_);
    }
    if(notResourceIsSet_) {
        val[utility::conversions::to_string_t("NotResource")] = ModelBase::toJson(notResource_);
    }

    return val;
}

bool Statement::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Sid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Sid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Effect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Effect"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NotPrincipal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("NotPrincipal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotPrincipal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NotAction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("NotAction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("NotResource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("NotResource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotResource(refVal);
        }
    }
    return ok;
}

std::string Statement::getSid() const
{
    return sid_;
}

void Statement::setSid(const std::string& value)
{
    sid_ = value;
    sidIsSet_ = true;
}

bool Statement::sidIsSet() const
{
    return sidIsSet_;
}

void Statement::unsetsid()
{
    sidIsSet_ = false;
}

std::string Statement::getEffect() const
{
    return effect_;
}

void Statement::setEffect(const std::string& value)
{
    effect_ = value;
    effectIsSet_ = true;
}

bool Statement::effectIsSet() const
{
    return effectIsSet_;
}

void Statement::unseteffect()
{
    effectIsSet_ = false;
}

std::string Statement::getPrincipal() const
{
    return principal_;
}

void Statement::setPrincipal(const std::string& value)
{
    principal_ = value;
    principalIsSet_ = true;
}

bool Statement::principalIsSet() const
{
    return principalIsSet_;
}

void Statement::unsetprincipal()
{
    principalIsSet_ = false;
}

std::string Statement::getNotPrincipal() const
{
    return notPrincipal_;
}

void Statement::setNotPrincipal(const std::string& value)
{
    notPrincipal_ = value;
    notPrincipalIsSet_ = true;
}

bool Statement::notPrincipalIsSet() const
{
    return notPrincipalIsSet_;
}

void Statement::unsetnotPrincipal()
{
    notPrincipalIsSet_ = false;
}

std::string Statement::getAction() const
{
    return action_;
}

void Statement::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool Statement::actionIsSet() const
{
    return actionIsSet_;
}

void Statement::unsetaction()
{
    actionIsSet_ = false;
}

std::string Statement::getNotAction() const
{
    return notAction_;
}

void Statement::setNotAction(const std::string& value)
{
    notAction_ = value;
    notActionIsSet_ = true;
}

bool Statement::notActionIsSet() const
{
    return notActionIsSet_;
}

void Statement::unsetnotAction()
{
    notActionIsSet_ = false;
}

std::string Statement::getResource() const
{
    return resource_;
}

void Statement::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool Statement::resourceIsSet() const
{
    return resourceIsSet_;
}

void Statement::unsetresource()
{
    resourceIsSet_ = false;
}

std::string Statement::getNotResource() const
{
    return notResource_;
}

void Statement::setNotResource(const std::string& value)
{
    notResource_ = value;
    notResourceIsSet_ = true;
}

bool Statement::notResourceIsSet() const
{
    return notResourceIsSet_;
}

void Statement::unsetnotResource()
{
    notResourceIsSet_ = false;
}

}
}
}
}
}


