

#include "huaweicloud/lts/v2/model/CreateAccessConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateAccessConfigResponse::CreateAccessConfigResponse()
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

CreateAccessConfigResponse::~CreateAccessConfigResponse() = default;

void CreateAccessConfigResponse::validate()
{
}

web::json::value CreateAccessConfigResponse::toJson() const
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
bool CreateAccessConfigResponse::fromJson(const web::json::value& val)
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


std::string CreateAccessConfigResponse::getAccessConfigId() const
{
    return accessConfigId_;
}

void CreateAccessConfigResponse::setAccessConfigId(const std::string& value)
{
    accessConfigId_ = value;
    accessConfigIdIsSet_ = true;
}

bool CreateAccessConfigResponse::accessConfigIdIsSet() const
{
    return accessConfigIdIsSet_;
}

void CreateAccessConfigResponse::unsetaccessConfigId()
{
    accessConfigIdIsSet_ = false;
}

std::string CreateAccessConfigResponse::getAccessConfigName() const
{
    return accessConfigName_;
}

void CreateAccessConfigResponse::setAccessConfigName(const std::string& value)
{
    accessConfigName_ = value;
    accessConfigNameIsSet_ = true;
}

bool CreateAccessConfigResponse::accessConfigNameIsSet() const
{
    return accessConfigNameIsSet_;
}

void CreateAccessConfigResponse::unsetaccessConfigName()
{
    accessConfigNameIsSet_ = false;
}

std::string CreateAccessConfigResponse::getAccessConfigType() const
{
    return accessConfigType_;
}

void CreateAccessConfigResponse::setAccessConfigType(const std::string& value)
{
    accessConfigType_ = value;
    accessConfigTypeIsSet_ = true;
}

bool CreateAccessConfigResponse::accessConfigTypeIsSet() const
{
    return accessConfigTypeIsSet_;
}

void CreateAccessConfigResponse::unsetaccessConfigType()
{
    accessConfigTypeIsSet_ = false;
}

int64_t CreateAccessConfigResponse::getCreateTime() const
{
    return createTime_;
}

void CreateAccessConfigResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateAccessConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateAccessConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

AccessConfigDeatilCreate CreateAccessConfigResponse::getAccessConfigDetail() const
{
    return accessConfigDetail_;
}

void CreateAccessConfigResponse::setAccessConfigDetail(const AccessConfigDeatilCreate& value)
{
    accessConfigDetail_ = value;
    accessConfigDetailIsSet_ = true;
}

bool CreateAccessConfigResponse::accessConfigDetailIsSet() const
{
    return accessConfigDetailIsSet_;
}

void CreateAccessConfigResponse::unsetaccessConfigDetail()
{
    accessConfigDetailIsSet_ = false;
}

AccessConfigQueryLogInfo CreateAccessConfigResponse::getLogInfo() const
{
    return logInfo_;
}

void CreateAccessConfigResponse::setLogInfo(const AccessConfigQueryLogInfo& value)
{
    logInfo_ = value;
    logInfoIsSet_ = true;
}

bool CreateAccessConfigResponse::logInfoIsSet() const
{
    return logInfoIsSet_;
}

void CreateAccessConfigResponse::unsetlogInfo()
{
    logInfoIsSet_ = false;
}

AccessConfigHostGroupIdList CreateAccessConfigResponse::getHostGroupInfo() const
{
    return hostGroupInfo_;
}

void CreateAccessConfigResponse::setHostGroupInfo(const AccessConfigHostGroupIdList& value)
{
    hostGroupInfo_ = value;
    hostGroupInfoIsSet_ = true;
}

bool CreateAccessConfigResponse::hostGroupInfoIsSet() const
{
    return hostGroupInfoIsSet_;
}

void CreateAccessConfigResponse::unsethostGroupInfo()
{
    hostGroupInfoIsSet_ = false;
}

std::vector<AccessConfigTag>& CreateAccessConfigResponse::getAccessConfigTag()
{
    return accessConfigTag_;
}

void CreateAccessConfigResponse::setAccessConfigTag(const std::vector<AccessConfigTag>& value)
{
    accessConfigTag_ = value;
    accessConfigTagIsSet_ = true;
}

bool CreateAccessConfigResponse::accessConfigTagIsSet() const
{
    return accessConfigTagIsSet_;
}

void CreateAccessConfigResponse::unsetaccessConfigTag()
{
    accessConfigTagIsSet_ = false;
}

bool CreateAccessConfigResponse::isLogSplit() const
{
    return logSplit_;
}

void CreateAccessConfigResponse::setLogSplit(bool value)
{
    logSplit_ = value;
    logSplitIsSet_ = true;
}

bool CreateAccessConfigResponse::logSplitIsSet() const
{
    return logSplitIsSet_;
}

void CreateAccessConfigResponse::unsetlogSplit()
{
    logSplitIsSet_ = false;
}

bool CreateAccessConfigResponse::isBinaryCollect() const
{
    return binaryCollect_;
}

void CreateAccessConfigResponse::setBinaryCollect(bool value)
{
    binaryCollect_ = value;
    binaryCollectIsSet_ = true;
}

bool CreateAccessConfigResponse::binaryCollectIsSet() const
{
    return binaryCollectIsSet_;
}

