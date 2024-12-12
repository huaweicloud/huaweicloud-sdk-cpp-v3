
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_pay_info_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_pay_info_H_


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
/// 支付信息。包周期场景必填。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  StarRocksCreateRequest_pay_info
    : public ModelBase
{
public:
    StarRocksCreateRequest_pay_info();
    virtual ~StarRocksCreateRequest_pay_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StarRocksCreateRequest_pay_info members

    /// <summary>
    /// 计费模式，默认0。包周期场景必填。 取值范围： - 0：按需计费 - 1：包周期
    /// </summary>

    std::string getPayModel() const;
    bool payModelIsSet() const;
    void unsetpayModel();
    void setPayModel(const std::string& value);

    /// <summary>
    /// 包周期周期。包周期场景必填。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 包周期周期类型。包周期场景必填。 取值范围： - 2：包月 - 3：包年
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 包周期是否自动续费。包周期场景必填。 取值范围： - 1：自动续费 - 0：不自动续费
    /// </summary>

    std::string getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(const std::string& value);


protected:
    std::string payModel_;
    bool payModelIsSet_;
    std::string period_;
    bool periodIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    std::string isAutoRenew_;
    bool isAutoRenewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_StarRocksCreateRequest_pay_info_H_
