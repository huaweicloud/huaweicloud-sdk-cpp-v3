
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/CreateInstancePeriodRequest_security_groups.h>
#include <huaweicloud/dbss/v1/model/CreateInstancePeriodRequest_nics.h>
#include <huaweicloud/dbss/v1/model/KeyValueBean.h>
#include <vector>
#include <huaweicloud/dbss/v1/model/CreateInstancePeriodRequest_product_infos.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  CreateInstancePeriodRequest
    : public ModelBase
{
public:
    CreateInstancePeriodRequest();
    virtual ~CreateInstancePeriodRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstancePeriodRequest members

    /// <summary>
    /// 实例名称。取值范围： - 只能由中文字符、英文字母、数字、下划线、中划线组成，且长度小于等于64个字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云服务器使用的规格ID
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 虚拟私有云的ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 云服务器对应可用分区信息。(两个主备分区，中间用“,”分隔，例如az1.dc1,az2.dc2)。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 企业项目ID。对接EPS必输。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 云服务器对应的网卡信息
    /// </summary>

    std::vector<CreateInstancePeriodRequest_nics>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<CreateInstancePeriodRequest_nics>& value);

    /// <summary>
    /// 云服务器对应安全组信息
    /// </summary>

    std::vector<CreateInstancePeriodRequest_security_groups>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<CreateInstancePeriodRequest_security_groups>& value);

    /// <summary>
    /// 备注信息
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 云服务器所在区域ID
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 服务类型： - hws.service.type.dbss: 数据库审计
    /// </summary>

    std::string getCloudServiceType() const;
    bool cloudServiceTypeIsSet() const;
    void unsetcloudServiceType();
    void setCloudServiceType(const std::string& value);

    /// <summary>
    /// 计费模式： - 0：包周期计费 - 1：按需计费
    /// </summary>

    int32_t getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(int32_t value);

    /// <summary>
    /// -订购周期类型 - 0：天 - 1：周 - 2：月 - 3：年 - 4：小时 - 5：绝对时间
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
    /// 订购数量： DBSS只支持订购1套，不支持多套
    /// </summary>

    int32_t getSubscriptionNum() const;
    bool subscriptionNumIsSet() const;
    void unsetsubscriptionNum();
    void setSubscriptionNum(int32_t value);

    /// <summary>
    /// 产品信息列表
    /// </summary>

    std::vector<CreateInstancePeriodRequest_product_infos>& getProductInfos();
    bool productInfosIsSet() const;
    void unsetproductInfos();
    void setProductInfos(const std::vector<CreateInstancePeriodRequest_product_infos>& value);

    /// <summary>
    /// 资源标签
    /// </summary>

    std::vector<KeyValueBean>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<KeyValueBean>& value);

    /// <summary>
    /// 折扣信息
    /// </summary>

    std::string getPromotionInfo() const;
    bool promotionInfoIsSet() const;
    void unsetpromotionInfo();
    void setPromotionInfo(const std::string& value);

    /// <summary>
    /// 自动续费 - 1：自动续费 - 0：不自动续费
    /// </summary>

    int32_t getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<CreateInstancePeriodRequest_nics> nics_;
    bool nicsIsSet_;
    std::vector<CreateInstancePeriodRequest_security_groups> securityGroups_;
    bool securityGroupsIsSet_;
    std::string comment_;
    bool commentIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string cloudServiceType_;
    bool cloudServiceTypeIsSet_;
    int32_t chargingMode_;
    bool chargingModeIsSet_;
    int32_t periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    int32_t subscriptionNum_;
    bool subscriptionNumIsSet_;
    std::vector<CreateInstancePeriodRequest_product_infos> productInfos_;
    bool productInfosIsSet_;
    std::vector<KeyValueBean> tags_;
    bool tagsIsSet_;
    std::string promotionInfo_;
    bool promotionInfoIsSet_;
    int32_t isAutoRenew_;
    bool isAutoRenewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_H_
