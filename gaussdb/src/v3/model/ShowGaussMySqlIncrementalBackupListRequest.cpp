

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlIncrementalBackupListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlIncrementalBackupListRequest::ShowGaussMySqlIncrementalBackupListRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowGaussMySqlIncrementalBackupListRequest::~ShowGaussMySqlIncrementalBackupListRequest() = default;

void ShowGaussMySqlIncrementalBackupListRequest::validate()
{
}

web::json::value ShowGaussMySqlIncrementalBackupListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowGaussMySqlIncrementalBackupListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ShowGaussMySqlIncrementalBackupListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowGaussMySqlIncrementalBackupListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowGaussMySqlIncrementalBackupListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowGaussMySqlIncrementalBackupListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowGaussMySqlIncrementalBackupListRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowGaussMySqlIncrementalBackupListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowGaussMySqlIncrementalBackupListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowGaussMySqlIncrementalBackupListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowGaussMySqlIncrementalBackupListRequest::getOffset() const
{
    return offset_;
}

void ShowGaussMySqlIncrementalBackupListRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowGaussMySqlIncrementalBackupListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowGaussMySqlIncrementalBackupListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowGaussMySqlIncrementalBackupListRequest::getLimit() const
{
    return limit_;
}

void ShowGaussMySqlIncrementalBackupListRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowGaussMySqlIncrementalBackupListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowGaussMySqlIncrementalBackupListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowGaussMySqlIncrementalBackupListRequest::getBeginTime() const
{
    return beginTime_;
}

void ShowGaussMySqlIncrementalBackupListRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowGaussMySqlIncrementalBackupListRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowGaussMySqlIncrementalBackupListRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowGaussMySqlIncrementalBackupListRequest::getEndTime() const
{
    return endTime_;
}

void ShowGaussMySqlIncrementalBackupListRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowGaussMySqlIncrementalBackupListRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowGaussMySqlIncrementalBackupListRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


