
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowTrendVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowTrendVO_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  FlowTrendVO
    : public ModelBase
{
public:
    FlowTrendVO();
    virtual ~FlowTrendVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowTrendVO members

    /// <summary>
    /// **参数解释**： 聚合时间点 **取值范围**： 不涉及
    /// </summary>

    int64_t getAggTime() const;
    bool aggTimeIsSet() const;
    void unsetaggTime();
    void setAggTime(int64_t value);

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


protected:
    int64_t aggTime_;
    bool aggTimeIsSet_;
    double inBps_;
    bool inBpsIsSet_;
    double outBps_;
    bool outBpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_FlowTrendVO_H_
