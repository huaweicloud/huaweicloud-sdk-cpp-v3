
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowGlobalSlowSqlDetailResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowGlobalSlowSqlDetailResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/SlowSqlDetailResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowGlobalSlowSqlDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowGlobalSlowSqlDetailResponse();
    virtual ~ShowGlobalSlowSqlDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGlobalSlowSqlDetailResponse members

    /// <summary>
    /// **参数解释**: 慢SQL详情列表。
    /// </summary>

    std::vector<SlowSqlDetailResult>& getSlowSqlDetails();
    bool slowSqlDetailsIsSet() const;
    void unsetslowSqlDetails();
    void setSlowSqlDetails(const std::vector<SlowSqlDetailResult>& value);

    /// <summary>
    /// **参数解释**: 返回的慢SQL数量。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<SlowSqlDetailResult> slowSqlDetails_;
    bool slowSqlDetailsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowGlobalSlowSqlDetailResponse_H_
