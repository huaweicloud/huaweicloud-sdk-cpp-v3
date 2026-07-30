
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetScaleEvaluationsDevServerResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetScaleEvaluationsDevServerResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerScaleEvaluation.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GetScaleEvaluationsDevServerResponse
    : public ModelBase, public HttpResponse
{
public:
    GetScaleEvaluationsDevServerResponse();
    virtual ~GetScaleEvaluationsDevServerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetScaleEvaluationsDevServerResponse members

    /// <summary>
    /// **参数解释**：规格容量保有情况 **约束限制**：不涉及 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<ServerScaleEvaluation>& getEvaluations();
    bool evaluationsIsSet() const;
    void unsetevaluations();
    void setEvaluations(const std::vector<ServerScaleEvaluation>& value);


protected:
    std::vector<ServerScaleEvaluation> evaluations_;
    bool evaluationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetScaleEvaluationsDevServerResponse_H_
