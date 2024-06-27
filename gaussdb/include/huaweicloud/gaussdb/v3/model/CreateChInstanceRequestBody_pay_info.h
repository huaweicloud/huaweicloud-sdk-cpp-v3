
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_pay_info_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_pay_info_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 支付信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateChInstanceRequestBody_pay_info
    : public ModelBase
{
public:
    CreateChInstanceRequestBody_pay_info();
    virtual ~CreateChInstanceRequestBody_pay_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateChInstanceRequestBody_pay_info members

    /// <summary>
    /// 计费模式，默认0。 取值范围： - 0：按需计费 - 1：包周期
    /// </summary>

    std::string getPayModel() const;
    bool payModelIsSet() const;
    void unsetpayModel();
    void setPayModel(const std::string& value);

    /// <summary>
    /// 包周期计费ID。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 包周期周期。
    /// </summary>

    int32_t getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(int32_t value);

    /// <summary>
    /// 包周期周期类型。 取值范围： - 2：包月 - 3：包年
    /// </summary>

    int32_t getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(int32_t value);

    /// <summary>
    /// 包周期是否自动续费。 取值范围： - 1：自动续费 - 0：不自动续费
    /// </summary>

    int32_t getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(int32_t value);


protected:
    std::string payModel_;
    bool payModelIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    int32_t period_;
    bool periodIsSet_;
    int32_t periodType_;
    bool periodTypeIsSet_;
    int32_t isAutoRenew_;
    bool isAutoRenewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateChInstanceRequestBody_pay_info_H_
