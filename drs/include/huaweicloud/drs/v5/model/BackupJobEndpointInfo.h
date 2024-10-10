
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupJobEndpointInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupJobEndpointInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 备份迁移任务恢复目标RDS for SQL Server实例信息。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BackupJobEndpointInfo
    : public ModelBase
{
public:
    BackupJobEndpointInfo();
    virtual ~BackupJobEndpointInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupJobEndpointInfo members

    /// <summary>
    /// 备份迁移任务恢复目标RDS for SQL Server实例ID。
    /// </summary>

    std::string getTargetInstanceId() const;
    bool targetInstanceIdIsSet() const;
    void unsettargetInstanceId();
    void setTargetInstanceId(const std::string& value);

    /// <summary>
    /// 目标实例是否开启FileStream模式。可通过RDS for SQL Server详情接口获取。
    /// </summary>

    std::string getMsFileStreamStatus() const;
    bool msFileStreamStatusIsSet() const;
    void unsetmsFileStreamStatus();
    void setMsFileStreamStatus(const std::string& value);

    /// <summary>
    /// RDS for SQL Server备份文件的文件ID，通过RDS全量恢复时必填。可通过云数据库RDS备份管理页面获取。
    /// </summary>

    std::string getFileId() const;
    bool fileIdIsSet() const;
    void unsetfileId();
    void setFileId(const std::string& value);


protected:
    std::string targetInstanceId_;
    bool targetInstanceIdIsSet_;
    std::string msFileStreamStatus_;
    bool msFileStreamStatusIsSet_;
    std::string fileId_;
    bool fileIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BackupJobEndpointInfo_H_
