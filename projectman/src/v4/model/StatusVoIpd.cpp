

#include "huaweicloud/projectman/v4/model/StatusVoIpd.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StatusVoIpd::StatusVoIpd()
{
    name_ = "";
    nameIsSet_ = false;
    belonging_ = "";
    belongingIsSet_ = false;
}

StatusVoIpd::~StatusVoIpd() = default;

void StatusVoIpd::validate()
{
}

web::json::value StatusVoIpd::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(belongingIsSet_) {
        val[utility::conversions::to_string_t("belonging")] = ModelBase::toJson(belonging_);
    }

    return val;
}
bool StatusVoIpd::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("belonging"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belonging"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelonging(refVal);
        }
    }
    return ok;
}


std::string StatusVoIpd::getName() const
{
    return name_;
}

void StatusVoIpd::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StatusVoIpd::nameIsSet() const
{
    return nameIsSet_;
}

void StatusVoIpd::unsetname()
{
    nameIsSet_ = false;
}

std::string StatusVoIpd::getBelonging() const
{
    return belonging_;
}

void StatusVoIpd::setBelonging(const std::string& value)
{
    belonging_ = value;
    belongingIsSet_ = true;
}

bool StatusVoIpd::belongingIsSet() const
{
    return belongingIsSet_;
}

void StatusVoIpd::unsetbelonging()
{
    belongingIsSet_ = false;
}

}
}
}
}
}


