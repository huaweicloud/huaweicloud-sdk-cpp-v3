
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_VPCProtectsVo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_VPCProtectsVo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/VpcAttachmentDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： vpc protects vo **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  VPCProtectsVo
    : public ModelBase
{
public:
    VPCProtectsVo();
    virtual ~VPCProtectsVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VPCProtectsVo members

    /// <summary>
    /// **参数解释**： 总防护VPC数 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 防火墙东西向防护可进行跨账号防护VPC，self_total表示本项目防护VPC总数。 **取值范围**： 不涉及
    /// </summary>

    int32_t getSelfTotal() const;
    bool selfTotalIsSet() const;
    void unsetselfTotal();
    void setSelfTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 防火墙东西向防护可进行跨账号防护VPC，other_total表示其他项目防护VPC数 **取值范围**： 不涉及
    /// </summary>

    int32_t getOtherTotal() const;
    bool otherTotalIsSet() const;
    void unsetotherTotal();
    void setOtherTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 防火墙东西向防护可进行跨账号防护VPC，protect_vpcs表示总体防护VPC列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<VpcAttachmentDetail>& getProtectVpcs();
    bool protectVpcsIsSet() const;
    void unsetprotectVpcs();
    void setProtectVpcs(const std::vector<VpcAttachmentDetail>& value);

    /// <summary>
    /// **参数解释**： 防火墙东西向防护可进行跨账号防护VPC，self_protect_vpcs表示本项目防护VPC列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<VpcAttachmentDetail>& getSelfProtectVpcs();
    bool selfProtectVpcsIsSet() const;
    void unsetselfProtectVpcs();
    void setSelfProtectVpcs(const std::vector<VpcAttachmentDetail>& value);

    /// <summary>
    /// **参数解释**： 防火墙东西向防护可进行跨账号防护VPC，other_protect_vpcs表示其他项目防护VPC列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<VpcAttachmentDetail>& getOtherProtectVpcs();
    bool otherProtectVpcsIsSet() const;
    void unsetotherProtectVpcs();
    void setOtherProtectVpcs(const std::vector<VpcAttachmentDetail>& value);

    /// <summary>
    /// **参数解释**： 租户的所有VPC资产数量 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotalAssets() const;
    bool totalAssetsIsSet() const;
    void unsettotalAssets();
    void setTotalAssets(int32_t value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t selfTotal_;
    bool selfTotalIsSet_;
    int32_t otherTotal_;
    bool otherTotalIsSet_;
    std::vector<VpcAttachmentDetail> protectVpcs_;
    bool protectVpcsIsSet_;
    std::vector<VpcAttachmentDetail> selfProtectVpcs_;
    bool selfProtectVpcsIsSet_;
    std::vector<VpcAttachmentDetail> otherProtectVpcs_;
    bool otherProtectVpcsIsSet_;
    int32_t totalAssets_;
    bool totalAssetsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_VPCProtectsVo_H_
