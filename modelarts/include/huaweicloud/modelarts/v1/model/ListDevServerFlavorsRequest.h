
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerFlavorsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerFlavorsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListDevServerFlavorsRequest
    : public ModelBase
{
public:
    ListDevServerFlavorsRequest();
    virtual ~ListDevServerFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDevServerFlavorsRequest members

    /// <summary>
    /// **参数解释**：服务类型。 **约束限制**：不涉及。 **取值范围**： - BMS：资源类型为裸金属服务器 - ECS：资源类型为弹性云服务器 - HPS：资源类型为超节点服务器  **默认取值**：不涉及。
    /// </summary>

    std::string getServerType() const;
    bool serverTypeIsSet() const;
    void unsetserverType();
    void setServerType(const std::string& value);

    /// <summary>
    /// **参数解释**：规格的CPU架构。 **约束限制**：不涉及。 **取值范围**： - X86：CPU架构为X86 - ARM：CPU架构为ARM **默认取值**：不涉及。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// **参数解释**：计费模式。 **约束限制**：不涉及。 **取值范围**： - PRE_PAID：计费模式为包年/包月 - POST_PAID：计费模式为按需计费 **默认取值**：不涉及。
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);


protected:
    std::string serverType_;
    bool serverTypeIsSet_;
    std::string arch_;
    bool archIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDevServerFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ListDevServerFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListDevServerFlavorsRequest_H_
