
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTaskDetailResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTaskDetailResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/WorkflowTask.h>
#include <string>
#include <huaweicloud/vod/v1/model/EditMediaTask.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowTaskDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaskDetailResponse();
    virtual ~ShowTaskDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaskDetailResponse members

    /// <summary>
    /// 任务Id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 任务状态，包含就绪，处理中，成功，失败，已取消
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 任务开始时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务开始处理时间，多个任务则是第一个任务的开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务处理结束时间，多个任务则是最后一个任务的结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WorkflowTask getWorkflowTask() const;
    bool workflowTaskIsSet() const;
    void unsetworkflowTask();
    void setWorkflowTask(const WorkflowTask& value);

    /// <summary>
    /// 
    /// </summary>

    EditMediaTask getEditMediaTask() const;
    bool editMediaTaskIsSet() const;
    void unseteditMediaTask();
    void setEditMediaTask(const EditMediaTask& value);

    /// <summary>
    /// 用户自定义数据
    /// </summary>

    std::string getSessionContext() const;
    bool sessionContextIsSet() const;
    void unsetsessionContext();
    void setSessionContext(const std::string& value);

    /// <summary>
    /// 客户回调地址
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    WorkflowTask workflowTask_;
    bool workflowTaskIsSet_;
    EditMediaTask editMediaTask_;
    bool editMediaTaskIsSet_;
    std::string sessionContext_;
    bool sessionContextIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowTaskDetailResponse_H_
