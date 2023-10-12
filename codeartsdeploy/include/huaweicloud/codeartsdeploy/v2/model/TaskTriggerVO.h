
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskTriggerVO_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskTriggerVO_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  TaskTriggerVO
    : public ModelBase
{
public:
    TaskTriggerVO();
    virtual ~TaskTriggerVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskTriggerVO members

    /// <summary>
    /// 部署任务允许执行的场景。其中0：所有执行请求均可，1：只允许流水线触发
    /// </summary>

    std::string getTriggerSource() const;
    bool triggerSourceIsSet() const;
    void unsettriggerSource();
    void setTriggerSource(const std::string& value);

    /// <summary>
    /// 当任务只允许流水线触发执行时，流水线传递的来源信息，当前只有CloudArtifact
    /// </summary>

    std::string getArtifactSourceSystem() const;
    bool artifactSourceSystemIsSet() const;
    void unsetartifactSourceSystem();
    void setArtifactSourceSystem(const std::string& value);

    /// <summary>
    /// 当任务只允许流水线触发执行时，对应流水线源的制品仓库类型（generic、docker）
    /// </summary>

    std::string getArtifactType() const;
    bool artifactTypeIsSet() const;
    void unsetartifactType();
    void setArtifactType(const std::string& value);


protected:
    std::string triggerSource_;
    bool triggerSourceIsSet_;
    std::string artifactSourceSystem_;
    bool artifactSourceSystemIsSet_;
    std::string artifactType_;
    bool artifactTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_TaskTriggerVO_H_
