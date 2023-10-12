

#include "huaweicloud/cbr/v1/model/OpExtendInfoDelete.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpExtendInfoDelete::OpExtendInfoDelete()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    backupName_ = "";
    backupNameIsSet_ = false;
}

OpExtendInfoDelete::~OpExtendInfoDelete() = default;

void OpExtendInfoDelete::validate()
{
}

web::json::value OpExtendInfoDelete::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(backupNameIsSet_) {
        val[utility::conversions::to_string_t("backup_name")] = ModelBase::toJson(backupName_);
    }

    return val;
}
bool OpExtendInfoDelete::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("backup_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupName(refVal);
        }
    }
    return ok;
}


std::string OpExtendInfoDelete::getBackupId() const
{
    return backupId_;
}

void OpExtendInfoDelete::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool OpExtendInfoDelete::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void OpExtendInfoDelete::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string OpExtendInfoDelete::getBackupName() const
{
    return backupName_;
}

void OpExtendInfoDelete::setBackupName(const std::string& value)
{
    backupName_ = value;
    backupNameIsSet_ = true;
}

bool OpExtendInfoDelete::backupNameIsSet() const
{
    return backupNameIsSet_;
}

void OpExtendInfoDelete::unsetbackupName()
{
    backupNameIsSet_ = false;
}

}
}
}
}
}


