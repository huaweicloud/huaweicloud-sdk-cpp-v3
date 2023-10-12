

#include "huaweicloud/gaussdbfornosql/v3/model/QueryRestoreList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




QueryRestoreList::QueryRestoreList()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetIdsIsSet_ = false;
    securityGroupIdsIsSet_ = false;
}

QueryRestoreList::~QueryRestoreList() = default;

void QueryRestoreList::validate()
{
}

web::json::value QueryRestoreList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdsIsSet_) {
        val[utility::conversions::to_string_t("subnet_ids")] = ModelBase::toJson(subnetIds_);
    }
    if(securityGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("security_group_ids")] = ModelBase::toJson(securityGroupIds_);
    }

    return val;
}
bool QueryRestoreList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupIds(refVal);
        }
    }
    return ok;
}


std::string QueryRestoreList::getInstanceId() const
{
    return instanceId_;
}

void QueryRestoreList::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool QueryRestoreList::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void QueryRestoreList::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string QueryRestoreList::getInstanceMode() const
{
    return instanceMode_;
}

void QueryRestoreList::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool QueryRestoreList::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void QueryRestoreList::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string QueryRestoreList::getEngineName() const
{
    return engineName_;
}

void QueryRestoreList::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool QueryRestoreList::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void QueryRestoreList::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string QueryRestoreList::getEngineVersion() const
{
    return engineVersion_;
}

void QueryRestoreList::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool QueryRestoreList::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void QueryRestoreList::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string QueryRestoreList::getVpcId() const
{
    return vpcId_;
}

void QueryRestoreList::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool QueryRestoreList::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void QueryRestoreList::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::vector<std::string>& QueryRestoreList::getSubnetIds()
{
    return subnetIds_;
}

void QueryRestoreList::setSubnetIds(const std::vector<std::string>& value)
{
    subnetIds_ = value;
    subnetIdsIsSet_ = true;
}

bool QueryRestoreList::subnetIdsIsSet() const
{
    return subnetIdsIsSet_;
}

void QueryRestoreList::unsetsubnetIds()
{
    subnetIdsIsSet_ = false;
}

std::vector<std::string>& QueryRestoreList::getSecurityGroupIds()
{
    return securityGroupIds_;
}

void QueryRestoreList::setSecurityGroupIds(const std::vector<std::string>& value)
{
    securityGroupIds_ = value;
    securityGroupIdsIsSet_ = true;
}

bool QueryRestoreList::securityGroupIdsIsSet() const
{
    return securityGroupIdsIsSet_;
}

void QueryRestoreList::unsetsecurityGroupIds()
{
    securityGroupIdsIsSet_ = false;
}

}
}
}
}
}


