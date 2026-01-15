
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplicationJobResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplicationJobResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BackupJobEndpointInfo.h>
#include <string>
#include <huaweicloud/drs/v5/model/BackupInfoResp.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowReplicationJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplicationJobResponse();
    virtual ~ShowReplicationJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReplicationJobResponse members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务状态。取值：success，failed
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务完成时间。
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BackupInfoResp getBackupInfo() const;
    bool backupInfoIsSet() const;
    void unsetbackupInfo();
    void setBackupInfo(const BackupInfoResp& value);

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

    BackupRestoreOptionInfo getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const BackupRestoreOptionInfo& value);

    /// <summary>
    /// 备份恢复数据库映射新名称。
    /// </summary>

    std::string getNewDbNames() const;
    bool newDbNamesIsSet() const;
    void unsetnewDbNames();
    void setNewDbNames(const std::string& value);

    /// <summary>
    /// RDS实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 迁移过程中失败原因。
    /// </summary>

    std::string getErrorLog() const;
    bool errorLogIsSet() const;
    void unseterrorLog();
    void setErrorLog(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    BackupInfoResp backupInfo_;
    bool backupInfoIsSet_;
    BackupJobBaseInfo baseInfo_;
    bool baseInfoIsSet_;
    BackupJobEndpointInfo targetDbInfo_;
    bool targetDbInfoIsSet_;
    BackupRestoreOptionInfo options_;
    bool optionsIsSet_;
    std::string newDbNames_;
    bool newDbNamesIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string errorLog_;
    bool errorLogIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowReplicationJobResponse_H_
