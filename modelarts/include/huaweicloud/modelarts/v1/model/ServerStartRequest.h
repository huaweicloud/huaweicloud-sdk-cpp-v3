
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerStartRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerStartRequest_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerStartRequest
    : public ModelBase
{
public:
    ServerStartRequest();
    virtual ~ServerStartRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerStartRequest members

    /// <summary>
    /// **参数解释**：服务器架构信息。 **约束限制**：不涉及 **取值范围**： - -ARM - X86 **默认取值**：不涉及
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器规格计费模式。 **约束限制**：不涉及。 **取值范围**： - [COMMON：同时支持包周期和按需](tag:hws,hws_hk) - POST_PAID：按需 - [PRE_PAID：包周期](tag:hws,hws_hk) **默认取值**：不涉及
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器类型。 **约束限制**：不涉及。 **取值范围**： - BMS：裸金属服务 - ECS：弹性云服务 - HPS：超节点服务 **默认取值**：不涉及
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);


protected:
    std::string arch_;
    bool archIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string serverType_;
    bool serverTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerStartRequest_H_
