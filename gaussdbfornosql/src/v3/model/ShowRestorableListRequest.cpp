

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRestorableListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRestorableListRequest::ShowRestorableListRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowRestorableListRequest::~ShowRestorableListRequest() = default;

void ShowRestorableListRequest::validate()
{
}

web::json::value ShowRestorableListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowRestorableListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
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


std::string ShowRestorableListRequest::getBackupId() const
{
    return backupId_;
}

void ShowRestorableListRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowRestorableListRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowRestorableListRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

int32_t ShowRestorableListRequest::getOffset() const
{
    return offset_;
}

void ShowRestorableListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowRestorableListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowRestorableListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowRestorableListRequest::getLimit() const
{
    return limit_;
}

void ShowRestorableListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowRestorableListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowRestorableListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


