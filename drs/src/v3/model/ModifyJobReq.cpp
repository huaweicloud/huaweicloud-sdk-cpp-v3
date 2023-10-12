

#include "huaweicloud/drs/v3/model/ModifyJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ModifyJobReq::ModifyJobReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    alarmNotifyIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    sourceEndpointIsSet_ = false;
    targetEndpointIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    storeDbInfo_ = false;
    storeDbInfoIsSet_ = false;
    isRecreate_ = false;
    isRecreateIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    isTargetReadonly_ = false;
    isTargetReadonlyIsSet_ = false;
    replaceDefiner_ = false;
    replaceDefinerIsSet_ = false;
    tagsIsSet_ = false;
    dbUseType_ = "";
    dbUseTypeIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
}

ModifyJobReq::~ModifyJobReq() = default;

void ModifyJobReq::validate()
{
}

web::json::value ModifyJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(alarmNotifyIsSet_) {
        val[utility::conversions::to_string_t("alarm_notify")] = ModelBase::toJson(alarmNotify_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(sourceEndpointIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint")] = ModelBase::toJson(sourceEndpoint_);
    }
    if(targetEndpointIsSet_) {
        val[utility::conversions::to_string_t("target_endpoint")] = ModelBase::toJson(targetEndpoint_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(storeDbInfoIsSet_) {
        val[utility::conversions::to_string_t("store_db_info")] = ModelBase::toJson(storeDbInfo_);
    }
    if(isRecreateIsSet_) {
        val[utility::conversions::to_string_t("is_recreate")] = ModelBase::toJson(isRecreate_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(isTargetReadonlyIsSet_) {
        val[utility::conversions::to_string_t("is_target_readonly")] = ModelBase::toJson(isTargetReadonly_);
    }
    if(replaceDefinerIsSet_) {
        val[utility::conversions::to_string_t("replace_definer")] = ModelBase::toJson(replaceDefiner_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(dbUseTypeIsSet_) {
        val[utility::conversions::to_string_t("db_use_type")] = ModelBase::toJson(dbUseType_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }

    return val;
}
bool ModifyJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_notify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_notify"));
        if(!fieldValue.is_null())
        {
            AlarmNotifyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmNotify(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("store_db_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("store_db_info"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoreDbInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_recreate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_recreate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRecreate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_target_readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_target_readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTargetReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replace_definer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replace_definer"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplaceDefiner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_use_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_use_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbUseType(refVal);
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
    return ok;
}


std::string ModifyJobReq::getJobId() const
{
    return jobId_;
}

void ModifyJobReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyJobReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyJobReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ModifyJobReq::getDescription() const
{
    return description_;
}

void ModifyJobReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModifyJobReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModifyJobReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ModifyJobReq::getName() const
{
    return name_;
}

void ModifyJobReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifyJobReq::nameIsSet() const
{
    return nameIsSet_;
}

void ModifyJobReq::unsetname()
{
    nameIsSet_ = false;
}

AlarmNotifyInfo ModifyJobReq::getAlarmNotify() const
{
    return alarmNotify_;
}

void ModifyJobReq::setAlarmNotify(const AlarmNotifyInfo& value)
{
    alarmNotify_ = value;
    alarmNotifyIsSet_ = true;
}

bool ModifyJobReq::alarmNotifyIsSet() const
{
    return alarmNotifyIsSet_;
}

void ModifyJobReq::unsetalarmNotify()
{
    alarmNotifyIsSet_ = false;
}

std::string ModifyJobReq::getTaskType() const
{
    return taskType_;
}

void ModifyJobReq::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ModifyJobReq::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ModifyJobReq::unsettaskType()
{
    taskTypeIsSet_ = false;
}

Endpoint ModifyJobReq::getSourceEndpoint() const
{
    return sourceEndpoint_;
}

void ModifyJobReq::setSourceEndpoint(const Endpoint& value)
{
    sourceEndpoint_ = value;
    sourceEndpointIsSet_ = true;
}

bool ModifyJobReq::sourceEndpointIsSet() const
{
    return sourceEndpointIsSet_;
}

void ModifyJobReq::unsetsourceEndpoint()
{
    sourceEndpointIsSet_ = false;
}

Endpoint ModifyJobReq::getTargetEndpoint() const
{
    return targetEndpoint_;
}

void ModifyJobReq::setTargetEndpoint(const Endpoint& value)
{
    targetEndpoint_ = value;
    targetEndpointIsSet_ = true;
}

bool ModifyJobReq::targetEndpointIsSet() const
{
    return targetEndpointIsSet_;
}

void ModifyJobReq::unsettargetEndpoint()
{
    targetEndpointIsSet_ = false;
}

std::string ModifyJobReq::getNodeType() const
{
    return nodeType_;
}

void ModifyJobReq::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool ModifyJobReq::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void ModifyJobReq::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::string ModifyJobReq::getEngineType() const
{
    return engineType_;
}

void ModifyJobReq::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool ModifyJobReq::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void ModifyJobReq::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string ModifyJobReq::getNetType() const
{
    return netType_;
}

void ModifyJobReq::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool ModifyJobReq::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void ModifyJobReq::unsetnetType()
{
    netTypeIsSet_ = false;
}

bool ModifyJobReq::isStoreDbInfo() const
{
    return storeDbInfo_;
}

void ModifyJobReq::setStoreDbInfo(bool value)
{
    storeDbInfo_ = value;
    storeDbInfoIsSet_ = true;
}

bool ModifyJobReq::storeDbInfoIsSet() const
{
    return storeDbInfoIsSet_;
}

void ModifyJobReq::unsetstoreDbInfo()
{
    storeDbInfoIsSet_ = false;
}

bool ModifyJobReq::isIsRecreate() const
{
    return isRecreate_;
}

void ModifyJobReq::setIsRecreate(bool value)
{
    isRecreate_ = value;
    isRecreateIsSet_ = true;
}

bool ModifyJobReq::isRecreateIsSet() const
{
    return isRecreateIsSet_;
}

void ModifyJobReq::unsetisRecreate()
{
    isRecreateIsSet_ = false;
}

std::string ModifyJobReq::getJobDirection() const
{
    return jobDirection_;
}

void ModifyJobReq::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool ModifyJobReq::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void ModifyJobReq::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

bool ModifyJobReq::isIsTargetReadonly() const
{
    return isTargetReadonly_;
}

void ModifyJobReq::setIsTargetReadonly(bool value)
{
    isTargetReadonly_ = value;
    isTargetReadonlyIsSet_ = true;
}

bool ModifyJobReq::isTargetReadonlyIsSet() const
{
    return isTargetReadonlyIsSet_;
}

void ModifyJobReq::unsetisTargetReadonly()
{
    isTargetReadonlyIsSet_ = false;
}

bool ModifyJobReq::isReplaceDefiner() const
{
    return replaceDefiner_;
}

void ModifyJobReq::setReplaceDefiner(bool value)
{
    replaceDefiner_ = value;
    replaceDefinerIsSet_ = true;
}

bool ModifyJobReq::replaceDefinerIsSet() const
{
    return replaceDefinerIsSet_;
}

void ModifyJobReq::unsetreplaceDefiner()
{
    replaceDefinerIsSet_ = false;
}

std::vector<ResourceTag>& ModifyJobReq::getTags()
{
    return tags_;
}

void ModifyJobReq::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ModifyJobReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void ModifyJobReq::unsettags()
{
    tagsIsSet_ = false;
}

std::string ModifyJobReq::getDbUseType() const
{
    return dbUseType_;
}

void ModifyJobReq::setDbUseType(const std::string& value)
{
    dbUseType_ = value;
    dbUseTypeIsSet_ = true;
}

bool ModifyJobReq::dbUseTypeIsSet() const
{
    return dbUseTypeIsSet_;
}

void ModifyJobReq::unsetdbUseType()
{
    dbUseTypeIsSet_ = false;
}

std::string ModifyJobReq::getProductId() const
{
    return productId_;
}

void ModifyJobReq::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ModifyJobReq::productIdIsSet() const
{
    return productIdIsSet_;
}

void ModifyJobReq::unsetproductId()
{
    productIdIsSet_ = false;
}

}
}
}
}
}


