
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNetworkAvailableIpRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNetworkAvailableIpRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowNetworkAvailableIpRequest
    : public ModelBase
{
public:
    ShowNetworkAvailableIpRequest();
    virtual ~ShowNetworkAvailableIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNetworkAvailableIpRequest members

    /// <summary>
    /// **参数解释**：网络ID。取值自网络详情的metadata.name字段。 **约束限制**：1 - 64字符，字母、数字和中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNetworkName() const;
    bool networkNameIsSet() const;
    void unsetnetworkName();
    void setNetworkName(const std::string& value);

    /// <summary>
    /// **参数解释**：子网ID。取值自网络详情status.subnets字段中的networkId字段。 **约束限制**：1 - 64字符，字母、数字和中划线。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);


protected:
    std::string networkName_;
    bool networkNameIsSet_;
    std::string networkId_;
    bool networkIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowNetworkAvailableIpRequest& dereference_from_shared_ptr(std::shared_ptr<ShowNetworkAvailableIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowNetworkAvailableIpRequest_H_
