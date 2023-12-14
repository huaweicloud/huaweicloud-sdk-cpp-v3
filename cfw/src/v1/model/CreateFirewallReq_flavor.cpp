

#include "huaweicloud/cfw/v1/model/CreateFirewallReq_flavor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateFirewallReq_flavor::CreateFirewallReq_flavor()
{
    version_ = "";
    versionIsSet_ = false;
    extendEipCount_ = 0;
    extendEipCountIsSet_ = false;
    extendBandwidth_ = 0;
    extendBandwidthIsSet_ = false;
    extendVpcCount_ = 0;
    extendVpcCountIsSet_ = false;
}

CreateFirewallReq_flavor::~CreateFirewallReq_flavor() = default;

void CreateFirewallReq_flavor::validate()
{
}

web::json::value CreateFirewallReq_flavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(extendEipCountIsSet_) {
        val[utility::conversions::to_string_t("extend_eip_count")] = ModelBase::toJson(extendEipCount_);
    }
    if(extendBandwidthIsSet_) {
        val[utility::conversions::to_string_t("extend_bandwidth")] = ModelBase::toJson(extendBandwidth_);
    }
    if(extendVpcCountIsSet_) {
        val[utility::conversions::to_string_t("extend_vpc_count")] = ModelBase::toJson(extendVpcCount_);
    }

    return val;
}
bool CreateFirewallReq_flavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_eip_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_eip_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendEipCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_bandwidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_vpc_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_vpc_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendVpcCount(refVal);
        }
    }
    return ok;
}


std::string CreateFirewallReq_flavor::getVersion() const
{
    return version_;
}

void CreateFirewallReq_flavor::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CreateFirewallReq_flavor::versionIsSet() const
{
    return versionIsSet_;
}

void CreateFirewallReq_flavor::unsetversion()
{
    versionIsSet_ = false;
}

int32_t CreateFirewallReq_flavor::getExtendEipCount() const
{
    return extendEipCount_;
}

void CreateFirewallReq_flavor::setExtendEipCount(int32_t value)
{
    extendEipCount_ = value;
    extendEipCountIsSet_ = true;
}

bool CreateFirewallReq_flavor::extendEipCountIsSet() const
{
    return extendEipCountIsSet_;
}

void CreateFirewallReq_flavor::unsetextendEipCount()
{
    extendEipCountIsSet_ = false;
}

int32_t CreateFirewallReq_flavor::getExtendBandwidth() const
{
    return extendBandwidth_;
}

void CreateFirewallReq_flavor::setExtendBandwidth(int32_t value)
{
    extendBandwidth_ = value;
    extendBandwidthIsSet_ = true;
}

bool CreateFirewallReq_flavor::extendBandwidthIsSet() const
{
    return extendBandwidthIsSet_;
}

void CreateFirewallReq_flavor::unsetextendBandwidth()
{
    extendBandwidthIsSet_ = false;
}

int32_t CreateFirewallReq_flavor::getExtendVpcCount() const
{
    return extendVpcCount_;
}

void CreateFirewallReq_flavor::setExtendVpcCount(int32_t value)
{
    extendVpcCount_ = value;
    extendVpcCountIsSet_ = true;
}

bool CreateFirewallReq_flavor::extendVpcCountIsSet() const
{
    return extendVpcCountIsSet_;
}

void CreateFirewallReq_flavor::unsetextendVpcCount()
{
    extendVpcCountIsSet_ = false;
}

}
}
}
}
}


