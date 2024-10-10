
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateOfflineTaskReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateOfflineTaskReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BackupJobEndpointInfo.h>
#include <huaweicloud/drs/v5/model/BackupInfo.h>
#include <huaweicloud/drs/v5/model/BackupJobBaseInfo.h>
#include <huaweicloud/drs/v5/model/BackupRestoreOptionInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建备份迁移任务请求。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CreateOfflineTaskReq
    : public ModelBase
{
public:
    CreateOfflineTaskReq();
    virtual ~CreateOfflineTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOfflineTaskReq members

    /// <summary>
    /// 
    /// </summary>

    BackupJobBaseInfo getBaseInfo() const;
    bool baseInfoIsSet() const;
    void unsetbaseInfo();
    void setBaseInfo(const BackupJobBaseInfo& value);

    /// <summary>
    /// 
    /// </summary>

    BackupJobEndpointInfo getTargetDbInfo() const;
    bool targetDbInfoIsSet() const;
    void unsettargetDbInfo();
    void setTargetDbInfo(const BackupJobEndpointInfo& value);

    /// <summary>
    /// 
    /// </summary>

    BackupInfo getBackupInfo() const;
    bool backupInfoIsSet() const;
    void unsetbackupInfo();
    void setBackupInfo(const BackupInfo& value);

    /// <summary>
    /// 
    /// </summary>

    BackupRestoreOptionInfo getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const BackupRestoreOptionInfo& value);


protected:
    BackupJobBaseInfo baseInfo_;
    bool baseInfoIsSet_;
    BackupJobEndpointInfo targetDbInfo_;
    bool targetDbInfoIsSet_;
    BackupInfo backupInfo_;
    bool backupInfoIsSet_;
    BackupRestoreOptionInfo options_;
    bool optionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CreateOfflineTaskReq_H_
