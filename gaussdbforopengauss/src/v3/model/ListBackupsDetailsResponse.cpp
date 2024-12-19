

#include "huaweicloud/gaussdbforopengauss/v3/model/ListBackupsDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListBackupsDetailsResponse::ListBackupsDetailsResponse()
{
    backupsIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ListBackupsDetailsResponse::~ListBackupsDetailsResponse() = default;

void ListBackupsDetailsResponse::validate()
{
}

web::json::value ListBackupsDetailsResponse::toJson() const
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
bool ListBackupsDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<ListBackupsResult> refVal;
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


std::vector<ListBackupsResult>& ListBackupsDetailsResponse::getBackups()
{
    return backups_;
}

void ListBackupsDetailsResponse::setBackups(const std::vector<ListBackupsResult>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ListBackupsDetailsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ListBackupsDetailsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int64_t ListBackupsDetailsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListBackupsDetailsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListBackupsDetailsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListBackupsDetailsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


