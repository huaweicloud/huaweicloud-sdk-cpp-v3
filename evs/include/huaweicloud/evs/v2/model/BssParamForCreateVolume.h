
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BssParamForCreateVolume_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BssParamForCreateVolume_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包周期创卷的计费策略参数。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  BssParamForCreateVolume
    : public ModelBase
{
public:
    BssParamForCreateVolume();
    virtual ~BssParamForCreateVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BssParamForCreateVolume members

    /// <summary>
    /// 功能说明：计费模式。默认值为postPaid。 取值范围： * prePaid：包年包月 * postPaid：按需
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 功能说明：是否立即支付。chargingMode为PrePaid时该参数会生效。默认值为false。 取值范围： * true：立即支付，从帐户余额中自动扣费 * false：不立即支付，创建订单暂不支付 
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);

    /// <summary>
    /// 功能说明：是否自动续订。chargingMode为prePaid时该参数会生效。默认值为false。 取值范围： * true：自动续订，自动续订周期与订购周期相同 * false：不自动续订 
    /// </summary>

    std::string getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(const std::string& value);

    /// <summary>
    /// 功能说明：订购周期数，chargingMode为prePaid时该参数会生效，并且该参数为为必选。 取值范围： * periodType为month时，为[1-9] * periodType为year时，为[1-1]
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 功能说明：订购周期单位。chargingMode为prePaid时该参数会生效，并且该参数为必选。 取值范围： * month：月 * year：年
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);


protected:
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;
    std::string isAutoRenew_;
    bool isAutoRenewIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BssParamForCreateVolume_H_
