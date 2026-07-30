
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingExperimentDetailsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingExperimentDetailsRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingExperimentDetailsRequest
    : public ModelBase
{
public:
    ShowTrainingExperimentDetailsRequest();
    virtual ~ShowTrainingExperimentDetailsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingExperimentDetailsRequest members

    /// <summary>
    /// **参数解释**：实验ID。创建训练实验时自动生成返回。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getExperimentId() const;
    bool experimentIdIsSet() const;
    void unsetexperimentId();
    void setExperimentId(const std::string& value);


protected:
    std::string experimentId_;
    bool experimentIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTrainingExperimentDetailsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTrainingExperimentDetailsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingExperimentDetailsRequest_H_
