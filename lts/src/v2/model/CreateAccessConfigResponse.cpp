

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

}
}
}
}
}


