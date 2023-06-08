
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModePrepaidOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModePrepaidOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerChargeModePrepaidOption
    : public ModelBase
{
public:
    ChangeServerChargeModePrepaidOption();
    virtual ~ChangeServerChargeModePrepaidOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeServerChargeModePrepaidOption members

    /// <summary>
    /// 是否连同支持的按需数据盘一起转为包周期。 当参数为true，包括按需非共享的数据盘，不包括共享云硬盘，DSS和DESS硬盘 默认值为false
    /// </summary>

    bool isIncludeDataDisks() const;
    bool includeDataDisksIsSet() const;
    void unsetincludeDataDisks();
    void setIncludeDataDisks(bool value);

    /// <summary>
    /// 是否连同弹性公网IP一起转为包周期 只有“独享”、“按带宽计费”的弹性公网IP才可以转换为包周期计费模式 默认值为false
    /// </summary>

    bool isIncludePublicips() const;
    bool includePublicipsIsSet() const;
    void unsetincludePublicips();
    void setIncludePublicips(bool value);

    /// <summary>
    /// 订购周期类型，取值范围： month-月 year-年
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 订购周期的周期数。 取值范围： period_type&#x3D;month时，取值范围为[1,9]。 period_type&#x3D;year时，取值范围为[1,3]。
    /// </summary>

    std::string getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(const std::string& value);

    /// <summary>
    /// 是否自动支付。 true：自动支付，需要确保账户余额充足，如果余额不足则会生成异常订单，只能作废此订单 false：只生成订单不扣费 默认值为false
    /// </summary>

    bool isAutoPay() const;
    bool autoPayIsSet() const;
    void unsetautoPay();
    void setAutoPay(bool value);

    /// <summary>
    /// 是否自动续费。默认值：false
    /// </summary>

    bool isAutoRenew() const;
    bool autoRenewIsSet() const;
    void unsetautoRenew();
    void setAutoRenew(bool value);


protected:
    bool includeDataDisks_;
    bool includeDataDisksIsSet_;
    bool includePublicips_;
    bool includePublicipsIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    std::string periodNum_;
    bool periodNumIsSet_;
    bool autoPay_;
    bool autoPayIsSet_;
    bool autoRenew_;
    bool autoRenewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerChargeModePrepaidOption_H_
