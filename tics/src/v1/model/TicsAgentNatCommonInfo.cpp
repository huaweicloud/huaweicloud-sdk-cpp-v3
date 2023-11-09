

#include "huaweicloud/tics/v1/model/TicsAgentNatCommonInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsAgentNatCommonInfo::TicsAgentNatCommonInfo()
{
    natId_ = "";
    natIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

TicsAgentNatCommonInfo::~TicsAgentNatCommonInfo() = default;

void TicsAgentNatCommonInfo::validate()
{
}

web::json::value TicsAgentNatCommonInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(natIdIsSet_) {
        val[utility::conversions::to_string_t("nat_id")] = ModelBase::toJson(natId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}
bool TicsAgentNatCommonInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nat_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nat_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNatId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


std::string TicsAgentNatCommonInfo::getNatId() const
{
    return natId_;
}

void TicsAgentNatCommonInfo::setNatId(const std::string& value)
{
    natId_ = value;
    natIdIsSet_ = true;
}

bool TicsAgentNatCommonInfo::natIdIsSet() const
{
    return natIdIsSet_;
}

void TicsAgentNatCommonInfo::unsetnatId()
{
    natIdIsSet_ = false;
}

std::string TicsAgentNatCommonInfo::getProjectId() const
{
    return projectId_;
}

void TicsAgentNatCommonInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TicsAgentNatCommonInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TicsAgentNatCommonInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TicsAgentNatCommonInfo::getSubnetId() const
{
    return subnetId_;
}

void TicsAgentNatCommonInfo::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool TicsAgentNatCommonInfo::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void TicsAgentNatCommonInfo::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string TicsAgentNatCommonInfo::getVpcId() const
{
    return vpcId_;
}

void TicsAgentNatCommonInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool TicsAgentNatCommonInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void TicsAgentNatCommonInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


