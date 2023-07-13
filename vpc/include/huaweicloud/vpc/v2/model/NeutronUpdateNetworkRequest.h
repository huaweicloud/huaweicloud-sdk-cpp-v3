
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronUpdateNetworkRequestBody.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronUpdateNetworkRequest
    : public ModelBase
{
public:
    NeutronUpdateNetworkRequest();
    virtual ~NeutronUpdateNetworkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronUpdateNetworkRequest members

    /// <summary>
    /// 网络ID
    /// </summary>

    std::string getNetworkId() const;
    bool networkIdIsSet() const;
    void unsetnetworkId();
    void setNetworkId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NeutronUpdateNetworkRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronUpdateNetworkRequestBody& value);


protected:
    std::string networkId_;
    bool networkIdIsSet_;
    NeutronUpdateNetworkRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronUpdateNetworkRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronUpdateNetworkRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronUpdateNetworkRequest_H_
