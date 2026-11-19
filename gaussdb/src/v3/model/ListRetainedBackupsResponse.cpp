

#include "huaweicloud/gaussdb/v3/model/ListRetainedBackupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListRetainedBackupsResponse::ListRetainedBackupsResponse()
{
    recycleBackupInfosIsSet_ = false;
    policyIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListRetainedBackupsResponse::~ListRetainedBackupsResponse() = default;

void ListRetainedBackupsResponse::validate()
{
}

web::json::value ListRetainedBackupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recycleBackupInfosIsSet_) {
        val[utility::conversions::to_string_t("recycle_backup_infos")] = ModelBase::toJson(recycleBackupInfos_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListRetainedBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recycle_backup_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recycle_backup_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<RetainedBackupInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecycleBackupInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            RetainedBackupPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<RetainedBackupInfo>& ListRetainedBackupsResponse::getRecycleBackupInfos()
{
    return recycleBackupInfos_;
}

void ListRetainedBackupsResponse::setRecycleBackupInfos(const std::vector<RetainedBackupInfo>& value)
{
    recycleBackupInfos_ = value;
    recycleBackupInfosIsSet_ = true;
}

bool ListRetainedBackupsResponse::recycleBackupInfosIsSet() const
{
    return recycleBackupInfosIsSet_;
}

void ListRetainedBackupsResponse::unsetrecycleBackupInfos()
{
    recycleBackupInfosIsSet_ = false;
}

RetainedBackupPolicy ListRetainedBackupsResponse::getPolicy() const
{
    return policy_;
}

void ListRetainedBackupsResponse::setPolicy(const RetainedBackupPolicy& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool ListRetainedBackupsResponse::policyIsSet() const
{
    return policyIsSet_;
}

void ListRetainedBackupsResponse::unsetpolicy()
{
    policyIsSet_ = false;
}

int64_t ListRetainedBackupsResponse::getTotal() const
{
    return total_;
}

void ListRetainedBackupsResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRetainedBackupsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRetainedBackupsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


