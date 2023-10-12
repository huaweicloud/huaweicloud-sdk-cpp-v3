
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSyncRespBody_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSyncRespBody_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BackupSyncRespBody
    : public ModelBase
{
public:
    BackupSyncRespBody();
    virtual ~BackupSyncRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupSyncRespBody members

    /// <summary>
    /// 备份副本ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 同步任务ID
    /// </summary>

    std::string getOperationLogId() const;
    bool operationLogIdIsSet() const;
    void unsetoperationLogId();
    void setOperationLogId(const std::string& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string operationLogId_;
    bool operationLogIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BackupSyncRespBody_H_
