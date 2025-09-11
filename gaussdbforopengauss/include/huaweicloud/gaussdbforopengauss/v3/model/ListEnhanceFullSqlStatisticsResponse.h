
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlStatisticsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlStatisticsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/FullSqlStatisticInfoResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListEnhanceFullSqlStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEnhanceFullSqlStatisticsResponse();
    virtual ~ListEnhanceFullSqlStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnhanceFullSqlStatisticsResponse members

    /// <summary>
    /// **参数解释**: 全量SQL聚合统计列表总数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// **参数解释**: 全量SQL聚合统计列表。
    /// </summary>

    std::vector<FullSqlStatisticInfoResult>& getStatistics();
    bool statisticsIsSet() const;
    void unsetstatistics();
    void setStatistics(const std::vector<FullSqlStatisticInfoResult>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<FullSqlStatisticInfoResult> statistics_;
    bool statisticsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlStatisticsResponse_H_
