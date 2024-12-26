

#include "huaweicloud/lts/v2/model/UpdateAccessConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateAccessConfigRequestBody::UpdateAccessConfigRequestBody()
{
    accessConfigId_ = "";
    accessConfigIdIsSet_ = false;
    accessConfigName_ = "";
    accessConfigNameIsSet_ = false;
    accessConfigDetailIsSet_ = false;
    hostGroupInfoIsSet_ = false;
    accessConfigTagIsSet_ = false;
    logSplit_ = false;
    logSplitIsSet_ = false;
    binaryCollect_ = false;
    binaryCollectIsSet_ = false;
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
}

UpdateAccessConfigRequestBody::~UpdateAccessConfigRequestBody() = default;

void UpdateAccessConfigRequestBody::validate()
{
}

web::json::value UpdateAccessConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessConfigIdIsSet_) {
        val[utility::conversions::to_string_t("access_config_id")] = ModelBase::toJson(accessConfigId_);
    }
    if(accessConfigNameIsSet_) {
        val[utility::conversions::to_string_t("access_config_name")] = ModelBase::toJson(accessConfigName_);
    }
    if(accessConfigDetailIsSet_) {
        val[utility::conversions::to_string_t("access_config_detail")] = ModelBase::toJson(accessConfigDetail_);
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

    return val;
}
bool UpdateAccessConfigRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("access_config_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_detail"));
        if(!fieldValue.is_null())
        {
            AccessConfigDeatilUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigDetail(refVal);
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
    return ok;
}


std::string UpdateAccessConfigRequestBody::getAccessConfigId() const
{
    return accessConfigId_;
}

