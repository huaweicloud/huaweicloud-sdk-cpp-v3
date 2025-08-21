
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_TrendVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_TrendVO_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  TrendVO
    : public ModelBase
{
public:
    TrendVO();
    virtual ~TrendVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrendVO members

    /// <summary>
    /// **参数解释**： 聚合时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getAggTime() const;
    bool aggTimeIsSet() const;
    void unsetaggTime();
    void setAggTime(int64_t value);

    /// <summary>
    /// **参数解释**： 带宽 **取值范围**： 不涉及
    /// </summary>

    double getBps() const;
    bool bpsIsSet() const;
    void unsetbps();
    void setBps(double value);

    /// <summary>
    /// **参数解释**： 阻断数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getDeny() const;
    bool denyIsSet() const;
    void unsetdeny();
    void setDeny(int64_t value);

    /// <summary>
    /// **参数解释**： 入方向bps **取值范围**： 不涉及
    /// </summary>

    double getInBps() const;
    bool inBpsIsSet() const;
    void unsetinBps();
    void setInBps(double value);

    /// <summary>
    /// **参数解释**： 出方向bps **取值范围**： 不涉及
    /// </summary>

    double getOutBps() const;
    bool outBpsIsSet() const;
    void unsetoutBps();
    void setOutBps(double value);

    /// <summary>
    /// **参数解释**： 允许数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getPermit() const;
    bool permitIsSet() const;
    void unsetpermit();
    void setPermit(int64_t value);


protected:
    int64_t aggTime_;
    bool aggTimeIsSet_;
    double bps_;
    bool bpsIsSet_;
    int64_t deny_;
    bool denyIsSet_;
    double inBps_;
    bool inBpsIsSet_;
    double outBps_;
    bool outBpsIsSet_;
    int64_t permit_;
    bool permitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_TrendVO_H_
