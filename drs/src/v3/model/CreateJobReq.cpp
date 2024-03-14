

#include "huaweicloud/drs/v3/model/CreateJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateJobReq::CreateJobReq()
{
    bindEip_ = false;
    bindEipIsSet_ = false;
    dbUseType_ = "";
    dbUseTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    isTargetReadonly_ = false;
    isTargetReadonlyIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    multiWrite_ = false;
    multiWriteIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    sourceEndpointIsSet_ = false;
    targetEndpointIsSet_ = false;
    tagsIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    customizeSutnetId_ = "";
    customizeSutnetIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    sysTagsIsSet_ = false;
    expiredDays_ = "";
    expiredDaysIsSet_ = false;
    masterAz_ = "";
    masterAzIsSet_ = false;
    slaveAz_ = "";
    slaveAzIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    periodOrderIsSet_ = false;
    publicIpListIsSet_ = false;
}

CreateJobReq::~CreateJobReq() = default;

void CreateJobReq::validate()
{
}

web::json::value CreateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bindEipIsSet_) {
        val[utility::conversions::to_string_t("bind_eip")] = ModelBase::toJson(bindEip_);
    }
    if(dbUseTypeIsSet_) {
        val[utility::conversions::to_string_t("db_use_type")] = ModelBase::toJson(dbUseType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(isTargetReadonlyIsSet_) {
        val[utility::conversions::to_string_t("is_target_readonly")] = ModelBase::toJson(isTargetReadonly_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(multiWriteIsSet_) {
        val[utility::conversions::to_string_t("multi_write")] = ModelBase::toJson(multiWrite_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(sourceEndpointIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint")] = ModelBase::toJson(sourceEndpoint_);
    }
    if(targetEndpointIsSet_) {
        val[utility::conversions::to_string_t("target_endpoint")] = ModelBase::toJson(targetEndpoint_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(customizeSutnetIdIsSet_) {
        val[utility::conversions::to_string_t("customize_sutnet_id")] = ModelBase::toJson(customizeSutnetId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }
    if(expiredDaysIsSet_) {
        val[utility::conversions::to_string_t("expired_days")] = ModelBase::toJson(expiredDays_);
    }
    if(masterAzIsSet_) {
        val[utility::conversions::to_string_t("master_az")] = ModelBase::toJson(masterAz_);
    }
    if(slaveAzIsSet_) {
        val[utility::conversions::to_string_t("slave_az")] = ModelBase::toJson(slaveAz_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(periodOrderIsSet_) {
        val[utility::conversions::to_string_t("period_order")] = ModelBase::toJson(periodOrder_);
    }
    if(publicIpListIsSet_) {
        val[utility::conversions::to_string_t("public_ip_list")] = ModelBase::toJson(publicIpList_);
    }

    return val;
}
bool CreateJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bind_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bind_eip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBindEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_use_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_target_readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_target_readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTargetReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_write"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_write"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiWrite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_endpoint"));
        if(!fieldValue.is_null())
        {
            Endpoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_endpoint"));
        if(!fieldValue.is_null())
        {
            Endpoint refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customize_sutnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customize_sutnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomizeSutnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("master_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("master_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasterAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period_order"));
        if(!fieldValue.is_null())
        {
            PeriodOrderInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriodOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PublicIpConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpList(refVal);
        }
    }
    return ok;
}


bool CreateJobReq::isBindEip() const
{
    return bindEip_;
}

void CreateJobReq::setBindEip(bool value)
{
    bindEip_ = value;
    bindEipIsSet_ = true;
}

bool CreateJobReq::bindEipIsSet() const
{
    return bindEipIsSet_;
}

void CreateJobReq::unsetbindEip()
{
    bindEipIsSet_ = false;
}

std::string CreateJobReq::getDbUseType() const
{
    return dbUseType_;
}

void CreateJobReq::setDbUseType(const std::string& value)
{
    dbUseType_ = value;
    dbUseTypeIsSet_ = true;
}

bool CreateJobReq::dbUseTypeIsSet() const
{
    return dbUseTypeIsSet_;
}

void CreateJobReq::unsetdbUseType()
{
    dbUseTypeIsSet_ = false;
}

std::string CreateJobReq::getName() const
{
    return name_;
}

void CreateJobReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateJobReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateJobReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateJobReq::getDescription() const
{
    return description_;
}

void CreateJobReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateJobReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateJobReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateJobReq::getEngineType() const
{
    return engineType_;
}

void CreateJobReq::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool CreateJobReq::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void CreateJobReq::unsetengineType()
{
    engineTypeIsSet_ = false;
}

bool CreateJobReq::isIsTargetReadonly() const
{
    return isTargetReadonly_;
}

void CreateJobReq::setIsTargetReadonly(bool value)
{
    isTargetReadonly_ = value;
    isTargetReadonlyIsSet_ = true;
}

bool CreateJobReq::isTargetReadonlyIsSet() const
{
    return isTargetReadonlyIsSet_;
}

void CreateJobReq::unsetisTargetReadonly()
{
    isTargetReadonlyIsSet_ = false;
}

std::string CreateJobReq::getJobDirection() const
{
    return jobDirection_;
}

void CreateJobReq::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool CreateJobReq::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void CreateJobReq::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

bool CreateJobReq::isMultiWrite() const
{
    return multiWrite_;
}

void CreateJobReq::setMultiWrite(bool value)
{
    multiWrite_ = value;
    multiWriteIsSet_ = true;
}

bool CreateJobReq::multiWriteIsSet() const
{
    return multiWriteIsSet_;
}

void CreateJobReq::unsetmultiWrite()
{
    multiWriteIsSet_ = false;
}

std::string CreateJobReq::getNetType() const
{
    return netType_;
}

void CreateJobReq::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool CreateJobReq::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void CreateJobReq::unsetnetType()
{
    netTypeIsSet_ = false;
}

int32_t CreateJobReq::getNodeNum() const
{
    return nodeNum_;
}

void CreateJobReq::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool CreateJobReq::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void CreateJobReq::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

std::string CreateJobReq::getNodeType() const
{
    return nodeType_;
}

void CreateJobReq::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool CreateJobReq::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void CreateJobReq::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

Endpoint CreateJobReq::getSourceEndpoint() const
{
    return sourceEndpoint_;
}

void CreateJobReq::setSourceEndpoint(const Endpoint& value)
{
    sourceEndpoint_ = value;
    sourceEndpointIsSet_ = true;
}

bool CreateJobReq::sourceEndpointIsSet() const
{
    return sourceEndpointIsSet_;
}

void CreateJobReq::unsetsourceEndpoint()
{
    sourceEndpointIsSet_ = false;
}

Endpoint CreateJobReq::getTargetEndpoint() const
{
    return targetEndpoint_;
}

void CreateJobReq::setTargetEndpoint(const Endpoint& value)
{
    targetEndpoint_ = value;
    targetEndpointIsSet_ = true;
}

bool CreateJobReq::targetEndpointIsSet() const
{
    return targetEndpointIsSet_;
}

void CreateJobReq::unsettargetEndpoint()
{
    targetEndpointIsSet_ = false;
}

std::vector<ResourceTag>& CreateJobReq::getTags()
{
    return tags_;
}

void CreateJobReq::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateJobReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateJobReq::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateJobReq::getTaskType() const
{
    return taskType_;
}

void CreateJobReq::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool CreateJobReq::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void CreateJobReq::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string CreateJobReq::getCustomizeSutnetId() const
{
    return customizeSutnetId_;
}

void CreateJobReq::setCustomizeSutnetId(const std::string& value)
{
    customizeSutnetId_ = value;
    customizeSutnetIdIsSet_ = true;
}

bool CreateJobReq::customizeSutnetIdIsSet() const
{
    return customizeSutnetIdIsSet_;
}

void CreateJobReq::unsetcustomizeSutnetId()
{
    customizeSutnetIdIsSet_ = false;
}

std::string CreateJobReq::getProductId() const
{
    return productId_;
}

void CreateJobReq::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool CreateJobReq::productIdIsSet() const
{
    return productIdIsSet_;
}

void CreateJobReq::unsetproductId()
{
    productIdIsSet_ = false;
}

std::vector<ResourceTag>& CreateJobReq::getSysTags()
{
    return sysTags_;
}

void CreateJobReq::setSysTags(const std::vector<ResourceTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool CreateJobReq::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void CreateJobReq::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string CreateJobReq::getExpiredDays() const
{
    return expiredDays_;
}

void CreateJobReq::setExpiredDays(const std::string& value)
{
    expiredDays_ = value;
    expiredDaysIsSet_ = true;
}

bool CreateJobReq::expiredDaysIsSet() const
{
    return expiredDaysIsSet_;
}

void CreateJobReq::unsetexpiredDays()
{
    expiredDaysIsSet_ = false;
}

std::string CreateJobReq::getMasterAz() const
{
    return masterAz_;
}

void CreateJobReq::setMasterAz(const std::string& value)
{
    masterAz_ = value;
    masterAzIsSet_ = true;
}

bool CreateJobReq::masterAzIsSet() const
{
    return masterAzIsSet_;
}

void CreateJobReq::unsetmasterAz()
{
    masterAzIsSet_ = false;
}

std::string CreateJobReq::getSlaveAz() const
{
    return slaveAz_;
}

void CreateJobReq::setSlaveAz(const std::string& value)
{
    slaveAz_ = value;
    slaveAzIsSet_ = true;
}

bool CreateJobReq::slaveAzIsSet() const
{
    return slaveAzIsSet_;
}

void CreateJobReq::unsetslaveAz()
{
    slaveAzIsSet_ = false;
}

std::string CreateJobReq::getChargingMode() const
{
    return chargingMode_;
}

void CreateJobReq::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool CreateJobReq::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void CreateJobReq::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

PeriodOrderInfo CreateJobReq::getPeriodOrder() const
{
    return periodOrder_;
}

void CreateJobReq::setPeriodOrder(const PeriodOrderInfo& value)
{
    periodOrder_ = value;
    periodOrderIsSet_ = true;
}

bool CreateJobReq::periodOrderIsSet() const
{
    return periodOrderIsSet_;
}

void CreateJobReq::unsetperiodOrder()
{
    periodOrderIsSet_ = false;
}

std::vector<PublicIpConfig>& CreateJobReq::getPublicIpList()
{
    return publicIpList_;
}

void CreateJobReq::setPublicIpList(const std::vector<PublicIpConfig>& value)
{
    publicIpList_ = value;
    publicIpListIsSet_ = true;
}

bool CreateJobReq::publicIpListIsSet() const
{
    return publicIpListIsSet_;
}

void CreateJobReq::unsetpublicIpList()
{
    publicIpListIsSet_ = false;
}

}
}
}
}
}


