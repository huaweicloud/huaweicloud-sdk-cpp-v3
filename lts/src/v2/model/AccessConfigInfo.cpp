

#include "huaweicloud/lts/v2/model/AccessConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigInfo::AccessConfigInfo()
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
    applicationId_ = "";
    applicationIdIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    componentIdIsSet_ = false;
}

AccessConfigInfo::~AccessConfigInfo() = default;

void AccessConfigInfo::validate()
{
}

web::json::value AccessConfigInfo::toJson() const
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
bool AccessConfigInfo::fromJson(const web::json::value& val)
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


std::string AccessConfigInfo::getAccessConfigId() const
{
    return accessConfigId_;
}

void AccessConfigInfo::setAccessConfigId(const std::string& value)
{
    accessConfigId_ = value;
    accessConfigIdIsSet_ = true;
}

bool AccessConfigInfo::accessConfigIdIsSet() const
{
    return accessConfigIdIsSet_;
}

void AccessConfigInfo::unsetaccessConfigId()
{
    accessConfigIdIsSet_ = false;
}

std::string AccessConfigInfo::getAccessConfigName() const
{
    return accessConfigName_;
}

void AccessConfigInfo::setAccessConfigName(const std::string& value)
{
    accessConfigName_ = value;
    accessConfigNameIsSet_ = true;
}

bool AccessConfigInfo::accessConfigNameIsSet() const
{
    return accessConfigNameIsSet_;
}

void AccessConfigInfo::unsetaccessConfigName()
{
    accessConfigNameIsSet_ = false;
}

std::string AccessConfigInfo::getAccessConfigType() const
{
    return accessConfigType_;
}

void AccessConfigInfo::setAccessConfigType(const std::string& value)
{
    accessConfigType_ = value;
    accessConfigTypeIsSet_ = true;
}

bool AccessConfigInfo::accessConfigTypeIsSet() const
{
    return accessConfigTypeIsSet_;
}

void AccessConfigInfo::unsetaccessConfigType()
{
    accessConfigTypeIsSet_ = false;
}

int64_t AccessConfigInfo::getCreateTime() const
{
    return createTime_;
}

void AccessConfigInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AccessConfigInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AccessConfigInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

AccessConfigDeatilCreate AccessConfigInfo::getAccessConfigDetail() const
{
    return accessConfigDetail_;
}

void AccessConfigInfo::setAccessConfigDetail(const AccessConfigDeatilCreate& value)
{
    accessConfigDetail_ = value;
    accessConfigDetailIsSet_ = true;
}

bool AccessConfigInfo::accessConfigDetailIsSet() const
{
    return accessConfigDetailIsSet_;
}

void AccessConfigInfo::unsetaccessConfigDetail()
{
    accessConfigDetailIsSet_ = false;
}

AccessConfigQueryLogInfo AccessConfigInfo::getLogInfo() const
{
    return logInfo_;
}

void AccessConfigInfo::setLogInfo(const AccessConfigQueryLogInfo& value)
{
    logInfo_ = value;
    logInfoIsSet_ = true;
}

bool AccessConfigInfo::logInfoIsSet() const
{
    return logInfoIsSet_;
}

void AccessConfigInfo::unsetlogInfo()
{
    logInfoIsSet_ = false;
}

AccessConfigHostGroupIdList AccessConfigInfo::getHostGroupInfo() const
{
    return hostGroupInfo_;
}

void AccessConfigInfo::setHostGroupInfo(const AccessConfigHostGroupIdList& value)
{
    hostGroupInfo_ = value;
    hostGroupInfoIsSet_ = true;
}

bool AccessConfigInfo::hostGroupInfoIsSet() const
{
    return hostGroupInfoIsSet_;
}

void AccessConfigInfo::unsethostGroupInfo()
{
    hostGroupInfoIsSet_ = false;
}

std::vector<AccessConfigTag>& AccessConfigInfo::getAccessConfigTag()
{
    return accessConfigTag_;
}

void AccessConfigInfo::setAccessConfigTag(const std::vector<AccessConfigTag>& value)
{
    accessConfigTag_ = value;
    accessConfigTagIsSet_ = true;
}

bool AccessConfigInfo::accessConfigTagIsSet() const
{
    return accessConfigTagIsSet_;
}

