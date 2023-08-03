

#include "huaweicloud/rds/v3/model/SupportFastRestoreList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupportFastRestoreList::SupportFastRestoreList()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    isSupportFastTableRestore_ = false;
    isSupportFastTableRestoreIsSet_ = false;
    isSupportFastDatabaseRestore_ = false;
    isSupportFastDatabaseRestoreIsSet_ = false;
}

SupportFastRestoreList::~SupportFastRestoreList() = default;

void SupportFastRestoreList::validate()
{
}

web::json::value SupportFastRestoreList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(isSupportFastTableRestoreIsSet_) {
        val[utility::conversions::to_string_t("is_support_fast_table_restore")] = ModelBase::toJson(isSupportFastTableRestore_);
    }
    if(isSupportFastDatabaseRestoreIsSet_) {
        val[utility::conversions::to_string_t("is_support_fast_database_restore")] = ModelBase::toJson(isSupportFastDatabaseRestore_);
    }

    return val;
}

bool SupportFastRestoreList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_fast_table_restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_fast_table_restore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportFastTableRestore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_fast_database_restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_fast_database_restore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportFastDatabaseRestore(refVal);
        }
    }
    return ok;
}

std::string SupportFastRestoreList::getInstanceId() const
{
    return instanceId_;
}

void SupportFastRestoreList::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SupportFastRestoreList::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SupportFastRestoreList::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

bool SupportFastRestoreList::isIsSupportFastTableRestore() const
{
    return isSupportFastTableRestore_;
}

void SupportFastRestoreList::setIsSupportFastTableRestore(bool value)
{
    isSupportFastTableRestore_ = value;
    isSupportFastTableRestoreIsSet_ = true;
}

bool SupportFastRestoreList::isSupportFastTableRestoreIsSet() const
{
    return isSupportFastTableRestoreIsSet_;
}

void SupportFastRestoreList::unsetisSupportFastTableRestore()
{
    isSupportFastTableRestoreIsSet_ = false;
}

bool SupportFastRestoreList::isIsSupportFastDatabaseRestore() const
{
    return isSupportFastDatabaseRestore_;
}

void SupportFastRestoreList::setIsSupportFastDatabaseRestore(bool value)
{
    isSupportFastDatabaseRestore_ = value;
    isSupportFastDatabaseRestoreIsSet_ = true;
}

bool SupportFastRestoreList::isSupportFastDatabaseRestoreIsSet() const
{
    return isSupportFastDatabaseRestoreIsSet_;
}

void SupportFastRestoreList::unsetisSupportFastDatabaseRestore()
{
    isSupportFastDatabaseRestoreIsSet_ = false;
}

}
}
}
}
}


