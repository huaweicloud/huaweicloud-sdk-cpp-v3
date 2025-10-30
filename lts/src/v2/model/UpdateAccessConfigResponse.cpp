

#include "huaweicloud/lts/v2/model/UpdateAccessConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateAccessConfigResponse::UpdateAccessConfigResponse()
{
    accessConfigId_ = "";
    accessConfigIdIsSet_ = false;
    accessConfigName_ = "";
    accessConfigNameIsSet_ = false;
    accessConfigType_ = "";
    accessConfigTypeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    accessConfigDetailIsSet_ = false;
    logInfoIsSet_ = false;
    hostGroupInfoIsSet_ = false;
    accessConfigTagIsSet_ = false;
    logSplit_ = false;
    logSplitIsSet_ = false;
    binaryCollect_ = false;
    binaryCollectIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    encodingFormat_ = "";
    encodingFormatIsSet_ = false;
    incrementalCollect_ = false;
    incrementalCollectIsSet_ = false;
    processorType_ = "";
    processorTypeIsSet_ = false;
    demoLog_ = "";
    demoLogIsSet_ = false;
    demoFieldsIsSet_ = false;
    processorsIsSet_ = false;
    logSplitSize_ = 0;
    logSplitSizeIsSet_ = false;
    recursiveDepth_ = 0;
    recursiveDepthIsSet_ = false;
    accessConfigTypeSource_ = "";
    accessConfigTypeSourceIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    componentIdIsSet_ = false;
}

UpdateAccessConfigResponse::~UpdateAccessConfigResponse() = default;

void UpdateAccessConfigResponse::validate()
{
}

