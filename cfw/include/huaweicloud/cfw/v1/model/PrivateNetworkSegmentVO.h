
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_PrivateNetworkSegmentVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_PrivateNetworkSegmentVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 私网网段的详细信息，会将参数中conf_id的私网网段信息覆盖更新
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  PrivateNetworkSegmentVO
    : public ModelBase
{
public:
    PrivateNetworkSegmentVO();
    virtual ~PrivateNetworkSegmentVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrivateNetworkSegmentVO members

    /// <summary>
    /// **参数解释**： 私网网段ID，更新私网网段时需要 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getConfId() const;
    bool confIdIsSet() const;
    void unsetconfId();
    void setConfId(const std::string& value);

    /// <summary>
    /// **参数解释**： 私网网段，格式为：IP/Mask **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getProtectNetwork() const;
    bool protectNetworkIsSet() const;
    void unsetprotectNetwork();
    void setProtectNetwork(const std::string& value);

    /// <summary>
    /// **参数解释**： 私网网段的可用区信息，如AZ1 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAzInfo() const;
    bool azInfoIsSet() const;
    void unsetazInfo();
    void setAzInfo(const std::string& value);

    /// <summary>
    /// **参数解释**： 子网名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getSubnetName() const;
    bool subnetNameIsSet() const;
    void unsetsubnetName();
    void setSubnetName(const std::string& value);


protected:
    std::string confId_;
    bool confIdIsSet_;
    std::string protectNetwork_;
    bool protectNetworkIsSet_;
    std::string azInfo_;
    bool azInfoIsSet_;
    std::string subnetName_;
    bool subnetNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_PrivateNetworkSegmentVO_H_
