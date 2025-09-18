
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StateInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StateInfo_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartsdeploy/v2/model/StepInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务基本信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  StateInfo
    : public ModelBase
{
public:
    StateInfo();
    virtual ~StateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StateInfo members

    /// <summary>
    /// 任务执行状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 执行记录id
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 步骤状态
    /// </summary>

    std::string getStep() const;
    bool stepIsSet() const;
    void unsetstep();
    void setStep(const std::string& value);

    /// <summary>
    /// 开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 执行人
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 子步骤信息
    /// </summary>

    std::vector<StepInfo>& getStepState();
    bool stepStateIsSet() const;
    void unsetstepState();
    void setStepState(const std::vector<StepInfo>& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    std::string recordId_;
    bool recordIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string step_;
    bool stepIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string executor_;
    bool executorIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::vector<StepInfo> stepState_;
    bool stepStateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_StateInfo_H_
