
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateClusterRequestBody_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateClusterRequestBody_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CreateClusterRequestBody
    : public ModelBase
{
public:
    CreateClusterRequestBody();
    virtual ~CreateClusterRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateClusterRequestBody members

    /// <summary>
    /// 计费模式  - 0：包年/包月。
    /// </summary>

    int32_t getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(int32_t value);

    /// <summary>
    /// 局点ID
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 周期类型  - 2：月。  - 3：年。
    /// </summary>

    int32_t getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(int32_t value);

    /// <summary>
    /// 周期数量
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 实例数量
    /// </summary>

    int32_t getSubscriptionNum() const;
    bool subscriptionNumIsSet() const;
    void unsetsubscriptionNum();
    void setSubscriptionNum(int32_t value);

    /// <summary>
    /// 产品id
    /// </summary>

    std::string getPeriodProductId() const;
    bool periodProductIdIsSet() const;
    void unsetperiodProductId();
    void setPeriodProductId(const std::string& value);

    /// <summary>
    /// 产品规格code
    /// </summary>

    std::string getPeriodResourceSpecCode() const;
    bool periodResourceSpecCodeIsSet() const;
    void unsetperiodResourceSpecCode();
    void setPeriodResourceSpecCode(const std::string& value);

    /// <summary>
    /// 集群名称
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 服务类型  - ENCRYPT_DECRYPT：加解密服务。  - SIGN_VERIFY：签名验签服务。  - KMS：密钥管理服务。  - TIMESTAMP：时间戳服务。  - COLLA_SIGN：协同签名服务。  - OTP：动态令牌服务。  - DB_ENCRYPT：数据库加密服务。  - FILE_ENCRYPT：文件加密服务。  - DIGIT_SEAL：电子签章服务。  - SSL_VPN：SSL_VPN服务。  - IAS：身份认证服务。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 共享类型  - EXCLUSIVE：应用独享。  - SHARED：应用共享。
    /// </summary>

    std::string getShareType() const;
    bool shareTypeIsSet() const;
    void unsetshareType();
    void setShareType(const std::string& value);

    /// <summary>
    /// 镜像id
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 是否自动续费
    /// </summary>

    int32_t getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(int32_t value);

    /// <summary>
    /// 折扣
    /// </summary>

    std::string getPromotionInfo() const;
    bool promotionInfoIsSet() const;
    void unsetpromotionInfo();
    void setPromotionInfo(const std::string& value);

    /// <summary>
    /// 应用id
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 实例类型  - SINGLE：单机。  - STANDBY：主备。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// az
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);


protected:
    int32_t chargingMode_;
    bool chargingModeIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;
    int32_t periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    int32_t subscriptionNum_;
    bool subscriptionNumIsSet_;
    std::string periodProductId_;
    bool periodProductIdIsSet_;
    std::string periodResourceSpecCode_;
    bool periodResourceSpecCodeIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string shareType_;
    bool shareTypeIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    int32_t isAutoRenew_;
    bool isAutoRenewIsSet_;
    std::string promotionInfo_;
    bool promotionInfoIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string az_;
    bool azIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CreateClusterRequestBody_H_
