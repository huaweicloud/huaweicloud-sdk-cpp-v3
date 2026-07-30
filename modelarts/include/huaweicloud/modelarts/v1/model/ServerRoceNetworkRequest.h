
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerRoceNetworkRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerRoceNetworkRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerRoceNetworkRequest
    : public ModelBase
{
public:
    ServerRoceNetworkRequest();
    virtual ~ServerRoceNetworkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerRoceNetworkRequest members

    /// <summary>
    /// **参数解释**：RoCE网络类型。 **约束限制**：不涉及。 **取值范围**：  - vxlan_roce  - roce_v2  **默认取值**：不涉及。
    /// </summary>

    std::string getNetworkType() const;
    bool networkTypeIsSet() const;
    void unsetnetworkType();
    void setNetworkType(const std::string& value);

    /// <summary>
    /// **参数解释**：物理网络名称。 **约束限制**：^[-_.a-zA-Z0-9]{1,64}$。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getPhysicalNetwork() const;
    bool physicalNetworkIsSet() const;
    void unsetphysicalNetwork();
    void setPhysicalNetwork(const std::string& value);


protected:
    std::string networkType_;
    bool networkTypeIsSet_;
    std::string physicalNetwork_;
    bool physicalNetworkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerRoceNetworkRequest_H_
