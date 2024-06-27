

#include "huaweicloud/cfw/v1/model/CreateEWFirewallInspectVpcResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateEWFirewallInspectVpcResp::CreateEWFirewallInspectVpcResp()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetIdsIsSet_ = false;
}

CreateEWFirewallInspectVpcResp::~CreateEWFirewallInspectVpcResp() = default;

void CreateEWFirewallInspectVpcResp::validate()
{
}

web::json::value CreateEWFirewallInspectVpcResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdsIsSet_) {
        val[utility::conversions::to_string_t("subnet_ids")] = ModelBase::toJson(subnetIds_);
    }

    return val;
}
bool CreateEWFirewallInspectVpcResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetIds(refVal);
        }
    }
    return ok;
}


std::string CreateEWFirewallInspectVpcResp::getVpcId() const
{
    return vpcId_;
}

void CreateEWFirewallInspectVpcResp::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateEWFirewallInspectVpcResp::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateEWFirewallInspectVpcResp::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::vector<std::string>& CreateEWFirewallInspectVpcResp::getSubnetIds()
{
    return subnetIds_;
}

void CreateEWFirewallInspectVpcResp::setSubnetIds(const std::vector<std::string>& value)
{
    subnetIds_ = value;
    subnetIdsIsSet_ = true;
}

bool CreateEWFirewallInspectVpcResp::subnetIdsIsSet() const
{
    return subnetIdsIsSet_;
}

void CreateEWFirewallInspectVpcResp::unsetsubnetIds()
{
    subnetIdsIsSet_ = false;
}

}
}
}
}
}


