
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerFlavorinstanceResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerFlavorinstanceResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：Lite Server规格详情。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerFlavorinstanceResponse
    : public ModelBase
{
public:
    ServerFlavorinstanceResponse();
    virtual ~ServerFlavorinstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerFlavorinstanceResponse members

    /// <summary>
    /// **参数解释**：CPU架构。 **约束限制**：不涉及。 **取值范围**： - X86：CPU架构为X86 - ARM：CPU架构为ARM  **默认取值**：不涉及。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数解释**：分区名。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释**：计费模式。 **约束限制**：不涉及。 **取值范围**： - PRE_PAID：计费模式为包年/包月 - POST_PAID：计费模式为按需计费 **默认取值**：不涉及。
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// **参数解释**：数量。 **约束限制**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// **参数解释**：规格名称。 **约束限制**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// **参数解释**：规格类型。 **约束限制**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);

    /// <summary>
    /// **参数解释**：roce数量。 **约束限制**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getRoceNum() const;
    bool roceNumIsSet() const;
    void unsetroceNum();
    void setRoceNum(int32_t value);

    /// <summary>
    /// **参数解释**：服务类型。 **约束限制**：不涉及。 **取值范围**： - BMS：资源类型为裸金属服务器 - ECS：资源类型为弹性云服务器 - HPS：资源类型为超节点服务器  **默认取值**：不涉及。
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// **参数解释**：计费码。 **约束限制**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSkuCode() const;
    bool skuCodeIsSet() const;
    void unsetskuCode();
    void setSkuCode(const std::string& value);

    /// <summary>
    /// **参数解释**：规格详情。 **约束限制**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getSpecification() const;
    bool specificationIsSet() const;
    void unsetspecification();
    void setSpecification(const std::string& value);

    /// <summary>
    /// **参数解释**：状态。 **约束限制**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：是否售罄。 **约束限制**：不涉及。 **取值范围**： - true：已售罄 - false：未售罄  **默认取值**：false。
    /// </summary>

    bool isIsSoldOut() const;
    bool isSoldOutIsSet() const;
    void unsetisSoldOut();
    void setIsSoldOut(bool value);


protected:
    std::string arch_;
    bool archIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string flavorType_;
    bool flavorTypeIsSet_;
    int32_t roceNum_;
    bool roceNumIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;
    std::string skuCode_;
    bool skuCodeIsSet_;
    std::string specification_;
    bool specificationIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool isSoldOut_;
    bool isSoldOutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerFlavorinstanceResponse_H_
