

#include "huaweicloud/ecs/v2/model/NovaCreateServersSchedulerHint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaCreateServersSchedulerHint::NovaCreateServersSchedulerHint()
{
    group_ = "";
    groupIsSet_ = false;
    differentHostIsSet_ = false;
    sameHostIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    buildNearHostIp_ = "";
    buildNearHostIpIsSet_ = false;
    tenancy_ = "";
    tenancyIsSet_ = false;
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
}

NovaCreateServersSchedulerHint::~NovaCreateServersSchedulerHint() = default;

void NovaCreateServersSchedulerHint::validate()
{
}

web::json::value NovaCreateServersSchedulerHint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(differentHostIsSet_) {
        val[utility::conversions::to_string_t("different_host")] = ModelBase::toJson(differentHost_);
    }
    if(sameHostIsSet_) {
        val[utility::conversions::to_string_t("same_host")] = ModelBase::toJson(sameHost_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(buildNearHostIpIsSet_) {
        val[utility::conversions::to_string_t("build_near_host_ip")] = ModelBase::toJson(buildNearHostIp_);
    }
    if(tenancyIsSet_) {
        val[utility::conversions::to_string_t("tenancy")] = ModelBase::toJson(tenancy_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }

    return val;
}
bool NovaCreateServersSchedulerHint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("different_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("different_host"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferentHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("same_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("same_host"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSameHost(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("build_near_host_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_near_host_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNearHostIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenancy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenancy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenancy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedHostId(refVal);
        }
    }
    return ok;
}


std::string NovaCreateServersSchedulerHint::getGroup() const
{
    return group_;
}

void NovaCreateServersSchedulerHint::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool NovaCreateServersSchedulerHint::groupIsSet() const
{
    return groupIsSet_;
}

void NovaCreateServersSchedulerHint::unsetgroup()
{
    groupIsSet_ = false;
}

std::vector<std::string>& NovaCreateServersSchedulerHint::getDifferentHost()
{
    return differentHost_;
}

void NovaCreateServersSchedulerHint::setDifferentHost(const std::vector<std::string>& value)
{
    differentHost_ = value;
    differentHostIsSet_ = true;
}

bool NovaCreateServersSchedulerHint::differentHostIsSet() const
{
    return differentHostIsSet_;
}

void NovaCreateServersSchedulerHint::unsetdifferentHost()
{
    differentHostIsSet_ = false;
}

std::vector<std::string>& NovaCreateServersSchedulerHint::getSameHost()
{
    return sameHost_;
}

void NovaCreateServersSchedulerHint::setSameHost(const std::vector<std::string>& value)
{
    sameHost_ = value;
    sameHostIsSet_ = true;
}

bool NovaCreateServersSchedulerHint::sameHostIsSet() const
{
    return sameHostIsSet_;
}

void NovaCreateServersSchedulerHint::unsetsameHost()
{
    sameHostIsSet_ = false;
}

std::string NovaCreateServersSchedulerHint::getCidr() const
{
    return cidr_;
}

void NovaCreateServersSchedulerHint::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool NovaCreateServersSchedulerHint::cidrIsSet() const
{
    return cidrIsSet_;
}

void NovaCreateServersSchedulerHint::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string NovaCreateServersSchedulerHint::getBuildNearHostIp() const
{
    return buildNearHostIp_;
}

void NovaCreateServersSchedulerHint::setBuildNearHostIp(const std::string& value)
{
    buildNearHostIp_ = value;
    buildNearHostIpIsSet_ = true;
}

bool NovaCreateServersSchedulerHint::buildNearHostIpIsSet() const
{
    return buildNearHostIpIsSet_;
}

void NovaCreateServersSchedulerHint::unsetbuildNearHostIp()
{
    buildNearHostIpIsSet_ = false;
}

std::string NovaCreateServersSchedulerHint::getTenancy() const
{
    return tenancy_;
}

void NovaCreateServersSchedulerHint::setTenancy(const std::string& value)
{
    tenancy_ = value;
    tenancyIsSet_ = true;
}

bool NovaCreateServersSchedulerHint::tenancyIsSet() const
{
    return tenancyIsSet_;
}

void NovaCreateServersSchedulerHint::unsettenancy()
{
    tenancyIsSet_ = false;
}

std::string NovaCreateServersSchedulerHint::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void NovaCreateServersSchedulerHint::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool NovaCreateServersSchedulerHint::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void NovaCreateServersSchedulerHint::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

}
}
}
}
}


