

#include "huaweicloud/ga/v1/model/CreateIpGroupIpOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateIpGroupIpOption::CreateIpGroupIpOption()
{
    cidr_ = "";
    cidrIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateIpGroupIpOption::~CreateIpGroupIpOption() = default;

void CreateIpGroupIpOption::validate()
{
}

web::json::value CreateIpGroupIpOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateIpGroupIpOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string CreateIpGroupIpOption::getCidr() const
{
    return cidr_;
}

void CreateIpGroupIpOption::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool CreateIpGroupIpOption::cidrIsSet() const
{
    return cidrIsSet_;
}

void CreateIpGroupIpOption::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string CreateIpGroupIpOption::getDescription() const
{
    return description_;
}

void CreateIpGroupIpOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateIpGroupIpOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateIpGroupIpOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


