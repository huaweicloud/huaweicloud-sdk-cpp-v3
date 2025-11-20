

#include "huaweicloud/metastudio/v1/model/SubAccountControlConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SubAccountControlConfig::SubAccountControlConfig()
{
    separatelyControlled_ = false;
    separatelyControlledIsSet_ = false;
    subAccountType_ = "";
    subAccountTypeIsSet_ = false;
}

SubAccountControlConfig::~SubAccountControlConfig() = default;

void SubAccountControlConfig::validate()
{
}

web::json::value SubAccountControlConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(separatelyControlledIsSet_) {
        val[utility::conversions::to_string_t("separately_controlled")] = ModelBase::toJson(separatelyControlled_);
    }
    if(subAccountTypeIsSet_) {
        val[utility::conversions::to_string_t("sub_account_type")] = ModelBase::toJson(subAccountType_);
    }

    return val;
}
bool SubAccountControlConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("separately_controlled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("separately_controlled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeparatelyControlled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_account_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_account_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubAccountType(refVal);
        }
    }
    return ok;
}


bool SubAccountControlConfig::isSeparatelyControlled() const
{
    return separatelyControlled_;
}

void SubAccountControlConfig::setSeparatelyControlled(bool value)
{
    separatelyControlled_ = value;
    separatelyControlledIsSet_ = true;
}

bool SubAccountControlConfig::separatelyControlledIsSet() const
{
    return separatelyControlledIsSet_;
}

void SubAccountControlConfig::unsetseparatelyControlled()
{
    separatelyControlledIsSet_ = false;
}

std::string SubAccountControlConfig::getSubAccountType() const
{
    return subAccountType_;
}

void SubAccountControlConfig::setSubAccountType(const std::string& value)
{
    subAccountType_ = value;
    subAccountTypeIsSet_ = true;
}

bool SubAccountControlConfig::subAccountTypeIsSet() const
{
    return subAccountTypeIsSet_;
}

void SubAccountControlConfig::unsetsubAccountType()
{
    subAccountTypeIsSet_ = false;
}

}
}
}
}
}