web::json::value UpdateAccessConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessConfigIdIsSet_) {
        val[utility::conversions::to_string_t("access_config_id")] = ModelBase::toJson(accessConfigId_);
    }
    if(accessConfigNameIsSet_) {
        val[utility::conversions::to_string_t("access_config_name")] = ModelBase::toJson(accessConfigName_);
    }
    if(accessConfigTypeIsSet_) {
        val[utility::conversions::to_string_t("access_config_type")] = ModelBase::toJson(accessConfigType_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(accessConfigDetailIsSet_) {
        val[utility::conversions::to_string_t("access_config_detail")] = ModelBase::toJson(accessConfigDetail_);
    }
    if(logInfoIsSet_) {
        val[utility::conversions::to_string_t("log_info")] = ModelBase::toJson(logInfo_);
    }
    if(hostGroupInfoIsSet_) {
        val[utility::conversions::to_string_t("host_group_info")] = ModelBase::toJson(hostGroupInfo_);
    }
    if(accessConfigTagIsSet_) {
        val[utility::conversions::to_string_t("access_config_tag")] = ModelBase::toJson(accessConfigTag_);
    }
    if(logSplitIsSet_) {
        val[utility::conversions::to_string_t("log_split")] = ModelBase::toJson(logSplit_);
    }
    if(binaryCollectIsSet_) {
        val[utility::conversions::to_string_t("binary_collect")] = ModelBase::toJson(binaryCollect_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(encodingFormatIsSet_) {
        val[utility::conversions::to_string_t("encoding_format")] = ModelBase::toJson(encodingFormat_);
    }
    if(incrementalCollectIsSet_) {
        val[utility::conversions::to_string_t("incremental_collect")] = ModelBase::toJson(incrementalCollect_);
    }
    if(processorTypeIsSet_) {
        val[utility::conversions::to_string_t("processor_type")] = ModelBase::toJson(processorType_);
    }
    if(demoLogIsSet_) {
        val[utility::conversions::to_string_t("demo_log")] = ModelBase::toJson(demoLog_);
    }
    if(demoFieldsIsSet_) {
        val[utility::conversions::to_string_t("demo_fields")] = ModelBase::toJson(demoFields_);
    }
    if(processorsIsSet_) {
        val[utility::conversions::to_string_t("processors")] = ModelBase::toJson(processors_);
    }
    if(logSplitSizeIsSet_) {
        val[utility::conversions::to_string_t("log_split_size")] = ModelBase::toJson(logSplitSize_);
    }
    if(recursiveDepthIsSet_) {
        val[utility::conversions::to_string_t("recursive_depth")] = ModelBase::toJson(recursiveDepth_);
    }
    if(accessConfigTypeSourceIsSet_) {
        val[utility::conversions::to_string_t("access_config_type_source")] = ModelBase::toJson(accessConfigTypeSource_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(environmentIdIsSet_) {
        val[utility::conversions::to_string_t("environment_id")] = ModelBase::toJson(environmentId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }

    return val;
}
bool UpdateAccessConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_config_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_config_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_detail"));
        if(!fieldValue.is_null())
        {
            AccessConfigDeatilCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_info"));
        if(!fieldValue.is_null())
        {
            AccessConfigQueryLogInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_info"));
        if(!fieldValue.is_null())
        {
            AccessConfigHostGroupIdList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_config_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_tag"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessConfigTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_split"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_split"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogSplit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("binary_collect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binary_collect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinaryCollect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoding_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncodingFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incremental_collect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incremental_collect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrementalCollect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demo_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demo_log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("demo_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("demo_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<DemoFieldAccess> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDemoFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processors"));
        if(!fieldValue.is_null())
        {
            std::vector<Processor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_split_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_split_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogSplitSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recursive_depth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recursive_depth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecursiveDepth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_config_type_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_type_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigTypeSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    return ok;
}


std::string UpdateAccessConfigResponse::getAccessConfigId() const
{
    return accessConfigId_;
}

void UpdateAccessConfigResponse::setAccessConfigId(const std::string& value)
{
    accessConfigId_ = value;
    accessConfigIdIsSet_ = true;
}

bool UpdateAccessConfigResponse::accessConfigIdIsSet() const
{
    return accessConfigIdIsSet_;
}

void UpdateAccessConfigResponse::unsetaccessConfigId()
{
    accessConfigIdIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getAccessConfigName() const
{
    return accessConfigName_;
}

void UpdateAccessConfigResponse::setAccessConfigName(const std::string& value)
{
    accessConfigName_ = value;
    accessConfigNameIsSet_ = true;
}

bool UpdateAccessConfigResponse::accessConfigNameIsSet() const
{
    return accessConfigNameIsSet_;
}

void UpdateAccessConfigResponse::unsetaccessConfigName()
{
    accessConfigNameIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getAccessConfigType() const
{
    return accessConfigType_;
}

void UpdateAccessConfigResponse::setAccessConfigType(const std::string& value)
{
    accessConfigType_ = value;
    accessConfigTypeIsSet_ = true;
}

bool UpdateAccessConfigResponse::accessConfigTypeIsSet() const
{
    return accessConfigTypeIsSet_;
}

void UpdateAccessConfigResponse::unsetaccessConfigType()
{
    accessConfigTypeIsSet_ = false;
}

int64_t UpdateAccessConfigResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateAccessConfigResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateAccessConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateAccessConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

AccessConfigDeatilCreate UpdateAccessConfigResponse::getAccessConfigDetail() const
{
    return accessConfigDetail_;
}

void UpdateAccessConfigResponse::setAccessConfigDetail(const AccessConfigDeatilCreate& value)
{
    accessConfigDetail_ = value;
    accessConfigDetailIsSet_ = true;
}

bool UpdateAccessConfigResponse::accessConfigDetailIsSet() const
{
    return accessConfigDetailIsSet_;
}

void UpdateAccessConfigResponse::unsetaccessConfigDetail()
{
    accessConfigDetailIsSet_ = false;
}

AccessConfigQueryLogInfo UpdateAccessConfigResponse::getLogInfo() const
{
    return logInfo_;
}

void UpdateAccessConfigResponse::setLogInfo(const AccessConfigQueryLogInfo& value)
{
    logInfo_ = value;
    logInfoIsSet_ = true;
}

bool UpdateAccessConfigResponse::logInfoIsSet() const
{
    return logInfoIsSet_;
}

void UpdateAccessConfigResponse::unsetlogInfo()
{
    logInfoIsSet_ = false;
}

AccessConfigHostGroupIdList UpdateAccessConfigResponse::getHostGroupInfo() const
{
    return hostGroupInfo_;
}

void UpdateAccessConfigResponse::setHostGroupInfo(const AccessConfigHostGroupIdList& value)
{
    hostGroupInfo_ = value;
    hostGroupInfoIsSet_ = true;
}

bool UpdateAccessConfigResponse::hostGroupInfoIsSet() const
{
    return hostGroupInfoIsSet_;
}

void UpdateAccessConfigResponse::unsethostGroupInfo()
{
    hostGroupInfoIsSet_ = false;
}

std::vector<AccessConfigTag>& UpdateAccessConfigResponse::getAccessConfigTag()
{
    return accessConfigTag_;
}

void UpdateAccessConfigResponse::setAccessConfigTag(const std::vector<AccessConfigTag>& value)
{
    accessConfigTag_ = value;
    accessConfigTagIsSet_ = true;
}

bool UpdateAccessConfigResponse::accessConfigTagIsSet() const
{
    return accessConfigTagIsSet_;
}

void UpdateAccessConfigResponse::unsetaccessConfigTag()
{
    accessConfigTagIsSet_ = false;
}

bool UpdateAccessConfigResponse::isLogSplit() const
{
    return logSplit_;
}

void UpdateAccessConfigResponse::setLogSplit(bool value)
{
    logSplit_ = value;
    logSplitIsSet_ = true;
}

bool UpdateAccessConfigResponse::logSplitIsSet() const
{
    return logSplitIsSet_;
}

void UpdateAccessConfigResponse::unsetlogSplit()
{
    logSplitIsSet_ = false;
}

bool UpdateAccessConfigResponse::isBinaryCollect() const
{
    return binaryCollect_;
}

void UpdateAccessConfigResponse::setBinaryCollect(bool value)
{
    binaryCollect_ = value;
    binaryCollectIsSet_ = true;
}

bool UpdateAccessConfigResponse::binaryCollectIsSet() const
{
    return binaryCollectIsSet_;
}

void UpdateAccessConfigResponse::unsetbinaryCollect()
{
    binaryCollectIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getClusterId() const
{
    return clusterId_;
}

void UpdateAccessConfigResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateAccessConfigResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateAccessConfigResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getEncodingFormat() const
{
    return encodingFormat_;
}

void UpdateAccessConfigResponse::setEncodingFormat(const std::string& value)
{
    encodingFormat_ = value;
    encodingFormatIsSet_ = true;
}

bool UpdateAccessConfigResponse::encodingFormatIsSet() const
{
    return encodingFormatIsSet_;
}

void UpdateAccessConfigResponse::unsetencodingFormat()
{
    encodingFormatIsSet_ = false;
}

bool UpdateAccessConfigResponse::isIncrementalCollect() const
{
    return incrementalCollect_;
}

void UpdateAccessConfigResponse::setIncrementalCollect(bool value)
{
    incrementalCollect_ = value;
    incrementalCollectIsSet_ = true;
}

bool UpdateAccessConfigResponse::incrementalCollectIsSet() const
{
    return incrementalCollectIsSet_;
}

void UpdateAccessConfigResponse::unsetincrementalCollect()
{
    incrementalCollectIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getProcessorType() const
{
    return processorType_;
}

void UpdateAccessConfigResponse::setProcessorType(const std::string& value)
{
    processorType_ = value;
    processorTypeIsSet_ = true;
}

bool UpdateAccessConfigResponse::processorTypeIsSet() const
{
    return processorTypeIsSet_;
}

void UpdateAccessConfigResponse::unsetprocessorType()
{
    processorTypeIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getDemoLog() const
{
    return demoLog_;
}

void UpdateAccessConfigResponse::setDemoLog(const std::string& value)
{
    demoLog_ = value;
    demoLogIsSet_ = true;
}

bool UpdateAccessConfigResponse::demoLogIsSet() const
{
    return demoLogIsSet_;
}

void UpdateAccessConfigResponse::unsetdemoLog()
{
    demoLogIsSet_ = false;
}

std::vector<DemoFieldAccess>& UpdateAccessConfigResponse::getDemoFields()
{
    return demoFields_;
}

void UpdateAccessConfigResponse::setDemoFields(const std::vector<DemoFieldAccess>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool UpdateAccessConfigResponse::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void UpdateAccessConfigResponse::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<Processor>& UpdateAccessConfigResponse::getProcessors()
{
    return processors_;
}

void UpdateAccessConfigResponse::setProcessors(const std::vector<Processor>& value)
{
    processors_ = value;
    processorsIsSet_ = true;
}

bool UpdateAccessConfigResponse::processorsIsSet() const
{
    return processorsIsSet_;
}

void UpdateAccessConfigResponse::unsetprocessors()
{
    processorsIsSet_ = false;
}

int32_t UpdateAccessConfigResponse::getLogSplitSize() const
{
    return logSplitSize_;
}

void UpdateAccessConfigResponse::setLogSplitSize(int32_t value)
{
    logSplitSize_ = value;
    logSplitSizeIsSet_ = true;
}

bool UpdateAccessConfigResponse::logSplitSizeIsSet() const
{
    return logSplitSizeIsSet_;
}

void UpdateAccessConfigResponse::unsetlogSplitSize()
{
    logSplitSizeIsSet_ = false;
}

int32_t UpdateAccessConfigResponse::getRecursiveDepth() const
{
    return recursiveDepth_;
}

void UpdateAccessConfigResponse::setRecursiveDepth(int32_t value)
{
    recursiveDepth_ = value;
    recursiveDepthIsSet_ = true;
}

bool UpdateAccessConfigResponse::recursiveDepthIsSet() const
{
    return recursiveDepthIsSet_;
}

void UpdateAccessConfigResponse::unsetrecursiveDepth()
{
    recursiveDepthIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getAccessConfigTypeSource() const
{
    return accessConfigTypeSource_;
}

void UpdateAccessConfigResponse::setAccessConfigTypeSource(const std::string& value)
{
    accessConfigTypeSource_ = value;
    accessConfigTypeSourceIsSet_ = true;
}

bool UpdateAccessConfigResponse::accessConfigTypeSourceIsSet() const
{
    return accessConfigTypeSourceIsSet_;
}

void UpdateAccessConfigResponse::unsetaccessConfigTypeSource()
{
    accessConfigTypeSourceIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getApplicationId() const
{
    return applicationId_;
}

void UpdateAccessConfigResponse::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool UpdateAccessConfigResponse::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void UpdateAccessConfigResponse::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string UpdateAccessConfigResponse::getEnvironmentId() const
{
    return environmentId_;
}

void UpdateAccessConfigResponse::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool UpdateAccessConfigResponse::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void UpdateAccessConfigResponse::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

std::vector<std::string>& UpdateAccessConfigResponse::getComponentId()
{
    return componentId_;
}

void UpdateAccessConfigResponse::setComponentId(const std::vector<std::string>& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool UpdateAccessConfigResponse::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void UpdateAccessConfigResponse::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

}
}
}
}
}


