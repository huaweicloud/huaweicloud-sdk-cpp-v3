
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingQuotasResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingQuotasResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/modelarts/v1/model/TrainingQuotaResponse.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTrainingQuotasResponse();
    virtual ~ShowTrainingQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingQuotasResponse members

    /// <summary>
    /// **参数解释**：训练作业配额组。
    /// </summary>

    std::vector<TrainingQuotaResponse>& getQuotas();
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const std::vector<TrainingQuotaResponse>& value);


protected:
    std::vector<TrainingQuotaResponse> quotas_;
    bool quotasIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingQuotasResponse_H_
