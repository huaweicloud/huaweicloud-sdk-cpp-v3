

#include "huaweicloud/lts/v2/model/CreateAccessConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateAccessConfigRequestBody::CreateAccessConfigRequestBody()
{
    accessConfigName_ = "";
    accessConfigNameIsSet_ = false;
    accessConfigType_ = "";
    accessConfigTypeIsSet_ = false;
    accessConfigDetailIsSet_ = false;
    logInfoIsSet_ = false;
    hostGroupInfoIsSet_ = false;
    accessConfigTagIsSet_ = false;
    binaryCollect_ = false;
    binaryCollectIsSet_ = false;
    logSplit_ = false;
    logSplitIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    incrementalCollect_ = false;
    incrementalCollectIsSet_ = false;
    encodingFormat_ = "";
    encodingFormatIsSet_ = false;
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
    accessConfigTypeSource_ = "";
    accessConfigTypeSourceIsSet_ = false;
}

CreateAccessConfigRequestBody::~CreateAccessConfigRequestBody() = default;

void CreateAccessConfigRequestBody::validate()
{
}

web::json::value CreateAccessConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessConfigNameIsSet_) {
        val[utility::conversions::to_string_t("access_config_name")] = ModelBase::toJson(accessConfigName_);
    }
    if(accessConfigTypeIsSet_) {
        val[utility::conversions::to_string_t("access_config_type")] = ModelBase::toJson(accessConfigType_);
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
    if(binaryCollectIsSet_) {
        val[utility::conversions::to_string_t("binary_collect")] = ModelBase::toJson(binaryCollect_);
    }
    if(logSplitIsSet_) {
        val[utility::conversions::to_string_t("log_split")] = ModelBase::toJson(logSplit_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(incrementalCollectIsSet_) {
        val[utility::conversions::to_string_t("incremental_collect")] = ModelBase::toJson(incrementalCollect_);
    }
    if(encodingFormatIsSet_) {
        val[utility::conversions::to_string_t("encoding_format")] = ModelBase::toJson(encodingFormat_);
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
    if(accessConfigTypeSourceIsSet_) {
        val[utility::conversions::to_string_t("access_config_type_source")] = ModelBase::toJson(accessConfigTypeSource_);
    }

    return val;
}
bool CreateAccessConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            AccessConfigBaseLogInfoCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_info"));
        if(!fieldValue.is_null())
        {
            AccessConfigHostGroupIdListCreate refVal;
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
    if(val.has_field(utility::conversions::to_string_t("binary_collect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binary_collect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinaryCollect(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("encoding_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoding_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncodingFormat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("access_config_type_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_type_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigTypeSource(refVal);
        }
    }
    return ok;
}


std::string CreateAccessConfigRequestBody::getAccessConfigName() const
{
    return accessConfigName_;
}

void CreateAccessConfigRequestBody::setAccessConfigName(const std::string& value)
{
    accessConfigName_ = value;
    accessConfigNameIsSet_ = true;
}

bool CreateAccessConfigRequestBody::accessConfigNameIsSet() const
{
    return accessConfigNameIsSet_;
}

void CreateAccessConfigRequestBody::unsetaccessConfigName()
{
    accessConfigNameIsSet_ = false;
}

std::string CreateAccessConfigRequestBody::getAccessConfigType() const
{
    return accessConfigType_;
}

void CreateAccessConfigRequestBody::setAccessConfigType(const std::string& value)
{
    accessConfigType_ = value;
    accessConfigTypeIsSet_ = true;
}

bool CreateAccessConfigRequestBody::accessConfigTypeIsSet() const
{
    return accessConfigTypeIsSet_;
}

void CreateAccessConfigRequestBody::unsetaccessConfigType()
{
    accessConfigTypeIsSet_ = false;
}

AccessConfigDeatilCreate CreateAccessConfigRequestBody::getAccessConfigDetail() const
{
    return accessConfigDetail_;
}

void CreateAccessConfigRequestBody::setAccessConfigDetail(const AccessConfigDeatilCreate& value)
{
    accessConfigDetail_ = value;
    accessConfigDetailIsSet_ = true;
}

bool CreateAccessConfigRequestBody::accessConfigDetailIsSet() const
{
    return accessConfigDetailIsSet_;
}

void CreateAccessConfigRequestBody::unsetaccessConfigDetail()
{
    accessConfigDetailIsSet_ = false;
}

AccessConfigBaseLogInfoCreate CreateAccessConfigRequestBody::getLogInfo() const
{
    return logInfo_;
}

void CreateAccessConfigRequestBody::setLogInfo(const AccessConfigBaseLogInfoCreate& value)
{
    logInfo_ = value;
    logInfoIsSet_ = true;
}

bool CreateAccessConfigRequestBody::logInfoIsSet() const
{
    return logInfoIsSet_;
}

void CreateAccessConfigRequestBody::unsetlogInfo()
{
    logInfoIsSet_ = false;
}

AccessConfigHostGroupIdListCreate CreateAccessConfigRequestBody::getHostGroupInfo() const
{
    return hostGroupInfo_;
}

void CreateAccessConfigRequestBody::setHostGroupInfo(const AccessConfigHostGroupIdListCreate& value)
{
    hostGroupInfo_ = value;
    hostGroupInfoIsSet_ = true;
}

bool CreateAccessConfigRequestBody::hostGroupInfoIsSet() const
{
    return hostGroupInfoIsSet_;
}

void CreateAccessConfigRequestBody::unsethostGroupInfo()
{
    hostGroupInfoIsSet_ = false;
}

std::vector<AccessConfigTag>& CreateAccessConfigRequestBody::getAccessConfigTag()
{
    return accessConfigTag_;
}

void CreateAccessConfigRequestBody::setAccessConfigTag(const std::vector<AccessConfigTag>& value)
{
    accessConfigTag_ = value;
    accessConfigTagIsSet_ = true;
}

bool CreateAccessConfigRequestBody::accessConfigTagIsSet() const
{
    return accessConfigTagIsSet_;
}

void CreateAccessConfigRequestBody::unsetaccessConfigTag()
{
    accessConfigTagIsSet_ = false;
}

bool CreateAccessConfigRequestBody::isBinaryCollect() const
{
    return binaryCollect_;
}

void CreateAccessConfigRequestBody::setBinaryCollect(bool value)
{
    binaryCollect_ = value;
    binaryCollectIsSet_ = true;
}

bool CreateAccessConfigRequestBody::binaryCollectIsSet() const
{
    return binaryCollectIsSet_;
}

void CreateAccessConfigRequestBody::unsetbinaryCollect()
{
    binaryCollectIsSet_ = false;
}

bool CreateAccessConfigRequestBody::isLogSplit() const
{
    return logSplit_;
}

void CreateAccessConfigRequestBody::setLogSplit(bool value)
{
    logSplit_ = value;
    logSplitIsSet_ = true;
}

bool CreateAccessConfigRequestBody::logSplitIsSet() const
{
    return logSplitIsSet_;
}

void CreateAccessConfigRequestBody::unsetlogSplit()
{
    logSplitIsSet_ = false;
}

std::string CreateAccessConfigRequestBody::getClusterId() const
{
    return clusterId_;
}

void CreateAccessConfigRequestBody::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAccessConfigRequestBody::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAccessConfigRequestBody::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

bool CreateAccessConfigRequestBody::isIncrementalCollect() const
{
    return incrementalCollect_;
}

void CreateAccessConfigRequestBody::setIncrementalCollect(bool value)
{
    incrementalCollect_ = value;
    incrementalCollectIsSet_ = true;
}

bool CreateAccessConfigRequestBody::incrementalCollectIsSet() const
{
    return incrementalCollectIsSet_;
}

void CreateAccessConfigRequestBody::unsetincrementalCollect()
{
    incrementalCollectIsSet_ = false;
}

std::string CreateAccessConfigRequestBody::getEncodingFormat() const
{
    return encodingFormat_;
}

void CreateAccessConfigRequestBody::setEncodingFormat(const std::string& value)
{
    encodingFormat_ = value;
    encodingFormatIsSet_ = true;
}

bool CreateAccessConfigRequestBody::encodingFormatIsSet() const
{
    return encodingFormatIsSet_;
}

void CreateAccessConfigRequestBody::unsetencodingFormat()
{
    encodingFormatIsSet_ = false;
}

std::string CreateAccessConfigRequestBody::getProcessorType() const
{
    return processorType_;
}

void CreateAccessConfigRequestBody::setProcessorType(const std::string& value)
{
    processorType_ = value;
    processorTypeIsSet_ = true;
}

bool CreateAccessConfigRequestBody::processorTypeIsSet() const
{
    return processorTypeIsSet_;
}

void CreateAccessConfigRequestBody::unsetprocessorType()
{
    processorTypeIsSet_ = false;
}

std::string CreateAccessConfigRequestBody::getDemoLog() const
{
    return demoLog_;
}

void CreateAccessConfigRequestBody::setDemoLog(const std::string& value)
{
    demoLog_ = value;
    demoLogIsSet_ = true;
}

bool CreateAccessConfigRequestBody::demoLogIsSet() const
{
    return demoLogIsSet_;
}

void CreateAccessConfigRequestBody::unsetdemoLog()
{
    demoLogIsSet_ = false;
}

std::vector<DemoFieldAccess>& CreateAccessConfigRequestBody::getDemoFields()
{
    return demoFields_;
}

void CreateAccessConfigRequestBody::setDemoFields(const std::vector<DemoFieldAccess>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool CreateAccessConfigRequestBody::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void CreateAccessConfigRequestBody::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<Processor>& CreateAccessConfigRequestBody::getProcessors()
{
    return processors_;
}

void CreateAccessConfigRequestBody::setProcessors(const std::vector<Processor>& value)
{
    processors_ = value;
    processorsIsSet_ = true;
}

bool CreateAccessConfigRequestBody::processorsIsSet() const
{
    return processorsIsSet_;
}

void CreateAccessConfigRequestBody::unsetprocessors()
{
    processorsIsSet_ = false;
}

std::string CreateAccessConfigRequestBody::getApplicationId() const
{
    return applicationId_;
}

void CreateAccessConfigRequestBody::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool CreateAccessConfigRequestBody::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void CreateAccessConfigRequestBody::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string CreateAccessConfigRequestBody::getEnvironmentId() const
{
    return environmentId_;
}

void CreateAccessConfigRequestBody::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool CreateAccessConfigRequestBody::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void CreateAccessConfigRequestBody::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

std::vector<std::string>& CreateAccessConfigRequestBody::getComponentId()
{
    return componentId_;
}

void CreateAccessConfigRequestBody::setComponentId(const std::vector<std::string>& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool CreateAccessConfigRequestBody::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void CreateAccessConfigRequestBody::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::string CreateAccessConfigRequestBody::getAccessConfigTypeSource() const
{
    return accessConfigTypeSource_;
}

void CreateAccessConfigRequestBody::setAccessConfigTypeSource(const std::string& value)
{
    accessConfigTypeSource_ = value;
    accessConfigTypeSourceIsSet_ = true;
}

bool CreateAccessConfigRequestBody::accessConfigTypeSourceIsSet() const
{
    return accessConfigTypeSourceIsSet_;
}

void CreateAccessConfigRequestBody::unsetaccessConfigTypeSource()
{
    accessConfigTypeSourceIsSet_ = false;
}

}
}
}
}
}


