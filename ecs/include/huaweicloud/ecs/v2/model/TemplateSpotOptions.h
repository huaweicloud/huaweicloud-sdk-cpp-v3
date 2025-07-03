
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateSpotOptions_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateSpotOptions_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 竞价计费信息
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateSpotOptions
    : public ModelBase
{
public:
    TemplateSpotOptions();
    virtual ~TemplateSpotOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateSpotOptions members

    /// <summary>
    /// 用户愿意为竞价实例每小时支付的最高价格
    /// </summary>

    float getSpotPrice() const;
    bool spotPriceIsSet() const;
    void unsetspotPrice();
    void setSpotPrice(float value);

    /// <summary>
    /// 购买的竞价实例时长
    /// </summary>

    int32_t getBlockDurationMinutes() const;
    bool blockDurationMinutesIsSet() const;
    void unsetblockDurationMinutes();
    void setBlockDurationMinutes(int32_t value);

    /// <summary>
    /// 竞价实例中断策略，当前支持immediate
    /// </summary>

    std::string getInstanceInterruptionBehavior() const;
    bool instanceInterruptionBehaviorIsSet() const;
    void unsetinstanceInterruptionBehavior();
    void setInstanceInterruptionBehavior(const std::string& value);


protected:
    float spotPrice_;
    bool spotPriceIsSet_;
    int32_t blockDurationMinutes_;
    bool blockDurationMinutesIsSet_;
    std::string instanceInterruptionBehavior_;
    bool instanceInterruptionBehaviorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateSpotOptions_H_
