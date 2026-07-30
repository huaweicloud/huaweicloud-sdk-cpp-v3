
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingQuotaResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingQuotaResponse_H_


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
/// **参数解释**：训练用户配额响应体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TrainingQuotaResponse
    : public ModelBase
{
public:
    TrainingQuotaResponse();
    virtual ~TrainingQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrainingQuotaResponse members

    /// <summary>
    /// **参数解释**：配额的资源类型，当前支持：job-num，作业的个数配额。 **取值范围**：不涉及。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// **参数解释**：配额个数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// **参数解释**：已使用的个数。 **取值范围**：不涉及。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);


protected:
    std::string resource_;
    bool resourceIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t used_;
    bool usedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TrainingQuotaResponse_H_
