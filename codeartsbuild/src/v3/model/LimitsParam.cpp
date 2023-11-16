

#include "huaweicloud/codeartsbuild/v3/model/LimitsParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




LimitsParam::LimitsParam()
{
    disable_ = "";
    disableIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

LimitsParam::~LimitsParam() = default;

void LimitsParam::validate()
{
}

web::json::value LimitsParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool LimitsParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string LimitsParam::getDisable() const
{
    return disable_;
}

void LimitsParam::setDisable(const std::string& value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool LimitsParam::disableIsSet() const
{
    return disableIsSet_;
}

void LimitsParam::unsetdisable()
{
    disableIsSet_ = false;
}

std::string LimitsParam::getDisplayName() const
{
    return displayName_;
}

void LimitsParam::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool LimitsParam::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void LimitsParam::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string LimitsParam::getName() const
{
    return name_;
}

void LimitsParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LimitsParam::nameIsSet() const
{
    return nameIsSet_;
}

void LimitsParam::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


