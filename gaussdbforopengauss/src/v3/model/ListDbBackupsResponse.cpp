

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDbBackupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDbBackupsResponse::ListDbBackupsResponse()
{
    backupsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ListDbBackupsResponse::~ListDbBackupsResponse() = default;

void ListDbBackupsResponse::validate()
{
}

web::json::value ListDbBackupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDbBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<BackupsResult>& ListDbBackupsResponse::getBackups()
{
    return backups_;
}

void ListDbBackupsResponse::setBackups(const std::vector<BackupsResult>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ListDbBackupsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ListDbBackupsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int64_t ListDbBackupsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDbBackupsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDbBackupsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDbBackupsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


