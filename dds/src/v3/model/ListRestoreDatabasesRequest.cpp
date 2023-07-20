

#include "huaweicloud/dds/v3/model/ListRestoreDatabasesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListRestoreDatabasesRequest::ListRestoreDatabasesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRestoreDatabasesRequest::~ListRestoreDatabasesRequest() = default;

void ListRestoreDatabasesRequest::validate()
{
}

web::json::value ListRestoreDatabasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListRestoreDatabasesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
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

std::string ListRestoreDatabasesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRestoreDatabasesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRestoreDatabasesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRestoreDatabasesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListRestoreDatabasesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRestoreDatabasesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRestoreDatabasesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRestoreDatabasesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRestoreDatabasesRequest::getRestoreTime() const
{
    return restoreTime_;
}

void ListRestoreDatabasesRequest::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ListRestoreDatabasesRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ListRestoreDatabasesRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

int32_t ListRestoreDatabasesRequest::getOffset() const
{
    return offset_;
}

void ListRestoreDatabasesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRestoreDatabasesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRestoreDatabasesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRestoreDatabasesRequest::getLimit() const
{
    return limit_;
}

void ListRestoreDatabasesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRestoreDatabasesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRestoreDatabasesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


