
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_WorkflowTask_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_WorkflowTask_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <vector>
#include <huaweicloud/vod/v1/model/ObjectTaskResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  WorkflowTask
    : public ModelBase
{
public:
    WorkflowTask();
    virtual ~WorkflowTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowTask members

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsInfo& value);

    /// <summary>
    /// 工作流任务结果列表
    /// </summary>

    std::vector<ObjectTaskResult>& getTaskResult();
    bool taskResultIsSet() const;
    void unsettaskResult();
    void setTaskResult(const std::vector<ObjectTaskResult>& value);


protected:
    ObsInfo input_;
    bool inputIsSet_;
    std::vector<ObjectTaskResult> taskResult_;
    bool taskResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_WorkflowTask_H_
