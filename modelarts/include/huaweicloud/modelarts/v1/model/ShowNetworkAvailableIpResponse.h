
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNetworkAvailableIpResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNetworkAvailableIpResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/SubnetIpAvailability.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowNetworkAvailableIpResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowNetworkAvailableIpResponse();
    virtual ~ShowNetworkAvailableIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNetworkAvailableIpResponse members

    /// <summary>
    /// **参数解释**：子网的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：子网的ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// **参数解释**：子网可用的网络IP数量。
    /// </summary>

    std::vector<SubnetIpAvailability>& getSubnetIpAvailability();
    bool subnetIpAvailabilityIsSet() const;
    void unsetsubnetIpAvailability();
    void setSubnetIpAvailability(const std::vector<SubnetIpAvailability>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;
    std::vector<SubnetIpAvailability> subnetIpAvailability_;
    bool subnetIpAvailabilityIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNetworkAvailableIpResponse_H_
