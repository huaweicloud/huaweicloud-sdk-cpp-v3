

#include "huaweicloud/codeartsrepo/v4/model/ProtectedActionSwitcher.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ProtectedActionSwitcher::ProtectedActionSwitcher()
{
    name_ = "";
    nameIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

ProtectedActionSwitcher::~ProtectedActionSwitcher() = default;

void ProtectedActionSwitcher::validate()
{
}

web::json::value ProtectedActionSwitcher::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool ProtectedActionSwitcher::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}


std::string ProtectedActionSwitcher::getName() const
{
    return name_;
}

void ProtectedActionSwitcher::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProtectedActionSwitcher::nameIsSet() const
{
    return nameIsSet_;
}

void ProtectedActionSwitcher::unsetname()
{
    nameIsSet_ = false;
}

bool ProtectedActionSwitcher::isEnable() const
{
    return enable_;
}

void ProtectedActionSwitcher::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ProtectedActionSwitcher::enableIsSet() const
{
    return enableIsSet_;
}

void ProtectedActionSwitcher::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


