

#include "huaweicloud/dbss/v1/model/ResponseAuditV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResponseAuditV2::ResponseAuditV2()
{
    bindingDbType_ = "";
    bindingDbTypeIsSet_ = false;
    chargeModel_ = "";
    chargeModelIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    configNum_ = 0;
    configNumIsSet_ = false;
    connectIpv6_ = "";
    connectIpv6IsSet_ = false;
    connectIp_ = "";
    connectIpIsSet_ = false;
    cpu_ = 0;
    cpuIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    databaseLimit_ = 0;
    databaseLimitIsSet_ = false;
    effect_ = 0;
    effectIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    expired_ = "";
    expiredIsSet_ = false;
    failedReason_ = "";
    failedReasonIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    keepDays_ = "";
    keepDaysIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    newVersion_ = "";
    newVersionIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    ram_ = 0;
    ramIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    remainDays_ = "";
    remainDaysIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    specification_ = "";
    specificationIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    supportedFeatureIsSet_ = false;
    task_ = "";
    taskIsSet_ = false;
    timezone_ = "";
    timezoneIsSet_ = false;
    upgradeLog_ = "";
    upgradeLogIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    zone_ = "";
    zoneIsSet_ = false;
}

ResponseAuditV2::~ResponseAuditV2() = default;

void ResponseAuditV2::validate()
{
}

