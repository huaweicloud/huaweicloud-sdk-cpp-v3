

#include "huaweicloud/gaussdbfornosql/v3/model/BatchDeleteManualBackupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




BatchDeleteManualBackupRequestBody::BatchDeleteManualBackupRequestBody()
{
    backupIdsIsSet_ = false;
}

BatchDeleteManualBackupRequestBody::~BatchDeleteManualBackupRequestBody() = default;

void BatchDeleteManualBackupRequestBody::validate()
{
}

web::json::value BatchDeleteManualBackupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdsIsSet_) {
        val[utility::conversions::to_string_t("backup_ids")] = ModelBase::toJson(backupIds_);
    }

    return val;
}
bool BatchDeleteManualBackupRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchDeleteManualBackupRequestBody::getBackupIds()
{
    return backupIds_;
}

void BatchDeleteManualBackupRequestBody::setBackupIds(const std::vector<std::string>& value)
{
    backupIds_ = value;
    backupIdsIsSet_ = true;
}

bool BatchDeleteManualBackupRequestBody::backupIdsIsSet() const
{
    return backupIdsIsSet_;
}

void BatchDeleteManualBackupRequestBody::unsetbackupIds()
{
    backupIdsIsSet_ = false;
}

}
}
}
}
}


