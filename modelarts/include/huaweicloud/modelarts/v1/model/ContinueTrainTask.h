
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContinueTrainTask_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContinueTrainTask_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ContinueTrainTask
    : public ModelBase
{
public:
    ContinueTrainTask();
    virtual ~ContinueTrainTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContinueTrainTask members

    /// <summary>
    /// 中间产物id。
    /// </summary>

    std::string getCheckpointId() const;
    bool checkpointIdIsSet() const;
    void unsetcheckpointId();
    void setCheckpointId(const std::string& value);

    /// <summary>
    /// 续训任务id。
    /// </summary>

    std::string getContinueTaskId() const;
    bool continueTaskIdIsSet() const;
    void unsetcontinueTaskId();
    void setContinueTaskId(const std::string& value);

    /// <summary>
    /// 续训任务名称。
    /// </summary>

    std::string getContinueTaskName() const;
    bool continueTaskNameIsSet() const;
    void unsetcontinueTaskName();
    void setContinueTaskName(const std::string& value);

    /// <summary>
    /// 续训训练类型。
    /// </summary>

    std::string getContinueTrainType() const;
    bool continueTrainTypeIsSet() const;
    void unsetcontinueTrainType();
    void setContinueTrainType(const std::string& value);

    /// <summary>
    /// 跳过步数，0表示不跳过。
    /// </summary>

    int32_t getSkippedSteps() const;
    bool skippedStepsIsSet() const;
    void unsetskippedSteps();
    void setSkippedSteps(int32_t value);

    /// <summary>
    /// 是否续训任务。 0: 非续训, 1:续训。
    /// </summary>

    int32_t getRestoreTraining() const;
    bool restoreTrainingIsSet() const;
    void unsetrestoreTraining();
    void setRestoreTraining(int32_t value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 中间产物配置信息。
    /// </summary>

    std::string getCheckpointConfig() const;
    bool checkpointConfigIsSet() const;
    void unsetcheckpointConfig();
    void setCheckpointConfig(const std::string& value);


protected:
    std::string checkpointId_;
    bool checkpointIdIsSet_;
    std::string continueTaskId_;
    bool continueTaskIdIsSet_;
    std::string continueTaskName_;
    bool continueTaskNameIsSet_;
    std::string continueTrainType_;
    bool continueTrainTypeIsSet_;
    int32_t skippedSteps_;
    bool skippedStepsIsSet_;
    int32_t restoreTraining_;
    bool restoreTrainingIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string checkpointConfig_;
    bool checkpointConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContinueTrainTask_H_
