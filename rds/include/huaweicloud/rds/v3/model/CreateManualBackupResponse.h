
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateManualBackupResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateManualBackupResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BackupInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateManualBackupResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateManualBackupResponse();
    virtual ~CreateManualBackupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateManualBackupResponse members

    /// <summary>
    /// 
    /// </summary>

    BackupInfo getBackup() const;
    bool backupIsSet() const;
    void unsetbackup();
    void setBackup(const BackupInfo& value);


protected:
    BackupInfo backup_;
    bool backupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateManualBackupResponse_H_
