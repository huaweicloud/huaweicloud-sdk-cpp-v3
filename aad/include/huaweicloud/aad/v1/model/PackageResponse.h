
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_PackageResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_PackageResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包列表响应体
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  PackageResponse
    : public ModelBase
{
public:
    PackageResponse();
    virtual ~PackageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PackageResponse members

    /// <summary>
    /// 防护包id
    /// </summary>

    std::string getPackageId() const;
    bool packageIdIsSet() const;
    void unsetpackageId();
    void setPackageId(const std::string& value);

    /// <summary>
    /// 防护包名
    /// </summary>

    std::string getPackageName() const;
    bool packageNameIsSet() const;
    void unsetpackageName();
    void setPackageName(const std::string& value);

    /// <summary>
    /// 资源所属region
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 防护类型
    /// </summary>

    int32_t getProtectionType() const;
    bool protectionTypeIsSet() const;
    void unsetprotectionType();
    void setProtectionType(int32_t value);

    /// <summary>
    /// 防护包类型。cnad_pro：专业版；cnad_ip：标准版；cnad_ep：铂金版；cnad_full_high：全力防高级版；cnad_vic：按需版；cnad_intl_ep：国际站铂金版
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 倒计时相关信息
    /// </summary>

    std::string getCountDownCode() const;
    bool countDownCodeIsSet() const;
    void unsetcountDownCode();
    void setCountDownCode(const std::string& value);

    /// <summary>
    /// 倒计时相关信息
    /// </summary>

    std::string getCountDownInfos() const;
    bool countDownInfosIsSet() const;
    void unsetcountDownInfos();
    void setCountDownInfos(const std::string& value);

    /// <summary>
    /// 倒计时相关信息
    /// </summary>

    std::string getCountDownTips() const;
    bool countDownTipsIsSet() const;
    void unsetcountDownTips();
    void setCountDownTips(const std::string& value);

    /// <summary>
    /// 订单id
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 续费用的id
    /// </summary>

    std::string getSubscriptionId() const;
    bool subscriptionIdIsSet() const;
    void unsetsubscriptionId();
    void setSubscriptionId(const std::string& value);

    /// <summary>
    /// ip数
    /// </summary>

    int32_t getIpNum() const;
    bool ipNumIsSet() const;
    void unsetipNum();
    void setIpNum(int32_t value);

    /// <summary>
    /// 当前IP数
    /// </summary>

    int32_t getIpNumNow() const;
    bool ipNumNowIsSet() const;
    void unsetipNumNow();
    void setIpNumNow(int32_t value);

    /// <summary>
    /// 当前防护次数
    /// </summary>

    int32_t getProtectionNumNow() const;
    bool protectionNumNowIsSet() const;
    void unsetprotectionNumNow();
    void setProtectionNumNow(int32_t value);

    /// <summary>
    /// 防护次数，9999为无限次
    /// </summary>

    int32_t getProtectionNum() const;
    bool protectionNumIsSet() const;
    void unsetprotectionNum();
    void setProtectionNum(int32_t value);

    /// <summary>
    /// 保底带宽
    /// </summary>

    int32_t getBasicBandwidth() const;
    bool basicBandwidthIsSet() const;
    void unsetbasicBandwidth();
    void setBasicBandwidth(int32_t value);

    /// <summary>
    /// 弹性带宽
    /// </summary>

    int32_t getElasticBandwidth() const;
    bool elasticBandwidthIsSet() const;
    void unsetelasticBandwidth();
    void setElasticBandwidth(int32_t value);

    /// <summary>
    /// 业务带宽
    /// </summary>

    int32_t getServiceBandwidth() const;
    bool serviceBandwidthIsSet() const;
    void unsetserviceBandwidth();
    void setServiceBandwidth(int32_t value);

    /// <summary>
    /// 回源带宽
    /// </summary>

    int32_t getCleanBandwidth() const;
    bool cleanBandwidthIsSet() const;
    void unsetcleanBandwidth();
    void setCleanBandwidth(int32_t value);

    /// <summary>
    /// 策略模板数
    /// </summary>

    int32_t getPolicyNum() const;
    bool policyNumIsSet() const;
    void unsetpolicyNum();
    void setPolicyNum(int32_t value);

    /// <summary>
    /// 是否旧防护包（旧防护包不支持升级规格）,默认不传为否
    /// </summary>

    bool isIsOld() const;
    bool isOldIsSet() const;
    void unsetisOld();
    void setIsOld(bool value);

    /// <summary>
    /// 专业版铂金版合并之后购买的专业版和铂金版均标识为true
    /// </summary>

    bool isNewFlag() const;
    bool newFlagIsSet() const;
    void unsetnewFlag();
    void setNewFlag(bool value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);


protected:
    std::string packageId_;
    bool packageIdIsSet_;
    std::string packageName_;
    bool packageNameIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    int32_t protectionType_;
    bool protectionTypeIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string countDownCode_;
    bool countDownCodeIsSet_;
    std::string countDownInfos_;
    bool countDownInfosIsSet_;
    std::string countDownTips_;
    bool countDownTipsIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string subscriptionId_;
    bool subscriptionIdIsSet_;
    int32_t ipNum_;
    bool ipNumIsSet_;
    int32_t ipNumNow_;
    bool ipNumNowIsSet_;
    int32_t protectionNumNow_;
    bool protectionNumNowIsSet_;
    int32_t protectionNum_;
    bool protectionNumIsSet_;
    int32_t basicBandwidth_;
    bool basicBandwidthIsSet_;
    int32_t elasticBandwidth_;
    bool elasticBandwidthIsSet_;
    int32_t serviceBandwidth_;
    bool serviceBandwidthIsSet_;
    int32_t cleanBandwidth_;
    bool cleanBandwidthIsSet_;
    int32_t policyNum_;
    bool policyNumIsSet_;
    bool isOld_;
    bool isOldIsSet_;
    bool newFlag_;
    bool newFlagIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_PackageResponse_H_