void AccessConfigInfo::unsetaccessConfigTag()
{
    accessConfigTagIsSet_ = false;
}

bool AccessConfigInfo::isLogSplit() const
{
    return logSplit_;
}

void AccessConfigInfo::setLogSplit(bool value)
{
    logSplit_ = value;
    logSplitIsSet_ = true;
}

bool AccessConfigInfo::logSplitIsSet() const
{
    return logSplitIsSet_;
}

void AccessConfigInfo::unsetlogSplit()
{
    logSplitIsSet_ = false;
}

bool AccessConfigInfo::isBinaryCollect() const
{
    return binaryCollect_;
}

void AccessConfigInfo::setBinaryCollect(bool value)
{
    binaryCollect_ = value;
    binaryCollectIsSet_ = true;
}

bool AccessConfigInfo::binaryCollectIsSet() const
{
    return binaryCollectIsSet_;
}

void AccessConfigInfo::unsetbinaryCollect()
{
    binaryCollectIsSet_ = false;
}

std::string AccessConfigInfo::getClusterId() const
{
    return clusterId_;
}

void AccessConfigInfo::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AccessConfigInfo::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AccessConfigInfo::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string AccessConfigInfo::getEncodingFormat() const
{
    return encodingFormat_;
}

void AccessConfigInfo::setEncodingFormat(const std::string& value)
{
    encodingFormat_ = value;
    encodingFormatIsSet_ = true;
}

bool AccessConfigInfo::encodingFormatIsSet() const
{
    return encodingFormatIsSet_;
}

void AccessConfigInfo::unsetencodingFormat()
{
    encodingFormatIsSet_ = false;
}

bool AccessConfigInfo::isIncrementalCollect() const
{
    return incrementalCollect_;
}

void AccessConfigInfo::setIncrementalCollect(bool value)
{
    incrementalCollect_ = value;
    incrementalCollectIsSet_ = true;
}

bool AccessConfigInfo::incrementalCollectIsSet() const
{
    return incrementalCollectIsSet_;
}

void AccessConfigInfo::unsetincrementalCollect()
{
    incrementalCollectIsSet_ = false;
}

std::string AccessConfigInfo::getProcessorType() const
{
    return processorType_;
}

void AccessConfigInfo::setProcessorType(const std::string& value)
{
    processorType_ = value;
    processorTypeIsSet_ = true;
}

bool AccessConfigInfo::processorTypeIsSet() const
{
    return processorTypeIsSet_;
}

void AccessConfigInfo::unsetprocessorType()
{
    processorTypeIsSet_ = false;
}

std::string AccessConfigInfo::getDemoLog() const
{
    return demoLog_;
}

void AccessConfigInfo::setDemoLog(const std::string& value)
{
    demoLog_ = value;
    demoLogIsSet_ = true;
}

bool AccessConfigInfo::demoLogIsSet() const
{
    return demoLogIsSet_;
}

void AccessConfigInfo::unsetdemoLog()
{
    demoLogIsSet_ = false;
}

std::vector<DemoFieldAccess>& AccessConfigInfo::getDemoFields()
{
    return demoFields_;
}

void AccessConfigInfo::setDemoFields(const std::vector<DemoFieldAccess>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool AccessConfigInfo::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void AccessConfigInfo::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<Processor>& AccessConfigInfo::getProcessors()
{
    return processors_;
}

void AccessConfigInfo::setProcessors(const std::vector<Processor>& value)
{
    processors_ = value;
    processorsIsSet_ = true;
}

bool AccessConfigInfo::processorsIsSet() const
{
    return processorsIsSet_;
}

void AccessConfigInfo::unsetprocessors()
{
    processorsIsSet_ = false;
}

std::string AccessConfigInfo::getApplicationId() const
{
    return applicationId_;
}

void AccessConfigInfo::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool AccessConfigInfo::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void AccessConfigInfo::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string AccessConfigInfo::getEnvironmentId() const
{
    return environmentId_;
}

void AccessConfigInfo::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool AccessConfigInfo::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void AccessConfigInfo::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

std::vector<std::string>& AccessConfigInfo::getComponentId()
{
    return componentId_;
}

void AccessConfigInfo::setComponentId(const std::vector<std::string>& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool AccessConfigInfo::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void AccessConfigInfo::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

}
}
}
}
}


