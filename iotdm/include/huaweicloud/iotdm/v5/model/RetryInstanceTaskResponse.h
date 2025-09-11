
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_RetryInstanceTaskResponse_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_RetryInstanceTaskResponse_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/OperateWindow.h>
#include <string>
#include <huaweicloud/iotdm/v5/model/TargetConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  RetryInstanceTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    RetryInstanceTaskResponse();
    virtual ~RetryInstanceTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetryInstanceTaskResponse members

    /// <summary>
    /// 任务Id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数说明**：实例任务类型。 **取值范围**： - CREATE：创建实例任务 - MODIFY：实例规格变更任务 - DELETE：实例删除任务 - FREEZE：实例冻结任务 - UNFREEZE：实例解冻任务 - UPDATE_ACCESS_CONFIG：修改实例接入信息任务 - UPDATE_ALLOW_LISTS： 修改实例接入白名单任务 - OPEN_SNAT：启用实例SNAT配置任务 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数说明**：任务状态。 **取值范围**： - PENDING：等待执行 - RUNNING：执行中 - SUCCESS：执行成功 - FAILED：执行失败 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数说明**：任务状态描述。 
    /// </summary>

    std::string getStatusDetail() const;
    bool statusDetailIsSet() const;
    void unsetstatusDetail();
    void setStatusDetail(const std::string& value);

    /// <summary>
    /// **参数说明**：实例任务的创建时间。格式为：\&quot;yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;\&quot; 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数说明**：实例任务的开始时间。格式为：\&quot;yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;\&quot; 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数说明**：实例任务的结束时间。格式为：\&quot;yyyy-MM-dd&#39;T&#39;HH:mm:ss.SSS&#39;Z&#39;\&quot; 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TargetConfig getTargetConfig() const;
    bool targetConfigIsSet() const;
    void unsettargetConfig();
    void setTargetConfig(const TargetConfig& value);

    /// <summary>
    /// 
    /// </summary>

    OperateWindow getOperateWindow() const;
    bool operateWindowIsSet() const;
    void unsetoperateWindow();
    void setOperateWindow(const OperateWindow& value);

    /// <summary>
    /// **参数说明**：任务进度\&quot; 
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string statusDetail_;
    bool statusDetailIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    TargetConfig targetConfig_;
    bool targetConfigIsSet_;
    OperateWindow operateWindow_;
    bool operateWindowIsSet_;
    int32_t progress_;
    bool progressIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_RetryInstanceTaskResponse_H_