web::json::value ResponseAuditV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bindingDbTypeIsSet_) {
        val[utility::conversions::to_string_t("binding_db_type")] = ModelBase::toJson(bindingDbType_);
    }
    if(chargeModelIsSet_) {
        val[utility::conversions::to_string_t("charge_model")] = ModelBase::toJson(chargeModel_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(configNumIsSet_) {
        val[utility::conversions::to_string_t("config_num")] = ModelBase::toJson(configNum_);
    }
    if(connectIpv6IsSet_) {
        val[utility::conversions::to_string_t("connectIpv6")] = ModelBase::toJson(connectIpv6_);
    }
    if(connectIpIsSet_) {
        val[utility::conversions::to_string_t("connect_ip")] = ModelBase::toJson(connectIp_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(databaseLimitIsSet_) {
        val[utility::conversions::to_string_t("database_limit")] = ModelBase::toJson(databaseLimit_);
    }
    if(effectIsSet_) {
        val[utility::conversions::to_string_t("effect")] = ModelBase::toJson(effect_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(expiredIsSet_) {
        val[utility::conversions::to_string_t("expired")] = ModelBase::toJson(expired_);
    }
    if(failedReasonIsSet_) {
        val[utility::conversions::to_string_t("failed_reason")] = ModelBase::toJson(failedReason_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(newVersionIsSet_) {
        val[utility::conversions::to_string_t("new_version")] = ModelBase::toJson(newVersion_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(remainDaysIsSet_) {
        val[utility::conversions::to_string_t("remain_days")] = ModelBase::toJson(remainDays_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(specificationIsSet_) {
        val[utility::conversions::to_string_t("specification")] = ModelBase::toJson(specification_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(supportedFeatureIsSet_) {
        val[utility::conversions::to_string_t("supported_feature")] = ModelBase::toJson(supportedFeature_);
    }
    if(taskIsSet_) {
        val[utility::conversions::to_string_t("task")] = ModelBase::toJson(task_);
    }
    if(timezoneIsSet_) {
        val[utility::conversions::to_string_t("timezone")] = ModelBase::toJson(timezone_);
    }
    if(upgradeLogIsSet_) {
        val[utility::conversions::to_string_t("upgrade_log")] = ModelBase::toJson(upgradeLog_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(zoneIsSet_) {
        val[utility::conversions::to_string_t("zone")] = ModelBase::toJson(zone_);
    }

    return val;
}
bool ResponseAuditV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("binding_db_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binding_db_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindingDbType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connectIpv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connectIpv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectIpv6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connect_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connect_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effect"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failed_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failed_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remain_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remain_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemainDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("specification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecification(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("supported_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_feature"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timezone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timezone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimezone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZone(refVal);
        }
    }
    return ok;
}


std::string ResponseAuditV2::getBindingDbType() const
{
    return bindingDbType_;
}

void ResponseAuditV2::setBindingDbType(const std::string& value)
{
    bindingDbType_ = value;
    bindingDbTypeIsSet_ = true;
}

bool ResponseAuditV2::bindingDbTypeIsSet() const
{
    return bindingDbTypeIsSet_;
}

void ResponseAuditV2::unsetbindingDbType()
{
    bindingDbTypeIsSet_ = false;
}

std::string ResponseAuditV2::getChargeModel() const
{
    return chargeModel_;
}

void ResponseAuditV2::setChargeModel(const std::string& value)
{
    chargeModel_ = value;
    chargeModelIsSet_ = true;
}

bool ResponseAuditV2::chargeModelIsSet() const
{
    return chargeModelIsSet_;
}

void ResponseAuditV2::unsetchargeModel()
{
    chargeModelIsSet_ = false;
}

std::string ResponseAuditV2::getComment() const
{
    return comment_;
}

void ResponseAuditV2::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool ResponseAuditV2::commentIsSet() const
{
    return commentIsSet_;
}

void ResponseAuditV2::unsetcomment()
{
    commentIsSet_ = false;
}

int32_t ResponseAuditV2::getConfigNum() const
{
    return configNum_;
}

void ResponseAuditV2::setConfigNum(int32_t value)
{
    configNum_ = value;
    configNumIsSet_ = true;
}

bool ResponseAuditV2::configNumIsSet() const
{
    return configNumIsSet_;
}

void ResponseAuditV2::unsetconfigNum()
{
    configNumIsSet_ = false;
}

std::string ResponseAuditV2::getConnectIpv6() const
{
    return connectIpv6_;
}

void ResponseAuditV2::setConnectIpv6(const std::string& value)
{
    connectIpv6_ = value;
    connectIpv6IsSet_ = true;
}

bool ResponseAuditV2::connectIpv6IsSet() const
{
    return connectIpv6IsSet_;
}

void ResponseAuditV2::unsetconnectIpv6()
{
    connectIpv6IsSet_ = false;
}

std::string ResponseAuditV2::getConnectIp() const
{
    return connectIp_;
}

void ResponseAuditV2::setConnectIp(const std::string& value)
{
    connectIp_ = value;
    connectIpIsSet_ = true;
}

bool ResponseAuditV2::connectIpIsSet() const
{
    return connectIpIsSet_;
}

void ResponseAuditV2::unsetconnectIp()
{
    connectIpIsSet_ = false;
}

int32_t ResponseAuditV2::getCpu() const
{
    return cpu_;
}

void ResponseAuditV2::setCpu(int32_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ResponseAuditV2::cpuIsSet() const
{
    return cpuIsSet_;
}

void ResponseAuditV2::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ResponseAuditV2::getCreated() const
{
    return created_;
}

void ResponseAuditV2::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ResponseAuditV2::createdIsSet() const
{
    return createdIsSet_;
}

void ResponseAuditV2::unsetcreated()
{
    createdIsSet_ = false;
}

int32_t ResponseAuditV2::getDatabaseLimit() const
{
    return databaseLimit_;
}

void ResponseAuditV2::setDatabaseLimit(int32_t value)
{
    databaseLimit_ = value;
    databaseLimitIsSet_ = true;
}

bool ResponseAuditV2::databaseLimitIsSet() const
{
    return databaseLimitIsSet_;
}

void ResponseAuditV2::unsetdatabaseLimit()
{
    databaseLimitIsSet_ = false;
}

int32_t ResponseAuditV2::getEffect() const
{
    return effect_;
}

void ResponseAuditV2::setEffect(int32_t value)
{
    effect_ = value;
    effectIsSet_ = true;
}

bool ResponseAuditV2::effectIsSet() const
{
    return effectIsSet_;
}

void ResponseAuditV2::unseteffect()
{
    effectIsSet_ = false;
}

std::string ResponseAuditV2::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ResponseAuditV2::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ResponseAuditV2::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ResponseAuditV2::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ResponseAuditV2::getExpired() const
{
    return expired_;
}

void ResponseAuditV2::setExpired(const std::string& value)
{
    expired_ = value;
    expiredIsSet_ = true;
}

bool ResponseAuditV2::expiredIsSet() const
{
    return expiredIsSet_;
}

void ResponseAuditV2::unsetexpired()
{
    expiredIsSet_ = false;
}

std::string ResponseAuditV2::getFailedReason() const
{
    return failedReason_;
}

void ResponseAuditV2::setFailedReason(const std::string& value)
{
    failedReason_ = value;
    failedReasonIsSet_ = true;
}

bool ResponseAuditV2::failedReasonIsSet() const
{
    return failedReasonIsSet_;
}

void ResponseAuditV2::unsetfailedReason()
{
    failedReasonIsSet_ = false;
}

std::string ResponseAuditV2::getInstanceId() const
{
    return instanceId_;
}

void ResponseAuditV2::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResponseAuditV2::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResponseAuditV2::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ResponseAuditV2::getKeepDays() const
{
    return keepDays_;
}

void ResponseAuditV2::setKeepDays(const std::string& value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ResponseAuditV2::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ResponseAuditV2::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

std::string ResponseAuditV2::getName() const
{
    return name_;
}

void ResponseAuditV2::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResponseAuditV2::nameIsSet() const
{
    return nameIsSet_;
}

void ResponseAuditV2::unsetname()
{
    nameIsSet_ = false;
}

std::string ResponseAuditV2::getNewVersion() const
{
    return newVersion_;
}

void ResponseAuditV2::setNewVersion(const std::string& value)
{
    newVersion_ = value;
    newVersionIsSet_ = true;
}

bool ResponseAuditV2::newVersionIsSet() const
{
    return newVersionIsSet_;
}

void ResponseAuditV2::unsetnewVersion()
{
    newVersionIsSet_ = false;
}

std::string ResponseAuditV2::getPortId() const
{
    return portId_;
}

void ResponseAuditV2::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool ResponseAuditV2::portIdIsSet() const
{
    return portIdIsSet_;
}

void ResponseAuditV2::unsetportId()
{
    portIdIsSet_ = false;
}

int32_t ResponseAuditV2::getRam() const
{
    return ram_;
}

void ResponseAuditV2::setRam(int32_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ResponseAuditV2::ramIsSet() const
{
    return ramIsSet_;
}

void ResponseAuditV2::unsetram()
{
    ramIsSet_ = false;
}

std::string ResponseAuditV2::getRegion() const
{
    return region_;
}

void ResponseAuditV2::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ResponseAuditV2::regionIsSet() const
{
    return regionIsSet_;
}

void ResponseAuditV2::unsetregion()
{
    regionIsSet_ = false;
}

std::string ResponseAuditV2::getRemainDays() const
{
    return remainDays_;
}

void ResponseAuditV2::setRemainDays(const std::string& value)
{
    remainDays_ = value;
    remainDaysIsSet_ = true;
}

bool ResponseAuditV2::remainDaysIsSet() const
{
    return remainDaysIsSet_;
}

void ResponseAuditV2::unsetremainDays()
{
    remainDaysIsSet_ = false;
}

std::string ResponseAuditV2::getResourceId() const
{
    return resourceId_;
}

void ResponseAuditV2::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResponseAuditV2::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResponseAuditV2::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResponseAuditV2::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void ResponseAuditV2::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool ResponseAuditV2::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void ResponseAuditV2::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

std::string ResponseAuditV2::getScene() const
{
    return scene_;
}

void ResponseAuditV2::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ResponseAuditV2::sceneIsSet() const
{
    return sceneIsSet_;
}

void ResponseAuditV2::unsetscene()
{
    sceneIsSet_ = false;
}

std::string ResponseAuditV2::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ResponseAuditV2::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ResponseAuditV2::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ResponseAuditV2::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string ResponseAuditV2::getSpecification() const
{
    return specification_;
}

void ResponseAuditV2::setSpecification(const std::string& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool ResponseAuditV2::specificationIsSet() const
{
    return specificationIsSet_;
}

void ResponseAuditV2::unsetspecification()
{
    specificationIsSet_ = false;
}

std::string ResponseAuditV2::getStatus() const
{
    return status_;
}

void ResponseAuditV2::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResponseAuditV2::statusIsSet() const
{
    return statusIsSet_;
}

void ResponseAuditV2::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ResponseAuditV2::getSubnetId() const
{
    return subnetId_;
}

void ResponseAuditV2::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ResponseAuditV2::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ResponseAuditV2::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<std::string>& ResponseAuditV2::getSupportedFeature()
{
    return supportedFeature_;
}

void ResponseAuditV2::setSupportedFeature(const std::vector<std::string>& value)
{
    supportedFeature_ = value;
    supportedFeatureIsSet_ = true;
}

bool ResponseAuditV2::supportedFeatureIsSet() const
{
    return supportedFeatureIsSet_;
}

void ResponseAuditV2::unsetsupportedFeature()
{
    supportedFeatureIsSet_ = false;
}

std::string ResponseAuditV2::getTask() const
{
    return task_;
}

void ResponseAuditV2::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool ResponseAuditV2::taskIsSet() const
{
    return taskIsSet_;
}

void ResponseAuditV2::unsettask()
{
    taskIsSet_ = false;
}

std::string ResponseAuditV2::getTimezone() const
{
    return timezone_;
}

void ResponseAuditV2::setTimezone(const std::string& value)
{
    timezone_ = value;
    timezoneIsSet_ = true;
}

bool ResponseAuditV2::timezoneIsSet() const
{
    return timezoneIsSet_;
}

void ResponseAuditV2::unsettimezone()
{
    timezoneIsSet_ = false;
}

std::string ResponseAuditV2::getUpgradeLog() const
{
    return upgradeLog_;
}

void ResponseAuditV2::setUpgradeLog(const std::string& value)
{
    upgradeLog_ = value;
    upgradeLogIsSet_ = true;
}

bool ResponseAuditV2::upgradeLogIsSet() const
{
    return upgradeLogIsSet_;
}

void ResponseAuditV2::unsetupgradeLog()
{
    upgradeLogIsSet_ = false;
}

std::string ResponseAuditV2::getVersion() const
{
    return version_;
}

void ResponseAuditV2::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ResponseAuditV2::versionIsSet() const
{
    return versionIsSet_;
}

void ResponseAuditV2::unsetversion()
{
    versionIsSet_ = false;
}

std::string ResponseAuditV2::getVpcId() const
{
    return vpcId_;
}

void ResponseAuditV2::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ResponseAuditV2::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ResponseAuditV2::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ResponseAuditV2::getZone() const
{
    return zone_;
}

void ResponseAuditV2::setZone(const std::string& value)
{
    zone_ = value;
    zoneIsSet_ = true;
}

bool ResponseAuditV2::zoneIsSet() const
{
    return zoneIsSet_;
}

void ResponseAuditV2::unsetzone()
{
    zoneIsSet_ = false;
}

}
}
}
}
}


