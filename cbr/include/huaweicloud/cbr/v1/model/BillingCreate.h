
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BillingCreate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BillingCreate_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建参数
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BillingCreate
    : public ModelBase
{
public:
    BillingCreate();
    virtual ~BillingCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BillingCreate members

    /// <summary>
    /// 云平台，公有云或者混合云
    /// </summary>

    std::string getCloudType() const;
    bool cloudTypeIsSet() const;
    void unsetcloudType();
    void setCloudType(const std::string& value);

    /// <summary>
    /// 规格，崩溃一致性（crash_consistent）或应用一致性（app_consistent）
    /// </summary>

    std::string getConsistentLevel() const;
    bool consistentLevelIsSet() const;
    void unsetconsistentLevel();
    void setConsistentLevel(const std::string& value);

    /// <summary>
    /// 对象类型：云服务器（server），云硬盘（disk），文件系统（turbo），云桌面（workspace），VMware（vmware），关系型数据库（rds），文件（file）。
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 保护类型：备份（backup）、复制(replication)
    /// </summary>

    std::string getProtectType() const;
    bool protectTypeIsSet() const;
    void unsetprotectType();
    void setProtectType(const std::string& value);

    /// <summary>
    /// 容量，单位GB
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 创建模式，按需：post_paid，包周期：pre_paid，默认为post_paid
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 创建类型，charging_mode为pre_paid必填，按年(year)或者按月(month)
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 创建类型的数量，charging_mode为pre_paid必填
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 到期后是否自动续期，默认不续期
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// 是否自动付费，默认为不自动付费
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// 跳转URL
    /// </summary>

    std::string getConsoleUrl() const;
    bool consoleUrlIsSet() const;
    void unsetconsoleUrl();
    void setConsoleUrl(const std::string& value);

    /// <summary>
    /// 存储库多az属性，默认为false
    /// </summary>

    bool isIsMultiAz() const;
    bool isMultiAzIsSet() const;
    void unsetisMultiAz();
    void setIsMultiAz(bool value);

    /// <summary>
    /// 促销信息，包周期时可选参数
    /// </summary>

    std::string getPromotionInfo() const;
    bool promotionInfoIsSet() const;
    void unsetpromotionInfo();
    void setPromotionInfo(const std::string& value);

    /// <summary>
    /// 购买模式，包周期时可选参数
    /// </summary>

    std::string getPurchaseMode() const;
    bool purchaseModeIsSet() const;
    void unsetpurchaseMode();
    void setPurchaseMode(const std::string& value);

    /// <summary>
    /// 订单 ID，包周期时可选参数
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);


protected:
    std::string cloudType_;
    bool cloudTypeIsSet_;
    std::string consistentLevel_;
    bool consistentLevelIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string protectType_;
    bool protectTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    bool isAutoRenew_;
    bool isAutoRenewIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;
    std::string consoleUrl_;
    bool consoleUrlIsSet_;
    bool isMultiAz_;
    bool isMultiAzIsSet_;
    std::string promotionInfo_;
    bool promotionInfoIsSet_;
    std::string purchaseMode_;
    bool purchaseModeIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BillingCreate_H_
