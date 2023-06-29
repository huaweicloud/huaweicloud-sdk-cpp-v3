
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_EditingJob_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_EditingJob_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/CommonTaskMeta.h>
#include <huaweicloud/mpc/v1/model/CreateEditingJobReq.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/OutputFileInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  EditingJob
    : public ModelBase
{
public:
    EditingJob();
    virtual ~EditingJob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EditingJob members

    /// <summary>
    /// 任务ID 
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务状态。  取值如下： - INIT：初始状态。 - WAITING：等待启动。 - PROCESSING：处理中。 - SUCCEED：处理成功。 - FAILED：处理失败。 - CANCELED：已取消。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务创建时间 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务启动时间 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务结束时间 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务的返回码。 
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误描述 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 用户数据。 
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 任务ID 
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 剪辑任务类型。取值如下：\&quot;CLIP\&quot;,\&quot;CONCAT\&quot;,\&quot;CONCATS\&quot;,\&quot;MIX\&quot;。
    /// </summary>

    std::vector<std::string>& getEditType();
    bool editTypeIsSet() const;
    void unseteditType();
    void setEditType(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    CreateEditingJobReq getEditTaskReq() const;
    bool editTaskReqIsSet() const;
    void unseteditTaskReq();
    void setEditTaskReq(const CreateEditingJobReq& value);

    /// <summary>
    /// 剪辑输出meta信息
    /// </summary>

    std::vector<OutputFileInfo>& getOutputFileInfo();
    bool outputFileInfoIsSet() const;
    void unsetoutputFileInfo();
    void setOutputFileInfo(const std::vector<OutputFileInfo>& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::vector<std::string> editType_;
    bool editTypeIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    CreateEditingJobReq editTaskReq_;
    bool editTaskReqIsSet_;
    std::vector<OutputFileInfo> outputFileInfo_;
    bool outputFileInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_EditingJob_H_