void UpdateAccessConfigRequestBody::setAccessConfigId(const std::string& value)
{
    accessConfigId_ = value;
    accessConfigIdIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::accessConfigIdIsSet() const
{
    return accessConfigIdIsSet_;
}

void UpdateAccessConfigRequestBody::unsetaccessConfigId()
{
    accessConfigIdIsSet_ = false;
}

std::string UpdateAccessConfigRequestBody::getAccessConfigName() const
{
    return accessConfigName_;
}

void UpdateAccessConfigRequestBody::setAccessConfigName(const std::string& value)
{
    accessConfigName_ = value;
    accessConfigNameIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::accessConfigNameIsSet() const
{
    return accessConfigNameIsSet_;
}

void UpdateAccessConfigRequestBody::unsetaccessConfigName()
{
    accessConfigNameIsSet_ = false;
}

AccessConfigDeatilUpdate UpdateAccessConfigRequestBody::getAccessConfigDetail() const
{
    return accessConfigDetail_;
}

void UpdateAccessConfigRequestBody::setAccessConfigDetail(const AccessConfigDeatilUpdate& value)
{
    accessConfigDetail_ = value;
    accessConfigDetailIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::accessConfigDetailIsSet() const
{
    return accessConfigDetailIsSet_;
}

void UpdateAccessConfigRequestBody::unsetaccessConfigDetail()
{
    accessConfigDetailIsSet_ = false;
}

AccessConfigHostGroupIdList UpdateAccessConfigRequestBody::getHostGroupInfo() const
{
    return hostGroupInfo_;
}

void UpdateAccessConfigRequestBody::setHostGroupInfo(const AccessConfigHostGroupIdList& value)
{
    hostGroupInfo_ = value;
    hostGroupInfoIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::hostGroupInfoIsSet() const
{
    return hostGroupInfoIsSet_;
}

void UpdateAccessConfigRequestBody::unsethostGroupInfo()
{
    hostGroupInfoIsSet_ = false;
}

std::vector<AccessConfigTag>& UpdateAccessConfigRequestBody::getAccessConfigTag()
{
    return accessConfigTag_;
}

void UpdateAccessConfigRequestBody::setAccessConfigTag(const std::vector<AccessConfigTag>& value)
{
    accessConfigTag_ = value;
    accessConfigTagIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::accessConfigTagIsSet() const
{
    return accessConfigTagIsSet_;
}

void UpdateAccessConfigRequestBody::unsetaccessConfigTag()
{
    accessConfigTagIsSet_ = false;
}

bool UpdateAccessConfigRequestBody::isLogSplit() const
{
    return logSplit_;
}

void UpdateAccessConfigRequestBody::setLogSplit(bool value)
{
    logSplit_ = value;
    logSplitIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::logSplitIsSet() const
{
    return logSplitIsSet_;
}

void UpdateAccessConfigRequestBody::unsetlogSplit()
{
    logSplitIsSet_ = false;
}

bool UpdateAccessConfigRequestBody::isBinaryCollect() const
{
    return binaryCollect_;
}

void UpdateAccessConfigRequestBody::setBinaryCollect(bool value)
{
    binaryCollect_ = value;
    binaryCollectIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::binaryCollectIsSet() const
{
    return binaryCollectIsSet_;
}

void UpdateAccessConfigRequestBody::unsetbinaryCollect()
{
    binaryCollectIsSet_ = false;
}

std::string UpdateAccessConfigRequestBody::getClusterId() const
{
    return clusterId_;
}

void UpdateAccessConfigRequestBody::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateAccessConfigRequestBody::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

bool UpdateAccessConfigRequestBody::isIncrementalCollect() const
{
    return incrementalCollect_;
}

void UpdateAccessConfigRequestBody::setIncrementalCollect(bool value)
{
    incrementalCollect_ = value;
    incrementalCollectIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::incrementalCollectIsSet() const
{
    return incrementalCollectIsSet_;
}

void UpdateAccessConfigRequestBody::unsetincrementalCollect()
{
    incrementalCollectIsSet_ = false;
}

std::string UpdateAccessConfigRequestBody::getEncodingFormat() const
{
    return encodingFormat_;
}

void UpdateAccessConfigRequestBody::setEncodingFormat(const std::string& value)
{
    encodingFormat_ = value;
    encodingFormatIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::encodingFormatIsSet() const
{
    return encodingFormatIsSet_;
}

void UpdateAccessConfigRequestBody::unsetencodingFormat()
{
    encodingFormatIsSet_ = false;
}

std::string UpdateAccessConfigRequestBody::getProcessorType() const
{
    return processorType_;
}

void UpdateAccessConfigRequestBody::setProcessorType(const std::string& value)
{
    processorType_ = value;
    processorTypeIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::processorTypeIsSet() const
{
    return processorTypeIsSet_;
}

void UpdateAccessConfigRequestBody::unsetprocessorType()
{
    processorTypeIsSet_ = false;
}

std::string UpdateAccessConfigRequestBody::getDemoLog() const
{
    return demoLog_;
}

void UpdateAccessConfigRequestBody::setDemoLog(const std::string& value)
{
    demoLog_ = value;
    demoLogIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::demoLogIsSet() const
{
    return demoLogIsSet_;
}

void UpdateAccessConfigRequestBody::unsetdemoLog()
{
    demoLogIsSet_ = false;
}

std::vector<DemoFieldAccess>& UpdateAccessConfigRequestBody::getDemoFields()
{
    return demoFields_;
}

void UpdateAccessConfigRequestBody::setDemoFields(const std::vector<DemoFieldAccess>& value)
{
    demoFields_ = value;
    demoFieldsIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::demoFieldsIsSet() const
{
    return demoFieldsIsSet_;
}

void UpdateAccessConfigRequestBody::unsetdemoFields()
{
    demoFieldsIsSet_ = false;
}

std::vector<Processor>& UpdateAccessConfigRequestBody::getProcessors()
{
    return processors_;
}

void UpdateAccessConfigRequestBody::setProcessors(const std::vector<Processor>& value)
{
    processors_ = value;
    processorsIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::processorsIsSet() const
{
    return processorsIsSet_;
}

void UpdateAccessConfigRequestBody::unsetprocessors()
{
    processorsIsSet_ = false;
}

std::string UpdateAccessConfigRequestBody::getApplicationId() const
{
    return applicationId_;
}

void UpdateAccessConfigRequestBody::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void UpdateAccessConfigRequestBody::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string UpdateAccessConfigRequestBody::getEnvironmentId() const
{
    return environmentId_;
}

void UpdateAccessConfigRequestBody::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void UpdateAccessConfigRequestBody::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

std::vector<std::string>& UpdateAccessConfigRequestBody::getComponentId()
{
    return componentId_;
}

void UpdateAccessConfigRequestBody::setComponentId(const std::vector<std::string>& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool UpdateAccessConfigRequestBody::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void UpdateAccessConfigRequestBody::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

}
}
}
}
}


