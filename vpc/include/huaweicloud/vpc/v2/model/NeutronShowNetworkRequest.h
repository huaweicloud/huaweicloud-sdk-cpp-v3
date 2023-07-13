
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowNetworkRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowNetworkRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronShowNetworkRequest
    : public ModelBase
{
public:
    NeutronShowNetworkRequest();
    virtual ~NeutronShowNetworkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronShowNetworkRequest members

    /// <summary>
    /// 网络ID
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);


protected:
    std::string networkId_;
    bool networkIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronShowNetworkRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronShowNetworkRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronShowNetworkRequest_H_
