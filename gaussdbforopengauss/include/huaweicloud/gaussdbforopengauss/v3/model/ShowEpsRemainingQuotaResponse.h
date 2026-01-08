
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowEpsRemainingQuotaResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowEpsRemainingQuotaResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/EpsRemainingQuotaResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowEpsRemainingQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowEpsRemainingQuotaResponse();
    virtual ~ShowEpsRemainingQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEpsRemainingQuotaResponse members

    /// <summary>
    /// **参数解释**: 剩余企业项目配额组。
    /// </summary>

    std::vector<EpsRemainingQuotaResult>& getEpsRemainingQuotas();
    bool epsRemainingQuotasIsSet() const;
    void unsetepsRemainingQuotas();
    void setEpsRemainingQuotas(const std::vector<EpsRemainingQuotaResult>& value);

    /// <summary>
    /// **参数解释**: 任务ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**: 返回的企业项目个数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<EpsRemainingQuotaResult> epsRemainingQuotas_;
    bool epsRemainingQuotasIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowEpsRemainingQuotaResponse_H_
