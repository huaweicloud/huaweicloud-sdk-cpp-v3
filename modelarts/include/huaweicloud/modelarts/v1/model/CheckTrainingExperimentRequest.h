
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckTrainingExperimentRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckTrainingExperimentRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CheckTrainingExperimentRequest
    : public ModelBase
{
public:
    CheckTrainingExperimentRequest();
    virtual ~CheckTrainingExperimentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckTrainingExperimentRequest members

    /// <summary>
    /// **参数解释**：工作空间ID。获取方法请参见[查询工作空间列表](ListWorkspace.xml)。 **约束限制**：存在并使用的工作空间。 **取值范围**：不涉及。 **默认取值**：“0”。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：实验名称。 **约束限制**：最大长度64，不支持特殊字符。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getExperimentName() const;
    bool experimentNameIsSet() const;
    void unsetexperimentName();
    void setExperimentName(const std::string& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string experimentName_;
    bool experimentNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckTrainingExperimentRequest& dereference_from_shared_ptr(std::shared_ptr<CheckTrainingExperimentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckTrainingExperimentRequest_H_
