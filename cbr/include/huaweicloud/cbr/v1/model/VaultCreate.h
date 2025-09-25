
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreate_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/ResourceCreate.h>
#include <huaweicloud/cbr/v1/model/BillingCreate.h>
#include <huaweicloud/cbr/v1/model/VaultBindRules.h>
#include <vector>
#include <huaweicloud/cbr/v1/model/Tag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultCreate
    : public ModelBase
{
public:
    VaultCreate();
    virtual ~VaultCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultCreate members

    /// <summary>
    /// 备份策略ID，不设置时为null，不自动备份。
    /// </summary>

    std::string getBackupPolicyId() const;
    bool backupPolicyIdIsSet() const;
    void unsetbackupPolicyId();
    void setBackupPolicyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BillingCreate getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const BillingCreate& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 存储库名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 绑定的备份资源，未在创建时绑定资源填[]
    /// </summary>

    std::vector<ResourceCreate>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceCreate>& value);

    /// <summary>
    /// 标签列表 tags不允许为空列表。 tags中最多包含10个key。 tags中key不允许重复。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 企业项目ID，默认为‘0’。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 是否支持自动挂载。
    /// </summary>

    bool isAutoBind() const;
    bool autoBindIsSet() const;
    void unsetautoBind();
    void setAutoBind(bool value);

    /// <summary>
    /// 
    /// </summary>

    VaultBindRules getBindRules() const;
    bool bindRulesIsSet() const;
    void unsetbindRules();
    void setBindRules(const VaultBindRules& value);

    /// <summary>
    /// [是否开启存储库自动扩容能力（只支持按需存储库）。](tag:hws,hws_hk) [是否开启存储库自动扩容能力。](tag:dt,ocb,tlf,sbc,fcs_vm,ctc,g42,tm,cmcc,hcso_dt)
    /// </summary>

    bool isAutoExpand() const;
    bool autoExpandIsSet() const;
    void unsetautoExpand();
    void setAutoExpand(bool value);

    /// <summary>
    /// 存储库容量阈值，已用容量占总容量达到此百分比，将根据 smn_notify 参数设置选择是否发送相关通知。 默认值为：80 最大值：100 最小值：1
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);

    /// <summary>
    /// 存储库smn消息通知开关。 默认值为 true。
    /// </summary>

    bool isSmnNotify() const;
    bool smnNotifyIsSet() const;
    void unsetsmnNotify();
    void setSmnNotify(bool value);

    /// <summary>
    /// 备份名称前缀，设置后该存储库自动备份产生的备份副本都将携带该备份名称前缀
    /// </summary>

    std::string getBackupNamePrefix() const;
    bool backupNamePrefixIsSet() const;
    void unsetbackupNamePrefix();
    void setBackupNamePrefix(const std::string& value);

    /// <summary>
    /// 存储库使用是否允许超出容量，只有创建包周期存储库时才允许该值为 true
    /// </summary>

    bool isDemandBilling() const;
    bool demandBillingIsSet() const;
    void unsetdemandBilling();
    void setDemandBilling(bool value);

    /// <summary>
    /// 用于标识SMB服务，您可以设置为SMB或者空
    /// </summary>

    std::string getSysLockSourceService() const;
    bool sysLockSourceServiceIsSet() const;
    void unsetsysLockSourceService();
    void setSysLockSourceService(const std::string& value);

    /// <summary>
    /// 用于标识该存储库是否已锁定
    /// </summary>

    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);

    /// <summary>
    /// 存储库可用区信息，最大支持32字符。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


protected:
    std::string backupPolicyId_;
    bool backupPolicyIdIsSet_;
    BillingCreate billing_;
    bool billingIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<ResourceCreate> resources_;
    bool resourcesIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool autoBind_;
    bool autoBindIsSet_;
    VaultBindRules bindRules_;
    bool bindRulesIsSet_;
    bool autoExpand_;
    bool autoExpandIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;
    bool smnNotify_;
    bool smnNotifyIsSet_;
    std::string backupNamePrefix_;
    bool backupNamePrefixIsSet_;
    bool demandBilling_;
    bool demandBillingIsSet_;
    std::string sysLockSourceService_;
    bool sysLockSourceServiceIsSet_;
    bool locked_;
    bool lockedIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreate_H_
