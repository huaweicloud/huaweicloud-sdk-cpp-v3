
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListEipBandwidthsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListEipBandwidthsRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListEipBandwidthsRequest
    : public ModelBase
{
public:
    ListEipBandwidthsRequest();
    virtual ~ListEipBandwidthsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEipBandwidthsRequest members

    /// <summary>
    /// - 功能说明：每页返回的个数 - 取值范围：取值范围：1~[2000]，其中2000为局点差异项，具体取值由局点决定
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// - 功能说明：分页查询起始的资源ID，为空时为查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽唯一标识
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽类型，共享带宽默认为share。 - 取值范围：share，bgp，telcom，sbgp等。   - share：共享带宽   - bgp：动态bgp   - telcom ：联通   - sbgp：静态bgp
    /// </summary>

    std::string getBandwidthType() const;
    bool bandwidthTypeIsSet() const;
    void unsetbandwidthType();
    void setBandwidthType(const std::string& value);

    /// <summary>
    /// - 功能说明：宽带名称，按照宽带名称过滤
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// - 功能说明：根据宽带名称模糊查询过滤
    /// </summary>

    std::string getNameLike() const;
    bool nameLikeIsSet() const;
    void unsetnameLike();
    void setNameLike(const std::string& value);

    /// <summary>
    /// - 功能说明：根据tenant_id过滤
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// - 功能说明：根据入云大小过滤
    /// </summary>

    std::string getIngressSize() const;
    bool ingressSizeIsSet() const;
    void unsetingressSize();
    void setIngressSize(const std::string& value);

    /// <summary>
    /// - 功能说明：根据宽带状态过滤
    /// </summary>

    std::string getAdminState() const;
    bool adminStateIsSet() const;
    void unsetadminState();
    void setAdminState(const std::string& value);

    /// <summary>
    /// - 功能说明：根据计费信息过滤
    /// </summary>

    std::string getBillingInfo() const;
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const std::string& value);

    /// <summary>
    /// - 功能说明：根据标签过滤
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// - 功能说明：根据是否带宽分组使能过滤 - 取值范围：true、false
    /// </summary>

    std::string getEnableBandwidthRules() const;
    bool enableBandwidthRulesIsSet() const;
    void unsetenableBandwidthRules();
    void setEnableBandwidthRules(const std::string& value);

    /// <summary>
    /// - 功能说明：根据规则数值过滤
    /// </summary>

    int32_t getRuleQuota() const;
    bool ruleQuotaIsSet() const;
    void unsetruleQuota();
    void setRuleQuota(int32_t value);

    /// <summary>
    /// - 功能说明：根据站点信息过滤
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// - 功能说明：按流量计费,按带宽计费还是按增强型95计费 - 取值范围：bandwidth（按带宽计费），traffic（按流量计费），95peak_plus（按增强型95计费），不返回或者为空时表示是bandwidth - 约束：只有共享带宽支持95peak_plus（按增强型95计费），按增强型95计费时需要指定保底百分比，默认是20%
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽大小。共享带宽的大小有最小值限制，默认为5M，可能因局点不同而不同。 - 取值范围：默认5Mbit/s~2000Mbit/s（具体范围以各区域配置为准，请参见控制台对应页面显示）。   调整带宽时的最小单位会根据带宽范围不同存在差异。 - 小于等于300Mbit/s：默认最小单位为1Mbit/s。 - 300Mbit/s~1000Mbit/s：默认最小单位为50Mbit/s。 - 大于1000Mbit/s：默认最小单位为500Mbit/s。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// - 功能说明：带宽类型，标识是否是共享带宽 - 取值范围：WHOLE，PER。   - WHOLE表示共享带宽   - PER表示独享带宽
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string bandwidthType_;
    bool bandwidthTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nameLike_;
    bool nameLikeIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string ingressSize_;
    bool ingressSizeIsSet_;
    std::string adminState_;
    bool adminStateIsSet_;
    std::string billingInfo_;
    bool billingInfoIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    std::string enableBandwidthRules_;
    bool enableBandwidthRulesIsSet_;
    int32_t ruleQuota_;
    bool ruleQuotaIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListEipBandwidthsRequest& dereference_from_shared_ptr(std::shared_ptr<ListEipBandwidthsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListEipBandwidthsRequest_H_
