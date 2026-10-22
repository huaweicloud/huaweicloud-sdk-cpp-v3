

#include "huaweicloud/gaussdbfornosql/v3/model/ListBiactiveInstanceCandidatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListBiactiveInstanceCandidatesRequest::ListBiactiveInstanceCandidatesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    targetRegionCode_ = "";
    targetRegionCodeIsSet_ = false;
    targetInstanceName_ = "";
    targetInstanceNameIsSet_ = false;
    dataSyncMode_ = "";
    dataSyncModeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListBiactiveInstanceCandidatesRequest::~ListBiactiveInstanceCandidatesRequest() = default;

void ListBiactiveInstanceCandidatesRequest::validate()
{
}

web::json::value ListBiactiveInstanceCandidatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(targetRegionCodeIsSet_) {
        val[utility::conversions::to_string_t("target_region_code")] = ModelBase::toJson(targetRegionCode_);
    }
    if(targetInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("target_instance_name")] = ModelBase::toJson(targetInstanceName_);
    }
    if(dataSyncModeIsSet_) {
        val[utility::conversions::to_string_t("data_sync_mode")] = ModelBase::toJson(dataSyncMode_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListBiactiveInstanceCandidatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_region_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_region_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRegionCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_sync_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_sync_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataSyncMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListBiactiveInstanceCandidatesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListBiactiveInstanceCandidatesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListBiactiveInstanceCandidatesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListBiactiveInstanceCandidatesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListBiactiveInstanceCandidatesRequest::getTargetRegionCode() const
{
    return targetRegionCode_;
}

void ListBiactiveInstanceCandidatesRequest::setTargetRegionCode(const std::string& value)
{
    targetRegionCode_ = value;
    targetRegionCodeIsSet_ = true;
}

bool ListBiactiveInstanceCandidatesRequest::targetRegionCodeIsSet() const
{
    return targetRegionCodeIsSet_;
}

void ListBiactiveInstanceCandidatesRequest::unsettargetRegionCode()
{
    targetRegionCodeIsSet_ = false;
}

std::string ListBiactiveInstanceCandidatesRequest::getTargetInstanceName() const
{
    return targetInstanceName_;
}

void ListBiactiveInstanceCandidatesRequest::setTargetInstanceName(const std::string& value)
{
    targetInstanceName_ = value;
    targetInstanceNameIsSet_ = true;
}

bool ListBiactiveInstanceCandidatesRequest::targetInstanceNameIsSet() const
{
    return targetInstanceNameIsSet_;
}

void ListBiactiveInstanceCandidatesRequest::unsettargetInstanceName()
{
    targetInstanceNameIsSet_ = false;
}

std::string ListBiactiveInstanceCandidatesRequest::getDataSyncMode() const
{
    return dataSyncMode_;
}

void ListBiactiveInstanceCandidatesRequest::setDataSyncMode(const std::string& value)
{
    dataSyncMode_ = value;
    dataSyncModeIsSet_ = true;
}

bool ListBiactiveInstanceCandidatesRequest::dataSyncModeIsSet() const
{
    return dataSyncModeIsSet_;
}

void ListBiactiveInstanceCandidatesRequest::unsetdataSyncMode()
{
    dataSyncModeIsSet_ = false;
}

int32_t ListBiactiveInstanceCandidatesRequest::getOffset() const
{
    return offset_;
}

void ListBiactiveInstanceCandidatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBiactiveInstanceCandidatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBiactiveInstanceCandidatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBiactiveInstanceCandidatesRequest::getLimit() const
{
    return limit_;
}

void ListBiactiveInstanceCandidatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBiactiveInstanceCandidatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBiactiveInstanceCandidatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


