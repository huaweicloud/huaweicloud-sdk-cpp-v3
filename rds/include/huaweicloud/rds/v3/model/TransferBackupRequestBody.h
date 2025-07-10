
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferBackupRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferBackupRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 手动转储任务请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TransferBackupRequestBody
    : public ModelBase
{
public:
    TransferBackupRequestBody();
    virtual ~TransferBackupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferBackupRequestBody members

    /// <summary>
    /// 备份id列表
    /// </summary>

    std::vector<std::string>& getBackups();
    bool backupsIsSet() const;
    void unsetbackups();
    void setBackups(const std::vector<std::string>& value);

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 目标OBS桶名
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// 目标前缀
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);


protected:
    std::vector<std::string> backups_;
    bool backupsIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string destination_;
    bool destinationIsSet_;
    std::string prefix_;
    bool prefixIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferBackupRequestBody_H_
