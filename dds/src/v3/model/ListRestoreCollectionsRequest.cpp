

#include "huaweicloud/dds/v3/model/ListRestoreCollectionsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListRestoreCollectionsRequest::ListRestoreCollectionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRestoreCollectionsRequest::~ListRestoreCollectionsRequest() = default;

void ListRestoreCollectionsRequest::validate()
{
}

web::json::value ListRestoreCollectionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
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

bool ListRestoreCollectionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
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

std::string ListRestoreCollectionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRestoreCollectionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRestoreCollectionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRestoreCollectionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListRestoreCollectionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRestoreCollectionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRestoreCollectionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRestoreCollectionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListRestoreCollectionsRequest::getDbName() const
{
    return dbName_;
}

void ListRestoreCollectionsRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListRestoreCollectionsRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListRestoreCollectionsRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListRestoreCollectionsRequest::getRestoreTime() const
{
    return restoreTime_;
}

void ListRestoreCollectionsRequest::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ListRestoreCollectionsRequest::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ListRestoreCollectionsRequest::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

int32_t ListRestoreCollectionsRequest::getOffset() const
{
    return offset_;
}

void ListRestoreCollectionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRestoreCollectionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRestoreCollectionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRestoreCollectionsRequest::getLimit() const
{
    return limit_;
}

void ListRestoreCollectionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRestoreCollectionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRestoreCollectionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


