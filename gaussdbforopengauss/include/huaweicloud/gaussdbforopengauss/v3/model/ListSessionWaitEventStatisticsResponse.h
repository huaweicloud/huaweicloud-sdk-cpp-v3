
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionWaitEventStatisticsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionWaitEventStatisticsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/SessionWaitEventStatisticInfo.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSessionWaitEventStatisticsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSessionWaitEventStatisticsResponse();
    virtual ~ListSessionWaitEventStatisticsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSessionWaitEventStatisticsResponse members

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

    std::vector<SessionWaitEventStatisticInfo>& getWaitEventInfo();
    bool waitEventInfoIsSet() const;
    void unsetwaitEventInfo();
    void setWaitEventInfo(const std::vector<SessionWaitEventStatisticInfo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SessionWaitEventStatisticInfo> waitEventInfo_;
    bool waitEventInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSessionWaitEventStatisticsResponse_H_
