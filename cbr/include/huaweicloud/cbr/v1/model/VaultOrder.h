
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultOrder_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultOrder_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultCreateParameters.h>
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
/// 存储库订单
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultOrder
    : public ModelBase
{
public:
    VaultOrder();
    virtual ~VaultOrder();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultOrder members

    /// <summary>
    /// 存储库名称  最小长度：1  最大长度：64
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BillingCreate getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const BillingCreate& value);

    /// <summary>
    /// 绑定的备份资源，未在创建时绑定资源填[]
    /// </summary>

    std::vector<ResourceCreate>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceCreate>& value);

    /// <summary>
    /// 描述  最小长度：0  最大长度：255
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 备份策略ID，不设置时为null，不自动备份。
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
    /// 存储库阈值，百分比。  最小值：1  最大值：100
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);

    /// <summary>
    /// 当容量到达阈值，是否启用通知
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
    /// 是否开启存储库自动扩容能力（只支持按需存储库）。
    /// </summary>

    bool isAutoExpand() const;
    bool autoExpandIsSet() const;
    void unsetautoExpand();
    void setAutoExpand(bool value);

    /// <summary>
    /// 用于标识当前存储库是否已锁定
    /// </summary>

    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    BillingCreate billing_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultOrder_H_
