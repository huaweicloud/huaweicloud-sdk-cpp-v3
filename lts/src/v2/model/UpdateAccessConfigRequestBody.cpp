

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
    accessConfigDetailIsSet_ = false;
    hostGroupInfoIsSet_ = false;
    accessConfigTagIsSet_ = false;
    logSplit_ = false;
    logSplitIsSet_ = false;
    binaryCollect_ = false;
    binaryCollectIsSet_ = false;
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
    if(val.has_field(utility::conversions::to_string_t("access_config_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_detail"));
        if(!fieldValue.is_null())
        {
            AccessConfigDeatilCreate refVal;
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

AccessConfigDeatilCreate UpdateAccessConfigRequestBody::getAccessConfigDetail() const
{
    return accessConfigDetail_;
}

void UpdateAccessConfigRequestBody::setAccessConfigDetail(const AccessConfigDeatilCreate& value)
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

}
}
}
}
}


