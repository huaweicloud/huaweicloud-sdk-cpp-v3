
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateRoceNetworkRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateRoceNetworkRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerRoceNetworkRequest.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateRoceNetworkRequest
    : public ModelBase
{
public:
    CreateRoceNetworkRequest();
    virtual ~CreateRoceNetworkRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRoceNetworkRequest members

    /// <summary>
    /// 
    /// </summary>

    ServerRoceNetworkRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ServerRoceNetworkRequest& value);


protected:
    ServerRoceNetworkRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateRoceNetworkRequest& dereference_from_shared_ptr(std::shared_ptr<CreateRoceNetworkRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateRoceNetworkRequest_H_
