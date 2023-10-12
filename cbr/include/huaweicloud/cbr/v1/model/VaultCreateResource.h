
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateResource_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateResource_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CbcOrderResult.h>
#include <string>
#include <huaweicloud/cbr/v1/model/VaultBindRules.h>
#include <vector>
#include <huaweicloud/cbr/v1/model/ResourceResp.h>
#include <huaweicloud/cbr/v1/model/Tag.h>
#include <huaweicloud/cbr/v1/model/Billing.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  VaultCreateResource
    : public ModelBase
{
public:
    VaultCreateResource();
    virtual ~VaultCreateResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultCreateResource members

    /// <summary>
    /// 
    /// </summary>

    Billing getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const Billing& value);

    /// <summary>
    /// 存储库自定义描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 存储库名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 存储库资源类型id
    /// </summary>

    std::string getProviderId() const;
    bool providerIdIsSet() const;
    void unsetproviderId();
    void setProviderId(const std::string& value);

    /// <summary>
    /// 存储库资源
    /// </summary>

    std::vector<ResourceResp>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceResp>& value);

    /// <summary>
    /// 存储库标签
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);

    /// <summary>
    /// 企业项目id，默认为‘0’。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 是否自动绑定，默认为false，不支持。
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
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 创建时间,例如:\&quot;2020-02-05T10:38:34.209782\&quot;
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// [是否开启存储库自动扩容能力（只支持按需存储库）。](tag:hws,hws_hk) [是否开启存储库自动扩容能力。](tag:dt,ocb,tlf,sbc,fcs_vm,ctc,g42,tm,cmcc,tm,hcso_dt)
    /// </summary>

    bool isAutoExpand() const;
    bool autoExpandIsSet() const;
    void unsetautoExpand();
    void setAutoExpand(bool value);

    /// <summary>
    /// 存储库smn消息通知开关
    /// </summary>

    bool isSmnNotify() const;
    bool smnNotifyIsSet() const;
    void unsetsmnNotify();
    void setSmnNotify(bool value);

    /// <summary>
    /// 存储库容量阈值，已用容量占总容量达到此百分比即发送相关通知
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);

    /// <summary>
    /// 包周期创建错误信息
    /// </summary>

    std::string getErrText() const;
    bool errTextIsSet() const;
    void unseterrText();
    void setErrText(const std::string& value);

    /// <summary>
    /// 包周期订购结果
    /// </summary>

    std::string getRetCode() const;
    bool retCodeIsSet() const;
    void unsetretCode();
    void setRetCode(const std::string& value);

    /// <summary>
    /// 包周期创建订单信息
    /// </summary>

    std::vector<CbcOrderResult>& getOrders();
    bool ordersIsSet() const;
    void unsetorders();
    void setOrders(const std::vector<CbcOrderResult>& value);

    /// <summary>
    /// 备份名称前缀
    /// </summary>

    std::string getBackupNamePrefix() const;
    bool backupNamePrefixIsSet() const;
    void unsetbackupNamePrefix();
    void setBackupNamePrefix(const std::string& value);

    /// <summary>
    /// 是否允许使用超出存储库容量
    /// </summary>

    bool isDemandBilling() const;
    bool demandBillingIsSet() const;
    void unsetdemandBilling();
    void setDemandBilling(bool value);

    /// <summary>
    /// 存储库删除次数
    /// </summary>

    int32_t getCbcDeleteCount() const;
    bool cbcDeleteCountIsSet() const;
    void unsetcbcDeleteCount();
    void setCbcDeleteCount(int32_t value);

    /// <summary>
    /// 存储库是否冻结
    /// </summary>

    bool isFrozen() const;
    bool frozenIsSet() const;
    void unsetfrozen();
    void setFrozen(bool value);


protected:
    Billing billing_;
    bool billingIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string providerId_;
    bool providerIdIsSet_;
    std::vector<ResourceResp> resources_;
    bool resourcesIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    bool autoBind_;
    bool autoBindIsSet_;
    VaultBindRules bindRules_;
    bool bindRulesIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    bool autoExpand_;
    bool autoExpandIsSet_;
    bool smnNotify_;
    bool smnNotifyIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;
    std::string errText_;
    bool errTextIsSet_;
    std::string retCode_;
    bool retCodeIsSet_;
    std::vector<CbcOrderResult> orders_;
    bool ordersIsSet_;
    std::string backupNamePrefix_;
    bool backupNamePrefixIsSet_;
    bool demandBilling_;
    bool demandBillingIsSet_;
    int32_t cbcDeleteCount_;
    bool cbcDeleteCountIsSet_;
    bool frozen_;
    bool frozenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateResource_H_
