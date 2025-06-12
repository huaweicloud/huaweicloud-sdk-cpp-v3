
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PublicCloudServiceOrder_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PublicCloudServiceOrder_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PublicCloudServiceOrder
    : public ModelBase
{
public:
    PublicCloudServiceOrder();
    virtual ~PublicCloudServiceOrder();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PublicCloudServiceOrder members

    /// <summary>
    /// 是否自动支付：下单订购后，是否自动从客户的华为云账户中支付，而不需要客户手动去进行支付；  1：是（会自动选择折扣和优惠券进行优惠，然后自动从客户华为云账户中支付），自动支付失败后会生成订单成功(该订单应付金额是优惠后金额)、但订单状态为“待支付”，等待客户手动支付(手动支付时，客户还可以修改系统自动选择的折扣和优惠券)。 0：否（需要客户手动去支付，客户可以选择折扣和优惠券）。 默认值为“0”。
    /// </summary>

    int32_t getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(int32_t value);

    /// <summary>
    /// 订购周期类型： 2：月； 3：年； 6：一次性;
    /// </summary>

    int32_t getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(int32_t value);

    /// <summary>
    /// 订购周期数 取值大于0；小于等于0会报错
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 是否自动续订，为空时表示不自动续订； 1：自动续订 0：不自动续订（默认）
    /// </summary>

    int32_t getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(int32_t value);

    /// <summary>
    /// 订购数量； 取值大于0
    /// </summary>

    int32_t getSubscriptionNum() const;
    bool subscriptionNumIsSet() const;
    void unsetsubscriptionNum();
    void setSubscriptionNum(int32_t value);

    /// <summary>
    /// 用户购买云服务产品的资源规格，详见[资源类型](metastudio_02_0042.xml)。
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);


protected:
    int32_t isAutoPay_;
    bool isAutoPayIsSet_;
    int32_t periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    int32_t isAutoRenew_;
    bool isAutoRenewIsSet_;
    int32_t subscriptionNum_;
    bool subscriptionNumIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PublicCloudServiceOrder_H_
