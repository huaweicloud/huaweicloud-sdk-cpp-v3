
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ChargeInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ChargeInfoResult_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 付费方式信息，与请求参数相同。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ChargeInfoResult
    : public ModelBase
{
public:
    ChargeInfoResult();
    virtual ~ChargeInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChargeInfoResult members

    /// <summary>
    /// 计费模式。 取值范围：   - prePaid：预付费，即包年/包月。   - postPaid：后付费，即按需付费。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 订购周期类型。 “charge_mode”为“prePaid”时生效，且为必选值。 取值范围：   - month：包月。   - year：包年。
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// “charge_mode”为“prePaid”时生效，且为必选值，指定订购的时间。 取值范围：   - 当“period_type”为“month”时，取值为1~9。   - 当“period_type”为“year”时，取值为1~3
    /// </summary>

    std::string getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(const std::string& value);

    /// <summary>
    /// 创建包周期实例时可指定，表示是否自动续订，续订的周期和原周期相同，且续订时会自动支付。 取值范围：   - true，表示自动续订。   - false，表示不自动续订，默认为该方式。
    /// </summary>

    std::string getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(const std::string& value);

    /// <summary>
    /// 创建包周期实例时可指定，表示是否自动从账户中支付，该字段不影响自动续订的支付方式。 取值范围：   - true，表示自动从账户中支付   - false，表示手动从账户中支付，默认为该支付方式。
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    std::string periodNum_;
    bool periodNumIsSet_;
    std::string isAutoRenew_;
    bool isAutoRenewIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ChargeInfoResult_H_
