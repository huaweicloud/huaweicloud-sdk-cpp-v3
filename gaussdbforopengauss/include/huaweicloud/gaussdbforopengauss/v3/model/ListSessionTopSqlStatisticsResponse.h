
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionTopSqlStatisticsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionTopSqlStatisticsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbforopengauss/v3/model/SessionTopSqlStatisticInfo.h>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSessionTopSqlStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSessionTopSqlStatisticsResponse();
    virtual ~ListSessionTopSqlStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSessionTopSqlStatisticsResponse members

    /// <summary>
    /// **参数解释**: 统计总条数。 **取值范围**: 不涉及。 
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**: 统计数据。 
    /// </summary>

    std::vector<SessionTopSqlStatisticInfo>& getTopSqlInfo();
    bool topSqlInfoIsSet() const;
    void unsettopSqlInfo();
    void setTopSqlInfo(const std::vector<SessionTopSqlStatisticInfo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SessionTopSqlStatisticInfo> topSqlInfo_;
    bool topSqlInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionTopSqlStatisticsResponse_H_
