
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckTrainingExperimentResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckTrainingExperimentResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CheckTrainingExperimentResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckTrainingExperimentResponse();
    virtual ~CheckTrainingExperimentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckTrainingExperimentResponse members

    /// <summary>
    /// **参数解释**：是否重复。 **约束限制**：不涉及。 **取值范围**： - true：重复 - false：不重复  **默认取值**：不涉及。
    /// </summary>

    bool isIsDuplicate() const;
    bool isDuplicateIsSet() const;
    void unsetisDuplicate();
    void setIsDuplicate(bool value);


protected:
    bool isDuplicate_;
    bool isDuplicateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CheckTrainingExperimentResponse_H_
