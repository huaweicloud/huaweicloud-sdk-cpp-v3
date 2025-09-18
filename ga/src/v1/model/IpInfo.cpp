

#include "huaweicloud/ga/v1/model/IpInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




IpInfo::IpInfo()
{
    cidr_ = "";
    cidrIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
}

IpInfo::~IpInfo() = default;

void IpInfo::validate()
{
}

web::json::value IpInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }

    return val;
}
bool IpInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    return ok;
}


std::string IpInfo::getCidr() const
{
    return cidr_;
}

void IpInfo::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool IpInfo::cidrIsSet() const
{
    return cidrIsSet_;
}

void IpInfo::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string IpInfo::getDescription() const
{
    return description_;
}

void IpInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IpInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IpInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime IpInfo::getCreatedAt() const
{
    return createdAt_;
}

void IpInfo::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool IpInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void IpInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

}
}
}
}
}


