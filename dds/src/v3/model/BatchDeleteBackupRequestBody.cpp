

#include "huaweicloud/dds/v3/model/BatchDeleteBackupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BatchDeleteBackupRequestBody::BatchDeleteBackupRequestBody()
{
    backupIdsIsSet_ = false;
}

BatchDeleteBackupRequestBody::~BatchDeleteBackupRequestBody() = default;

void BatchDeleteBackupRequestBody::validate()
{
}

web::json::value BatchDeleteBackupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdsIsSet_) {
        val[utility::conversions::to_string_t("backup_ids")] = ModelBase::toJson(backupIds_);
    }

    return val;
}
bool BatchDeleteBackupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteBackupRequestBody::getBackupIds()
{
    return backupIds_;
}

void BatchDeleteBackupRequestBody::setBackupIds(const std::vector<std::string>& value)
{
    backupIds_ = value;
    backupIdsIsSet_ = true;
}

bool BatchDeleteBackupRequestBody::backupIdsIsSet() const
{
    return backupIdsIsSet_;
}

void BatchDeleteBackupRequestBody::unsetbackupIds()
{
    backupIdsIsSet_ = false;
}

}
}
}
}
}


