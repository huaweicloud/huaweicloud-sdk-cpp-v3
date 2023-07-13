

#include "huaweicloud/cbr/v1/model/ListBackupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListBackupsResponse::ListBackupsResponse()
{
    backupsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListBackupsResponse::~ListBackupsResponse() = default;

void ListBackupsResponse::validate()
{
}

web::json::value ListBackupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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

std::vector<BackupResp>& ListBackupsResponse::getBackups()
{
    return backups_;
}

void ListBackupsResponse::setBackups(const std::vector<BackupResp>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ListBackupsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ListBackupsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int32_t ListBackupsResponse::getCount() const
{
    return count_;
}

void ListBackupsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListBackupsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListBackupsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListBackupsResponse::getOffset() const
{
    return offset_;
}

void ListBackupsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBackupsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBackupsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBackupsResponse::getLimit() const
{
    return limit_;
}

void ListBackupsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBackupsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListBackupsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


