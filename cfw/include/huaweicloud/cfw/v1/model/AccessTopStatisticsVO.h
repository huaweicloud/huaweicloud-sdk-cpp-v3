
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopStatisticsVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopStatisticsVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AccessTopStatisticsVO
    : public ModelBase
{
public:
    AccessTopStatisticsVO();
    virtual ~AccessTopStatisticsVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessTopStatisticsVO members

    /// <summary>
    /// **参数解释**： 聚合时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getAggTime() const;
    bool aggTimeIsSet() const;
    void unsetaggTime();
    void setAggTime(int64_t value);

    /// <summary>
    /// **参数解释**： 阻断数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getDenyAccessTopCounts() const;
    bool denyAccessTopCountsIsSet() const;
    void unsetdenyAccessTopCounts();
    void setDenyAccessTopCounts(int64_t value);

    /// <summary>
    /// **参数解释**： 放行数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getPermitAccessTopCounts() const;
    bool permitAccessTopCountsIsSet() const;
    void unsetpermitAccessTopCounts();
    void setPermitAccessTopCounts(int64_t value);

    /// <summary>
    /// **参数解释**： 命中次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getTotalAccessTopCounts() const;
    bool totalAccessTopCountsIsSet() const;
    void unsettotalAccessTopCounts();
    void setTotalAccessTopCounts(int64_t value);


protected:
    int64_t aggTime_;
    bool aggTimeIsSet_;
    int64_t denyAccessTopCounts_;
    bool denyAccessTopCountsIsSet_;
    int64_t permitAccessTopCounts_;
    bool permitAccessTopCountsIsSet_;
    int64_t totalAccessTopCounts_;
    bool totalAccessTopCountsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopStatisticsVO_H_
