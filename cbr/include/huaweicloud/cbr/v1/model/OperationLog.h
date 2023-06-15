
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OperationLog_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OperationLog_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/OpErrorInfo.h>
#include <huaweicloud/cbr/v1/model/OpExtraInfo.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  OperationLog
    : public ModelBase
{
public:
    OperationLog();
    virtual ~OperationLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OperationLog members

    /// <summary>
    /// 备份记录id
    /// </summary>

    std::string getCheckpointId() const;
    bool checkpointIdIsSet() const;
    void unsetcheckpointId();
    void setCheckpointId(const std::string& value);

    /// <summary>
    /// 创建时间,例如: \&quot;2020-02-23T01:00:32Z\&quot;
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 任务结束时间,例如: \&quot;2020-02-23T01:00:32Z\&quot;
    /// </summary>

    std::string getEndedAt() const;
    bool endedAtIsSet() const;
    void unsetendedAt();
    void setEndedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpErrorInfo getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const OpErrorInfo& value);

    /// <summary>
    /// 
    /// </summary>

    OpExtraInfo getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const OpExtraInfo& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 策略ID
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 备份提供商ID。用于区分备份对象。
    /// </summary>

    std::string getProviderId() const;
    bool providerIdIsSet() const;
    void unsetproviderId();
    void setProviderId(const std::string& value);

    /// <summary>
    /// 任务开始时间,例如: \&quot;2020-02-23T01:00:32Z\&quot;
    /// </summary>

    std::string getStartedAt() const;
    bool startedAtIsSet() const;
    void unsetstartedAt();
    void setStartedAt(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 修改时间,例如: \&quot;2020-02-23T01:00:32Z\&quot;
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 任务操作资源所属存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 任务操作资源所属存储库名称
    /// </summary>

    std::string getVaultName() const;
    bool vaultNameIsSet() const;
    void unsetvaultName();
    void setVaultName(const std::string& value);


protected:
    std::string checkpointId_;
    bool checkpointIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string endedAt_;
    bool endedAtIsSet_;
    OpErrorInfo errorInfo_;
    bool errorInfoIsSet_;
    OpExtraInfo extraInfo_;
    bool extraInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string operationType_;
    bool operationTypeIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string providerId_;
    bool providerIdIsSet_;
    std::string startedAt_;
    bool startedAtIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;
    std::string vaultName_;
    bool vaultNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OperationLog_H_
