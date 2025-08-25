

#include "huaweicloud/cce/v3/model/ContainerNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ContainerNetwork::ContainerNetwork()
{
    mode_ = "";
    modeIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    cidrsIsSet_ = false;
}

ContainerNetwork::~ContainerNetwork() = default;

void ContainerNetwork::validate()
{
}

web::json::value ContainerNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(cidrsIsSet_) {
        val[utility::conversions::to_string_t("cidrs")] = ModelBase::toJson(cidrs_);
    }

    return val;
}
bool ContainerNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidrs"));
        if(!fieldValue.is_null())
        {
            std::vector<ContainerCIDR> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrs(refVal);
        }
    }
    return ok;
}


std::string ContainerNetwork::getMode() const
{
    return mode_;
}

void ContainerNetwork::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ContainerNetwork::modeIsSet() const
{
    return modeIsSet_;
}

void ContainerNetwork::unsetmode()
{
    modeIsSet_ = false;
}

std::string ContainerNetwork::getCidr() const
{
    return cidr_;
}

void ContainerNetwork::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool ContainerNetwork::cidrIsSet() const
{
    return cidrIsSet_;
}

void ContainerNetwork::unsetcidr()
{
    cidrIsSet_ = false;
}

std::vector<ContainerCIDR>& ContainerNetwork::getCidrs()
{
    return cidrs_;
}

void ContainerNetwork::setCidrs(const std::vector<ContainerCIDR>& value)
{
    cidrs_ = value;
    cidrsIsSet_ = true;
}

bool ContainerNetwork::cidrsIsSet() const
{
    return cidrsIsSet_;
}

void ContainerNetwork::unsetcidrs()
{
    cidrsIsSet_ = false;
}

}
}
}
}
}


