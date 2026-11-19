
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSessionSummaryUseOpsTunnelResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSessionSummaryUseOpsTunnelResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowSessionSummaryUseOpsTunnelResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSessionSummaryUseOpsTunnelResponse();
    virtual ~ShowSessionSummaryUseOpsTunnelResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSessionSummaryUseOpsTunnelResponse members

    /// <summary>
    /// **参数解释**: 活跃会话数量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getActiveCount() const;
    bool activeCountIsSet() const;
    void unsetactiveCount();
    void setActiveCount(int32_t value);

    /// <summary>
    /// **参数解释**: 会话总数量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**: 最大SQL执行时间。单位：秒。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMaxQueryTimeCost() const;
    bool maxQueryTimeCostIsSet() const;
    void unsetmaxQueryTimeCost();
    void setMaxQueryTimeCost(int32_t value);

    /// <summary>
    /// **参数解释**: 最大事务执行时间。单位：秒。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getMaxTransactionTimeCost() const;
    bool maxTransactionTimeCostIsSet() const;
    void unsetmaxTransactionTimeCost();
    void setMaxTransactionTimeCost(int32_t value);


protected:
    int32_t activeCount_;
    bool activeCountIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t maxQueryTimeCost_;
    bool maxQueryTimeCostIsSet_;
    int32_t maxTransactionTimeCost_;
    bool maxTransactionTimeCostIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowSessionSummaryUseOpsTunnelResponse_H_
