

#include "huaweicloud/iotda/v5/model/Statement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




Statement::Statement()
{
    effect_ = "";
    effectIsSet_ = false;
    actionsIsSet_ = false;
    resourcesIsSet_ = false;
}

Statement::~Statement() = default;

void Statement::validate()
{
}

web::json::value Statement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(effectIsSet_) {
        val[utility::conversions::to_string_t("effect")] = ModelBase::toJson(effect_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool Statement::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("effect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effect"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
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

std::vector<std::string>& Statement::getActions()
{
    return actions_;
}

void Statement::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool Statement::actionsIsSet() const
{
    return actionsIsSet_;
}

void Statement::unsetactions()
{
    actionsIsSet_ = false;
}

std::vector<std::string>& Statement::getResources()
{
    return resources_;
}

void Statement::setResources(const std::vector<std::string>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool Statement::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void Statement::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


