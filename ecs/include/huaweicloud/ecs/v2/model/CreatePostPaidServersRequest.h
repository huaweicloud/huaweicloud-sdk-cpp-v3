
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/CreatePostPaidServersRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  CreatePostPaidServersRequest
    : public ModelBase
{
public:
    CreatePostPaidServersRequest();
    virtual ~CreatePostPaidServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePostPaidServersRequest members

    /// <summary>
    /// 保证客户端请求幂等性的标识
    /// </summary>

    std::string getXClientToken() const;
    bool xClientTokenIsSet() const;
    void unsetxClientToken();
    void setXClientToken(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreatePostPaidServersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreatePostPaidServersRequestBody& value);


protected:
    std::string xClientToken_;
    bool xClientTokenIsSet_;
    CreatePostPaidServersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatePostPaidServersRequest& dereference_from_shared_ptr(std::shared_ptr<CreatePostPaidServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_CreatePostPaidServersRequest_H_
