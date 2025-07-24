

#include "huaweicloud/cloudtest/v1/model/DnsMappingNode.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DnsMappingNode::DnsMappingNode()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    ipsIsSet_ = false;
}

DnsMappingNode::~DnsMappingNode() = default;

void DnsMappingNode::validate()
{
}

web::json::value DnsMappingNode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(ipsIsSet_) {
        val[utility::conversions::to_string_t("ips")] = ModelBase::toJson(ips_);
    }

    return val;
}
bool DnsMappingNode::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIps(refVal);
        }
    }
    return ok;
}


std::string DnsMappingNode::getDomainName() const
{
    return domainName_;
}

void DnsMappingNode::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool DnsMappingNode::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void DnsMappingNode::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::vector<std::string>& DnsMappingNode::getIps()
{
    return ips_;
}

void DnsMappingNode::setIps(const std::vector<std::string>& value)
{
    ips_ = value;
    ipsIsSet_ = true;
}

bool DnsMappingNode::ipsIsSet() const
{
    return ipsIsSet_;
}

void DnsMappingNode::unsetips()
{
    ipsIsSet_ = false;
}

}
}
}
}
}


