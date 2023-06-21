

#include "huaweicloud/cfw/v1/model/GetEastWestFirewallResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




GetEastWestFirewallResponseBody::GetEastWestFirewallResponseBody()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    erAssociatedSubnetIsSet_ = false;
    firewallAssociatedSubnetsIsSet_ = false;
    erIsSet_ = false;
    inspectionVpcIsSet_ = false;
    protectInfosIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

GetEastWestFirewallResponseBody::~GetEastWestFirewallResponseBody() = default;

void GetEastWestFirewallResponseBody::validate()
{
}

web::json::value GetEastWestFirewallResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(erAssociatedSubnetIsSet_) {
        val[utility::conversions::to_string_t("er_associated_subnet")] = ModelBase::toJson(erAssociatedSubnet_);
    }
    if(firewallAssociatedSubnetsIsSet_) {
        val[utility::conversions::to_string_t("firewall_associated_subnets")] = ModelBase::toJson(firewallAssociatedSubnets_);
    }
    if(erIsSet_) {
        val[utility::conversions::to_string_t("er")] = ModelBase::toJson(er_);
    }
    if(inspectionVpcIsSet_) {
        val[utility::conversions::to_string_t("inspection_vpc")] = ModelBase::toJson(inspectionVpc_);
    }
    if(protectInfosIsSet_) {
        val[utility::conversions::to_string_t("protect_infos")] = ModelBase::toJson(protectInfos_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool GetEastWestFirewallResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("er_associated_subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("er_associated_subnet"));
        if(!fieldValue.is_null())
        {
            SubnetInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErAssociatedSubnet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firewall_associated_subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firewall_associated_subnets"));
        if(!fieldValue.is_null())
        {
            std::vector<SubnetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirewallAssociatedSubnets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("er"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("er"));
        if(!fieldValue.is_null())
        {
            ErInstance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inspection_vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inspection_vpc"));
        if(!fieldValue.is_null())
        {
            VpcDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInspectionVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<EwProtectResourceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string GetEastWestFirewallResponseBody::getObjectId() const
{
    return objectId_;
}

void GetEastWestFirewallResponseBody::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void GetEastWestFirewallResponseBody::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string GetEastWestFirewallResponseBody::getProjectId() const
{
    return projectId_;
}

void GetEastWestFirewallResponseBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void GetEastWestFirewallResponseBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t GetEastWestFirewallResponseBody::getStatus() const
{
    return status_;
}

void GetEastWestFirewallResponseBody::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::statusIsSet() const
{
    return statusIsSet_;
}

void GetEastWestFirewallResponseBody::unsetstatus()
{
    statusIsSet_ = false;
}

SubnetInfo GetEastWestFirewallResponseBody::getErAssociatedSubnet() const
{
    return erAssociatedSubnet_;
}

void GetEastWestFirewallResponseBody::setErAssociatedSubnet(const SubnetInfo& value)
{
    erAssociatedSubnet_ = value;
    erAssociatedSubnetIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::erAssociatedSubnetIsSet() const
{
    return erAssociatedSubnetIsSet_;
}

void GetEastWestFirewallResponseBody::unseterAssociatedSubnet()
{
    erAssociatedSubnetIsSet_ = false;
}

std::vector<SubnetInfo>& GetEastWestFirewallResponseBody::getFirewallAssociatedSubnets()
{
    return firewallAssociatedSubnets_;
}

void GetEastWestFirewallResponseBody::setFirewallAssociatedSubnets(const std::vector<SubnetInfo>& value)
{
    firewallAssociatedSubnets_ = value;
    firewallAssociatedSubnetsIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::firewallAssociatedSubnetsIsSet() const
{
    return firewallAssociatedSubnetsIsSet_;
}

void GetEastWestFirewallResponseBody::unsetfirewallAssociatedSubnets()
{
    firewallAssociatedSubnetsIsSet_ = false;
}

ErInstance GetEastWestFirewallResponseBody::getEr() const
{
    return er_;
}

void GetEastWestFirewallResponseBody::setEr(const ErInstance& value)
{
    er_ = value;
    erIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::erIsSet() const
{
    return erIsSet_;
}

void GetEastWestFirewallResponseBody::unseter()
{
    erIsSet_ = false;
}

VpcDetail GetEastWestFirewallResponseBody::getInspectionVpc() const
{
    return inspectionVpc_;
}

void GetEastWestFirewallResponseBody::setInspectionVpc(const VpcDetail& value)
{
    inspectionVpc_ = value;
    inspectionVpcIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::inspectionVpcIsSet() const
{
    return inspectionVpcIsSet_;
}

void GetEastWestFirewallResponseBody::unsetinspectionVpc()
{
    inspectionVpcIsSet_ = false;
}

std::vector<EwProtectResourceInfo>& GetEastWestFirewallResponseBody::getProtectInfos()
{
    return protectInfos_;
}

void GetEastWestFirewallResponseBody::setProtectInfos(const std::vector<EwProtectResourceInfo>& value)
{
    protectInfos_ = value;
    protectInfosIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::protectInfosIsSet() const
{
    return protectInfosIsSet_;
}

void GetEastWestFirewallResponseBody::unsetprotectInfos()
{
    protectInfosIsSet_ = false;
}

int32_t GetEastWestFirewallResponseBody::getTotal() const
{
    return total_;
}

void GetEastWestFirewallResponseBody::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::totalIsSet() const
{
    return totalIsSet_;
}

void GetEastWestFirewallResponseBody::unsettotal()
{
    totalIsSet_ = false;
}

int32_t GetEastWestFirewallResponseBody::getOffset() const
{
    return offset_;
}

void GetEastWestFirewallResponseBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void GetEastWestFirewallResponseBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t GetEastWestFirewallResponseBody::getLimit() const
{
    return limit_;
}

void GetEastWestFirewallResponseBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool GetEastWestFirewallResponseBody::limitIsSet() const
{
    return limitIsSet_;
}

void GetEastWestFirewallResponseBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


