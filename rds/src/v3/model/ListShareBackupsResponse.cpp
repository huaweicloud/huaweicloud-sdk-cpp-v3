

#include "huaweicloud/rds/v3/model/ListShareBackupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListShareBackupsResponse::ListShareBackupsResponse()
{
    backupsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListShareBackupsResponse::~ListShareBackupsResponse() = default;

void ListShareBackupsResponse::validate()
{
}

web::json::value ListShareBackupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListShareBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<ShareBackups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<ShareBackups>& ListShareBackupsResponse::getBackups()
{
    return backups_;
}

void ListShareBackupsResponse::setBackups(const std::vector<ShareBackups>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ListShareBackupsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ListShareBackupsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int32_t ListShareBackupsResponse::getTotal() const
{
    return total_;
}

void ListShareBackupsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListShareBackupsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListShareBackupsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


