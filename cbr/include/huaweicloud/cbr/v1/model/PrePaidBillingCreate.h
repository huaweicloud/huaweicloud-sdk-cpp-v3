
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PrePaidBillingCreate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PrePaidBillingCreate_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  PrePaidBillingCreate
    : public ModelBase
{
public:
    PrePaidBillingCreate();
    virtual ~PrePaidBillingCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrePaidBillingCreate members

    /// <summary>
    /// 云类型，默认为public，支持类型如下。 [public：公有云; hybrid: 混合云](tag:hws,hws_hk,ctc) [public：公有云](tag:dt,ocb,tlf,sbc,g42,tm,hk_g42)
    /// </summary>

    std::string getCloudType() const;
    bool cloudTypeIsSet() const;
    void unsetcloudType();
    void setCloudType(const std::string& value);

    /// <summary>
    /// [功能描述：存储库规格。取值范围：app_consistent: 应用一致性，crash_consistent: 崩溃一致性。默认取值不涉及。](tag:hws,hws_hk,fcs_vm,ctc,tm,g42,hk_g42) [功能描述：存储库规格。取值范围：crash_consistent: 崩溃一致性。默认取值不涉及。](tag:dt,ocb,tlf,sbc,hcso_dt)
    /// </summary>

    std::string getConsistentLevel() const;
    bool consistentLevelIsSet() const;
    void unsetconsistentLevel();
    void setConsistentLevel(const std::string& value);

    /// <summary>
    /// [对象类型，支持\&quot;server\&quot;, \&quot;disk\&quot;, \&quot;turbo\&quot;, \&quot;workspace\&quot;, \&quot;vmware\&quot;, \&quot;rds\&quot;和\&quot;file\&quot;共七种。server：云服务器，disk：云硬盘，turbo：文件系统，workspace：云桌面，vmware：VMware，rds：关系型数据库，file：文件。默认取值不涉及。](tag:hws,hws_hk) [对象类型，支持\&quot;server\&quot;, \&quot;disk\&quot;和\&quot;turbo\&quot;共三种。server：云服务器，disk：云硬盘，turbo：文件系统。默认取值不涉及。](tag:ctc,fcs_vm,ocb,hk_g42,sbc,hws_ocb) [对象类型，支持\&quot;server\&quot;和\&quot;disk\&quot;共两种。server：云服务器，disk：云硬盘。默认取值不涉及。](tag:dt,tlf,tm,cmcc,hcso_dt) [对象类型，支持\&quot;server\&quot;, \&quot;disk\&quot;, \&quot;turbo\&quot;和\&quot;workspace\&quot;共四种。server：云服务器，disk：云硬盘，turbo：文件系统，workspace：云桌面。默认取值不涉及。](tag:g42)
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 保护类型，默认取值不涉及。取值范围如下： [backup：备份，replication：复制](tag:hws,hws_hk,ocb,hws_ocb) [backup：备份](tag:tlf,tm,cmcc,fcs_vm,g42,dt,hk_g42,sbc,hcso_dt)
    /// </summary>

    std::string getProtectType() const;
    bool protectTypeIsSet() const;
    void unsetprotectType();
    void setProtectType(const std::string& value);

    /// <summary>
    /// 资源容量大小，单位GB，取值范围：10-10485760，默认取值不涉及。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 计费模式，仅支持填写pre_paid：代表包年/包月模式
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 功能说明：订购周期单位。charging_mode参数为pre_paid时period_type参数会生效，并且period_type参数为必选。默认取值不涉及。 取值范围： - month：月 - year：年
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 功能说明：订购周期数，charging_mode为pre_paid时period_num参数会生效，并且period_num参数为为必选。默认取值不涉及。 取值范围：[1-9]
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 功能说明：到期后是否自动续期，默认为false 取值范围： - true：到期后自动续期 - false：到期后不自动续期
    /// </summary>

    bool isIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(bool value);

    /// <summary>
    /// 功能说明：是否自动付费，默认为false 取值范围： - true：下单后自动付费 - false：下单后不自动付费
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// 云服务console_url。 订购订单支付完成后，客户可以通过此URL跳转到云服务Console页面查看信息。（仅手动支付时涉及）。默认取值不涉及。
    /// </summary>

    std::string getConsoleUrl() const;
    bool consoleUrlIsSet() const;
    void unsetconsoleUrl();
    void setConsoleUrl(const std::string& value);

    /// <summary>
    /// 功能说明：存储库是否具有多AZ属性，即底层备份是否为多AZ备份，默认为false 取值范围： - true：存储库具有多AZ属性 - false：存储库不具有多AZ属性
    /// </summary>

    bool isIsMultiAz() const;
    bool isMultiAzIsSet() const;
    void unsetisMultiAz();
    void setIsMultiAz(bool value);

    /// <summary>
    /// 功能说明：存储库是否具有融合桶属性，即底层备份是否为融合桶备份，默认为false 取值范围： - true：存储库具有融合桶属性 - false：存储库不具有融合桶属性
    /// </summary>

    bool isIsDoubleAz() const;
    bool isDoubleAzIsSet() const;
    void unsetisDoubleAz();
    void setIsDoubleAz(bool value);

    /// <summary>
    /// 促销信息，包周期时可选参数，取值范围不涉及，默认取值不涉及。
    /// </summary>

    std::string getPromotionInfo() const;
    bool promotionInfoIsSet() const;
    void unsetpromotionInfo();
    void setPromotionInfo(const std::string& value);

    /// <summary>
    /// 购买模式，包周期时可选参数，取值范围不涉及，默认取值不涉及。
    /// </summary>

    std::string getPurchaseMode() const;
    bool purchaseModeIsSet() const;
    void unsetpurchaseMode();
    void setPurchaseMode(const std::string& value);

    /// <summary>
    /// 订单 ID，包周期时可选参数，取值范围不涉及，默认取值不涉及。
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
    bool isDoubleAz_;
    bool isDoubleAzIsSet_;
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PrePaidBillingCreate_H_
