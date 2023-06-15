

#include "huaweicloud/cbr/v1/model/ImportBackupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ImportBackupResponse::ImportBackupResponse()
{
    syncIsSet_ = false;
}

ImportBackupResponse::~ImportBackupResponse() = default;

void ImportBackupResponse::validate()
{
}

web::json::value ImportBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }

    return val;
}

bool ImportBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupSyncRespBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    return ok;
}


std::vector<BackupSyncRespBody>& ImportBackupResponse::getSync()
{
    return sync_;
}

void ImportBackupResponse::setSync(const std::vector<BackupSyncRespBody>& value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool ImportBackupResponse::syncIsSet() const
{
    return syncIsSet_;
}

void ImportBackupResponse::unsetsync()
{
    syncIsSet_ = false;
}

}
}
}
}
}


