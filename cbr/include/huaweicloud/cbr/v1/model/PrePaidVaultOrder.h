
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_PrePaidVaultOrder_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_PrePaidVaultOrder_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultCreateParameters.h>
#include <string>
#include <huaweicloud/cbr/v1/model/DataEncryption.h>
#include <huaweicloud/cbr/v1/model/ResourceCreate.h>
#include <huaweicloud/cbr/v1/model/VaultBindRules.h>
#include <vector>
#include <huaweicloud/cbr/v1/model/Tag.h>
#include <huaweicloud/cbr/v1/model/PrePaidBillingCreate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包周期存储库订单
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  PrePaidVaultOrder
    : public ModelBase
{
public:
    PrePaidVaultOrder();
    virtual ~PrePaidVaultOrder();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrePaidVaultOrder members

    /// <summary>
    /// 存储库名称，最大支持64字符，只能由中文、字母、数字、\&quot;_\&quot;、\&quot;-\&quot;组成。默认取值不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PrePaidBillingCreate getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const PrePaidBillingCreate& value);

    /// <summary>
    /// 绑定的备份资源，未在创建时绑定资源填[]
    /// </summary>

    std::vector<ResourceCreate>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceCreate>& value);

    /// <summary>
    /// 存储库描述，取值范围：最小长度：0，最大长度：255。默认取值不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 备份策略ID，默认值为null，不自动备份。 [获取方法请参见\&quot;[获取备份策略ID](https://support.huaweicloud.com/api-cbr/ListPolicies.html)\&quot;。](tag:hws) [获取方法请参见\&quot;[获取备份策略ID](https://support.huaweicloud.com/intl/zh-cn/api-cbr/ListPolicies.html)\&quot;。](tag:hws_hk)
    /// </summary>

    std::string getBackupPolicyId() const;
    bool backupPolicyIdIsSet() const;
    void unsetbackupPolicyId();
    void setBackupPolicyId(const std::string& value);

    /// <summary>
    /// 标签列表 tags不允许为空列表。 tags中最多包含10个key。 tags中key不允许重复。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 企业项目ID，默认为&#39;0&#39;。 [获取方法请参见\&quot;[获取企业项目ID](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0126101490.html)\&quot;。](tag:hws) [获取方法请参见\&quot;[获取企业项目ID](https://support.huaweicloud.com/intl/zh-cn/usermanual-em/zh-cn_topic_0126101490.html)\&quot;。](tag:hws_hk)
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 功能说明：是否支持自动挂载。默认为false。 取值范围： - true：支持自动挂载 - false：不支持自动挂载
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
    /// 功能说明：存储库容量阈值，存储库已用容量和总容量的百分比超过该值，如果smn_notify为开，将发送相关通知。 取值范围：[1, 100]，默认值为80。
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);

    /// <summary>
    /// 功能说明：是否发送smn通知开关，默认为true 取值范围： - true：发送smn通知 - false：不发送smn通知
    /// </summary>

    bool isSmnNotify() const;
    bool smnNotifyIsSet() const;
    void unsetsmnNotify();
    void setSmnNotify(bool value);

    /// <summary>
    /// 
    /// </summary>

    VaultCreateParameters getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const VaultCreateParameters& value);

    /// <summary>
    /// 功能说明：是否开启存储库自动扩容能力（只支持按需存储库），默认为false。 取值范围： - true：支持自动扩容； - false：不支持自动扩容。
    /// </summary>

    bool isAutoExpand() const;
    bool autoExpandIsSet() const;
    void unsetautoExpand();
    void setAutoExpand(bool value);

    /// <summary>
    /// 功能说明：用于标识当前存储库是否已锁定，锁定的存储库不支持解锁。默认值为false。 [关于备份锁定的详细信息，请参考\&quot;[开启备份锁定](https://support.huaweicloud.com/usermanual-cbr/cbr_01_0035.html)\&quot;。](tag:hws) [关于备份锁定的详细信息，请参考\&quot;[开启备份锁定](https://support.huaweicloud.com/intl/zh-cn/usermanual-cbr/cbr_01_0035.html)\&quot;。](tag:hws_hk) 取值范围： - true：锁定存储库 - false：不锁定存储库
    /// </summary>

    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);

    /// <summary>
    /// 功能说明：是否为跨账号复制存储库，默认值为false，只有创建跨账号复制存储库时才允许该值为true。 取值范围： - false: 非跨账号复制存储库 - true: 跨账号复制存储库
    /// </summary>

    bool isCrossAccount() const;
    bool crossAccountIsSet() const;
    void unsetcrossAccount();
    void setCrossAccount(bool value);

    /// <summary>
    /// 
    /// </summary>

    DataEncryption getDataEncryption() const;
    bool dataEncryptionIsSet() const;
    void unsetdataEncryption();
    void setDataEncryption(const DataEncryption& value);


protected:
    std::string name_;
    bool nameIsSet_;
    PrePaidBillingCreate billing_;
    bool billingIsSet_;
    std::vector<ResourceCreate> resources_;
    bool resourcesIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string backupPolicyId_;
    bool backupPolicyIdIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool autoBind_;
    bool autoBindIsSet_;
    VaultBindRules bindRules_;
    bool bindRulesIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;
    bool smnNotify_;
    bool smnNotifyIsSet_;
    VaultCreateParameters parameters_;
    bool parametersIsSet_;
    bool autoExpand_;
    bool autoExpandIsSet_;
    bool locked_;
    bool lockedIsSet_;
    bool crossAccount_;
    bool crossAccountIsSet_;
    DataEncryption dataEncryption_;
    bool dataEncryptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_PrePaidVaultOrder_H_
