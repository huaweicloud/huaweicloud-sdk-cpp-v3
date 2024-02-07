
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidth_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidth_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/Tag.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/geip/v3/model/LockInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateInternetBandwidth
    : public ModelBase
{
public:
    UpdateInternetBandwidth();
    virtual ~UpdateInternetBandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInternetBandwidth members

    /// <summary>
    /// ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 线路
    /// </summary>

    std::string getIsp() const;
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::string& value);

    /// <summary>
    /// 全域公网带宽大小（入云方向）
    /// </summary>

    int32_t getIngressSize() const;
    bool ingressSizeIsSet() const;
    void unsetingressSize();
    void setIngressSize(int32_t value);

    /// <summary>
    /// 接入点信息
    /// </summary>

    std::string getAccessSite() const;
    bool accessSiteIsSet() const;
    void unsetaccessSite();
    void setAccessSite(const std::string& value);

    /// <summary>
    /// 全域公网带宽大小（出云方向）
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 用户自定义的资源描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 计费模式
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 增强95保底率
    /// </summary>

    int32_t getRatio95peak() const;
    bool ratio95peakIsSet() const;
    void unsetratio95peak();
    void setRatio95peak(int32_t value);

    /// <summary>
    /// 冻结原因
    /// </summary>

    std::string getFreezenInfo() const;
    bool freezenInfoIsSet() const;
    void unsetfreezenInfo();
    void setFreezenInfo(const std::string& value);

    /// <summary>
    /// 订单信息
    /// </summary>

    std::string getBillingInfo() const;
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 是否包周期
    /// </summary>

    bool isIsPrePaid() const;
    bool isPrePaidIsSet() const;
    void unsetisPrePaid();
    void setIsPrePaid(bool value);

    /// <summary>
    /// 全域公网带宽标签
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 资源的企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 全域公网带宽资源的锁状态
    /// </summary>

    std::vector<LockInfo>& getLockInfos();
    bool lockInfosIsSet() const;
    void unsetlockInfos();
    void setLockInfos(const std::vector<LockInfo>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string isp_;
    bool ispIsSet_;
    int32_t ingressSize_;
    bool ingressSizeIsSet_;
    std::string accessSite_;
    bool accessSiteIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    int32_t ratio95peak_;
    bool ratio95peakIsSet_;
    std::string freezenInfo_;
    bool freezenInfoIsSet_;
    std::string billingInfo_;
    bool billingInfoIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    bool isPrePaid_;
    bool isPrePaidIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<LockInfo> lockInfos_;
    bool lockInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidth_H_
