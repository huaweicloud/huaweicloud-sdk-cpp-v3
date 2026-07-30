
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowPolicy_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowPolicy_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Scene.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作流策略。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkflowPolicy
    : public ModelBase
{
public:
    WorkflowPolicy();
    virtual ~WorkflowPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkflowPolicy members

    /// <summary>
    /// 使用场景。
    /// </summary>

    std::string getUseScene() const;
    bool useSceneIsSet() const;
    void unsetuseScene();
    void setUseScene(const std::string& value);

    /// <summary>
    /// 场景ID。
    /// </summary>

    std::string getSceneId() const;
    bool sceneIdIsSet() const;
    void unsetsceneId();
    void setSceneId(const std::string& value);

    /// <summary>
    /// 场景。
    /// </summary>

    std::vector<Scene>& getScenes();
    bool scenesIsSet() const;
    void unsetscenes();
    void setScenes(const std::vector<Scene>& value);


protected:
    std::string useScene_;
    bool useSceneIsSet_;
    std::string sceneId_;
    bool sceneIdIsSet_;
    std::vector<Scene> scenes_;
    bool scenesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkflowPolicy_H_