void CreateAccessConfigResponse::unsetbinaryCollect()
{
    binaryCollectIsSet_ = false;
}

std::string CreateAccessConfigResponse::getClusterId() const
{
    return clusterId_;
}

void CreateAccessConfigResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAccessConfigResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAccessConfigResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreateAccessConfigResponse::getEncodingFormat() const
{
    return encodingFormat_;
}

void CreateAccessConfigResponse::setEncodingFormat(const std::string& value)
{
    encodingFormat_ = value;
    encodingFormatIsSet_ = true;
}

bool CreateAccessConfigResponse::encodingFormatIsSet() const
{
    return encodingFormatIsSet_;
}

void CreateAccessConfigResponse::unsetencodingFormat()
{
    encodingFormatIsSet_ = false;
}

bool CreateAccessConfigResponse::isIncrementalCollect() const
{
    return incrementalCollect_;
}

void CreateAccessConfigResponse::setIncrementalCollect(bool value)
{
    incrementalCollect_ = value;
    incrementalCollectIsSet_ = true;
}

bool CreateAccessConfigResponse::incrementalCollectIsSet() const
{
    return incrementalCollectIsSet_;
}

void CreateAccessConfigResponse::unsetincrementalCollect()
{
    incrementalCollectIsSet_ = false;
}

std::string CreateAccessConfigResponse::getProcessorType() const
{
    return processorType_;
}

void CreateAccessConfigResponse::setProcessorType(const std::string& value)
{
    processorType_ = value;
    processorTypeIsSet_ = true;
}

bool CreateAccessConfigResponse::processorTypeIsSet() const
{
    return processorTypeIsSet_;
}

void CreateAccessConfigResponse::unsetprocessorType()
{
    processorTypeIsSet_ = false;
}

std::string CreateAccessConfigResponse::getDemoLog() const
{
    return demoLog_;
}

void CreateAccessConfigResponse::setDemoLog(const std::string& value)
{
    demoLog_ = value;
    demoLogIsSet_ = true;
}

bool CreateAccessConfigResponse::demoLogIsSet() const
{
    return demoLogIsSet_;
}

void CreateAccessConfigResponse::unsetdemoLog()
{
    demoLogIsSet_ = false;
}

std::vector<DemoFieldAccess>& CreateAccessConfigResponse::getDemoFields()
{
    return demoFields_;
}

void CreateAccessConfigResponse::setDemoFields(const std::vector<DemoFieldAccess>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool CreateAccessConfigResponse::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void CreateAccessConfigResponse::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<Processor>& CreateAccessConfigResponse::getProcessors()
{
    return processors_;
}

void CreateAccessConfigResponse::setProcessors(const std::vector<Processor>& value)
{
    processors_ = value;
    processorsIsSet_ = true;
}

bool CreateAccessConfigResponse::processorsIsSet() const
{
    return processorsIsSet_;
}

void CreateAccessConfigResponse::unsetprocessors()
{
    processorsIsSet_ = false;
}

int32_t CreateAccessConfigResponse::getLogSplitSize() const
{
    return logSplitSize_;
}

void CreateAccessConfigResponse::setLogSplitSize(int32_t value)
{
    logSplitSize_ = value;
    logSplitSizeIsSet_ = true;
}

bool CreateAccessConfigResponse::logSplitSizeIsSet() const
{
    return logSplitSizeIsSet_;
}

void CreateAccessConfigResponse::unsetlogSplitSize()
{
    logSplitSizeIsSet_ = false;
}

int32_t CreateAccessConfigResponse::getRecursiveDepth() const
{
    return recursiveDepth_;
}

void CreateAccessConfigResponse::setRecursiveDepth(int32_t value)
{
    recursiveDepth_ = value;
    recursiveDepthIsSet_ = true;
}

bool CreateAccessConfigResponse::recursiveDepthIsSet() const
{
    return recursiveDepthIsSet_;
}

void CreateAccessConfigResponse::unsetrecursiveDepth()
{
    recursiveDepthIsSet_ = false;
}

std::string CreateAccessConfigResponse::getAccessConfigTypeSource() const
{
    return accessConfigTypeSource_;
}

void CreateAccessConfigResponse::setAccessConfigTypeSource(const std::string& value)
{
    accessConfigTypeSource_ = value;
    accessConfigTypeSourceIsSet_ = true;
}

bool CreateAccessConfigResponse::accessConfigTypeSourceIsSet() const
{
    return accessConfigTypeSourceIsSet_;
}

void CreateAccessConfigResponse::unsetaccessConfigTypeSource()
{
    accessConfigTypeSourceIsSet_ = false;
}

std::string CreateAccessConfigResponse::getApplicationId() const
{
    return applicationId_;
}

void CreateAccessConfigResponse::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool CreateAccessConfigResponse::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void CreateAccessConfigResponse::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string CreateAccessConfigResponse::getEnvironmentId() const
{
    return environmentId_;
}

void CreateAccessConfigResponse::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool CreateAccessConfigResponse::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void CreateAccessConfigResponse::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

std::vector<std::string>& CreateAccessConfigResponse::getComponentId()
{
    return componentId_;
}

void CreateAccessConfigResponse::setComponentId(const std::vector<std::string>& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool CreateAccessConfigResponse::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void CreateAccessConfigResponse::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

}
}
}
}
}


