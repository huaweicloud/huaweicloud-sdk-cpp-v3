
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChargeOrderDbssNew_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChargeOrderDbssNew_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ProductInfoBeanNew.h>
#include <huaweicloud/dbss/v1/model/Nic.h>
#include <string>
#include <huaweicloud/dbss/v1/model/OutsideInsConfig.h>
#include <huaweicloud/dbss/v1/model/PublicIp.h>
#include <huaweicloud/dbss/v1/model/SecurityGroup.h>
#include <huaweicloud/dbss/v1/model/ResourceTagInfoBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ChargeOrderDbssNew
    : public ModelBase
{
public:
    ChargeOrderDbssNew();
    virtual ~ChargeOrderDbssNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChargeOrderDbssNew members

    /// <summary>
    /// 资源标签列表
    /// </summary>

    std::vector<ResourceTagInfoBean>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTagInfoBean>& value);

    /// <summary>
    /// 资产数量
    /// </summary>

    int32_t getAssetNums() const;
    bool assetNumsIsSet() const;
    void unsetassetNums();
    void setAssetNums(int32_t value);

    /// <summary>
    /// 可用分区
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 计费模式
    /// </summary>

    int32_t getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(int32_t value);

    /// <summary>
    /// 服务类型
    /// </summary>

    std::string getCloudServiceType() const;
    bool cloudServiceTypeIsSet() const;
    void unsetcloudServiceType();
    void setCloudServiceType(const std::string& value);

    /// <summary>
    /// 备注信息
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 组合套餐
    /// </summary>

    std::string getCompositeProductId() const;
    bool compositeProductIdIsSet() const;
    void unsetcompositeProductId();
    void setCompositeProductId(const std::string& value);

    /// <summary>
    /// 实例部署方式，默认为云上 - CLOUD：云上 - OUTSIDE：云外
    /// </summary>

    std::string getDeployMode() const;
    bool deployModeIsSet() const;
    void unsetdeployMode();
    void setDeployMode(const std::string& value);

    /// <summary>
    /// 折扣ID
    /// </summary>

    std::string getDiscountId() const;
    bool discountIdIsSet() const;
    void unsetdiscountId();
    void setDiscountId(const std::string& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// ECS规格ID
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 前端登录密码
    /// </summary>

    std::string getHxPassword() const;
    bool hxPasswordIsSet() const;
    void unsethxPassword();
    void setHxPassword(const std::string& value);

    /// <summary>
    /// 镜像业务类型
    /// </summary>

    int32_t getImageBusinessType() const;
    bool imageBusinessTypeIsSet() const;
    void unsetimageBusinessType();
    void setImageBusinessType(int32_t value);

    /// <summary>
    /// 自费续费  - 1：自动  - 0：不自动
    /// </summary>

    int32_t getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(int32_t value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 网卡信息
    /// </summary>

    std::vector<Nic>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<Nic>& value);

    /// <summary>
    /// 
    /// </summary>

    OutsideInsConfig getOutsideInsConfig() const;
    bool outsideInsConfigIsSet() const;
    void unsetoutsideInsConfig();
    void setOutsideInsConfig(const OutsideInsConfig& value);

    /// <summary>
    /// 订购周期数目
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 订购周期类型
    /// </summary>

    int32_t getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(int32_t value);

    /// <summary>
    /// 产品列表
    /// </summary>

    std::vector<ProductInfoBeanNew>& getProductInfos();
    bool productInfosIsSet() const;
    void unsetproductInfos();
    void setProductInfos(const std::vector<ProductInfoBeanNew>& value);

    /// <summary>
    /// 促销ID
    /// </summary>

    std::string getPromotionActivityId() const;
    bool promotionActivityIdIsSet() const;
    void unsetpromotionActivityId();
    void setPromotionActivityId(const std::string& value);

    /// <summary>
    /// 折扣信息
    /// </summary>

    std::string getPromotionInfo() const;
    bool promotionInfoIsSet() const;
    void unsetpromotionInfo();
    void setPromotionInfo(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PublicIp getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const PublicIp& value);

    /// <summary>
    /// 区域ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 安全组信息
    /// </summary>

    std::vector<SecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<SecurityGroup>& value);

    /// <summary>
    /// 订购数量，当前仅支持1台
    /// </summary>

    int32_t getSubscriptionNum() const;
    bool subscriptionNumIsSet() const;
    void unsetsubscriptionNum();
    void setSubscriptionNum(int32_t value);

    /// <summary>
    /// VPC ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


protected:
    std::vector<ResourceTagInfoBean> tags_;
    bool tagsIsSet_;
    int32_t assetNums_;
    bool assetNumsIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    int32_t chargingMode_;
    bool chargingModeIsSet_;
    std::string cloudServiceType_;
    bool cloudServiceTypeIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::string compositeProductId_;
    bool compositeProductIdIsSet_;
    std::string deployMode_;
    bool deployModeIsSet_;
    std::string discountId_;
    bool discountIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string hxPassword_;
    bool hxPasswordIsSet_;
    int32_t imageBusinessType_;
    bool imageBusinessTypeIsSet_;
    int32_t isAutoRenew_;
    bool isAutoRenewIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<Nic> nics_;
    bool nicsIsSet_;
    OutsideInsConfig outsideInsConfig_;
    bool outsideInsConfigIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    int32_t periodType_;
    bool periodTypeIsSet_;
    std::vector<ProductInfoBeanNew> productInfos_;
    bool productInfosIsSet_;
    std::string promotionActivityId_;
    bool promotionActivityIdIsSet_;
    std::string promotionInfo_;
    bool promotionInfoIsSet_;
    PublicIp publicIp_;
    bool publicIpIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    std::vector<SecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    int32_t subscriptionNum_;
    bool subscriptionNumIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ChargeOrderDbssNew_H_
