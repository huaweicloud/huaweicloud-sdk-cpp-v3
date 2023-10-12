
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthResponseBody_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthResponseBody_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/BandWidthRules.h>
#include <huaweicloud/eip/v3/model/PublicipInfoResponseBody.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 带宽对象
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  BandwidthResponseBody
    : public ModelBase
{
public:
    BandwidthResponseBody();
    virtual ~BandwidthResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BandwidthResponseBody members

    /// <summary>
    /// - 功能说明：带宽状态 - 取值范围：normal，freezed
    /// </summary>

    std::string getAdminState() const;
    bool adminStateIsSet() const;
    void unsetadminState();
    void setAdminState(const std::string& value);

    /// <summary>
    /// - 功能说明：入网大小，单位Mbit/s
    /// </summary>

    int32_t getIngressSize() const;
    bool ingressSizeIsSet() const;
    void unsetingressSize();
    void setIngressSize(int32_t value);

    /// <summary>
    /// - 功能说明：规则数值，最低阈值可调节
    /// </summary>

    int32_t getRuleQuota() const;
    bool ruleQuotaIsSet() const;
    void unsetruleQuota();
    void setRuleQuota(int32_t value);

    /// <summary>
    /// - 功能说明：增强型95带宽保底率，最低保底率为20
    /// </summary>

    int32_t getRatio95peakPlus() const;
    bool ratio95peakPlusIsSet() const;
    void unsetratio95peakPlus();
    void setRatio95peakPlus(int32_t value);

    /// <summary>
    /// - 功能说明：带宽分组使能，表明开启带宽分组限速功能。
    /// </summary>

    bool isEnableBandwidthRules() const;
    bool enableBandwidthRulesIsSet() const;
    void unsetenableBandwidthRules();
    void setEnableBandwidthRules(bool value);

    /// <summary>
    /// - 功能说明：带宽规则对象（该字段仅在上海1局点返回）
    /// </summary>

    std::vector<BandWidthRules>& getBandwidthRules();
    bool bandwidthRulesIsSet() const;
    void unsetbandwidthRules();
    void setBandwidthRules(const std::vector<BandWidthRules>& value);

    /// <summary>
    /// - 功能说明：带宽AZ属性，表征中心和边缘。中心带宽默认为center
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽类型，共享带宽默认为share。 - 取值范围：share，bgp，telcom，sbgp等。  share：共享带宽；  bgp：动态bgp；  telcom ：联通；  sbgp：静态bgp。
    /// </summary>

    std::string getBandwidthType() const;
    bool bandwidthTypeIsSet() const;
    void unsetbandwidthType();
    void setBandwidthType(const std::string& value);

    /// <summary>
    /// - 功能说明：账单信息，
    /// </summary>

    std::string getBillinginfo() const;
    bool billinginfoIsSet() const;
    void unsetbillinginfo();
    void setBillinginfo(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽名称 - 取值范围：1-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽对应的弹性公网IP信息 - 约束：WHOLE类型的带宽支持多个弹性公网IP，PER类型的带宽只能对应一个弹性公网IP
    /// </summary>

    std::vector<PublicipInfoResponseBody>& getPublicipInfo();
    bool publicipInfoIsSet() const;
    void unsetpublicipInfo();
    void setPublicipInfo(const std::vector<PublicipInfoResponseBody>& value);

    /// <summary>
    /// - 功能说明：带宽类型，标识是否是共享带宽 - 取值范围：WHOLE，PER。  WHOLE表示共享带宽；PER表示独享带宽
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽大小 - 取值范围：默认5Mbit/s~2000Mbit/s（具体范围以各区域配置为准，请参见控制台对应页面显示）。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// - 功能说明：用户所属项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// - 功能说明：\&quot;公网EIP标签\&quot;
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// - 功能说明：资源创建时间，采用UTC时间，格式：YYYY-MM-DDTHH:MM:SS
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// - 功能说明：资源更新时间，采用UTC时间，格式：YYYY-MM-DDTHH:MM:SS
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string adminState_;
    bool adminStateIsSet_;
    int32_t ingressSize_;
    bool ingressSizeIsSet_;
    int32_t ruleQuota_;
    bool ruleQuotaIsSet_;
    int32_t ratio95peakPlus_;
    bool ratio95peakPlusIsSet_;
    bool enableBandwidthRules_;
    bool enableBandwidthRulesIsSet_;
    std::vector<BandWidthRules> bandwidthRules_;
    bool bandwidthRulesIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string bandwidthType_;
    bool bandwidthTypeIsSet_;
    std::string billinginfo_;
    bool billinginfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<PublicipInfoResponseBody> publicipInfo_;
    bool publicipInfoIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_BandwidthResponseBody_H_
