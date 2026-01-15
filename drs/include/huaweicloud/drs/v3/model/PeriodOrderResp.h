
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PeriodOrderResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PeriodOrderResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 详情返回包周期信息体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PeriodOrderResp
    : public ModelBase
{
public:
    PeriodOrderResp();
    virtual ~PeriodOrderResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PeriodOrderResp members

    /// <summary>
    /// 订单状态 INITIALIZATION：初始化，AWAITING_AUDIT：待审核，AWAITING_REFUND：待退款，PROCESSING：处理中，CANCELED：已取消，COMPLETED：已完成，AWAITING_PAID：待付款，AWAITING_APPROVE：待审批，UNORDERED：未下单，FROZEN_CAN_RENEW：冻结可续费，FROZEN_CAN_UNSUBSCRIBE：冻结可退订，FROZEN_POLICE：公安冻结，FROZEN_CAN_RENEW_FREE：冻结可续费 可结束，FROZEN_CAN_FREE：冻结可结束，LOCK_RESOURCE：限制资源锁定
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 订单ID
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 计费模式
    /// </summary>

    int32_t getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(int32_t value);

    /// <summary>
    /// 订购包周期类型
    /// </summary>

    int32_t getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(int32_t value);

    /// <summary>
    /// 订购周期数
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 是否自动续费
    /// </summary>

    int32_t getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(int32_t value);

    /// <summary>
    /// 资源生效时间（即资源创建时间）
    /// </summary>

    std::string getEffTime() const;
    bool effTimeIsSet() const;
    void unseteffTime();
    void setEffTime(const std::string& value);

    /// <summary>
    /// 到期时间
    /// </summary>

    std::string getExpTime() const;
    bool expTimeIsSet() const;
    void unsetexpTime();
    void setExpTime(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    int32_t chargingMode_;
    bool chargingModeIsSet_;
    int32_t periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    int32_t isAutoRenew_;
    bool isAutoRenewIsSet_;
    std::string effTime_;
    bool effTimeIsSet_;
    std::string expTime_;
    bool expTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PeriodOrderResp_H_
