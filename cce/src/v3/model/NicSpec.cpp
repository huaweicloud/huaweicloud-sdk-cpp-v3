

#include "huaweicloud/cce/v3/model/NicSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NicSpec::NicSpec()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    fixedIpsIsSet_ = false;
    ipBlock_ = "";
    ipBlockIsSet_ = false;
    subnetListIsSet_ = false;
}

NicSpec::~NicSpec() = default;

void NicSpec::validate()
{
}

web::json::value NicSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnetId")] = ModelBase::toJson(subnetId_);
    }
    if(fixedIpsIsSet_) {
        val[utility::conversions::to_string_t("fixedIps")] = ModelBase::toJson(fixedIps_);
    }
    if(ipBlockIsSet_) {
        val[utility::conversions::to_string_t("ipBlock")] = ModelBase::toJson(ipBlock_);
    }
    if(subnetListIsSet_) {
        val[utility::conversions::to_string_t("subnetList")] = ModelBase::toJson(subnetList_);
    }

    return val;
}
bool NicSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnetId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnetId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixedIps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixedIps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipBlock"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipBlock"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpBlock(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnetList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnetList"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetList(refVal);
        }
    }
    return ok;
}


std::string NicSpec::getSubnetId() const
{
    return subnetId_;
}

void NicSpec::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool NicSpec::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void NicSpec::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<std::string>& NicSpec::getFixedIps()
{
    return fixedIps_;
}

void NicSpec::setFixedIps(const std::vector<std::string>& value)
{
    fixedIps_ = value;
    fixedIpsIsSet_ = true;
}

bool NicSpec::fixedIpsIsSet() const
{
    return fixedIpsIsSet_;
}

void NicSpec::unsetfixedIps()
{
    fixedIpsIsSet_ = false;
}

std::string NicSpec::getIpBlock() const
{
    return ipBlock_;
}

void NicSpec::setIpBlock(const std::string& value)
{
    ipBlock_ = value;
    ipBlockIsSet_ = true;
}

bool NicSpec::ipBlockIsSet() const
{
    return ipBlockIsSet_;
}

void NicSpec::unsetipBlock()
{
    ipBlockIsSet_ = false;
}

std::vector<std::string>& NicSpec::getSubnetList()
{
    return subnetList_;
}

void NicSpec::setSubnetList(const std::vector<std::string>& value)
{
    subnetList_ = value;
    subnetListIsSet_ = true;
}

bool NicSpec::subnetListIsSet() const
{
    return subnetListIsSet_;
}

void NicSpec::unsetsubnetList()
{
    subnetListIsSet_ = false;
}

}
}
}
}
}


