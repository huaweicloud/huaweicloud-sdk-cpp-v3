

#include "huaweicloud/gaussdbforopengauss/v3/model/ListBackupsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListBackupsResponse::ListBackupsResponse()
{
    backupsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
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
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
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
            std::vector<Backups> refVal;
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

std::vector<Backups>& ListBackupsResponse::getBackups()
{
    return backups_;
}

void ListBackupsResponse::setBackups(const std::vector<Backups>& value)
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

int64_t ListBackupsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListBackupsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListBackupsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListBackupsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


