

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

}
}
}
}
}


