

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

}
}
}
}
}


