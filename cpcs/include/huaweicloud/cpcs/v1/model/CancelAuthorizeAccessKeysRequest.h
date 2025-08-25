
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CancelAuthorizeAccessKeysRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CancelAuthorizeAccessKeysRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/DeAuthorizeAccessKeysRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CancelAuthorizeAccessKeysRequest
    : public ModelBase
{
public:
    CancelAuthorizeAccessKeysRequest();
    virtual ~CancelAuthorizeAccessKeysRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelAuthorizeAccessKeysRequest members

    /// <summary>
    /// 所需要解除授权的密码集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeAuthorizeAccessKeysRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeAuthorizeAccessKeysRequestBody& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    DeAuthorizeAccessKeysRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CancelAuthorizeAccessKeysRequest& dereference_from_shared_ptr(std::shared_ptr<CancelAuthorizeAccessKeysRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CancelAuthorizeAccessKeysRequest_H_
