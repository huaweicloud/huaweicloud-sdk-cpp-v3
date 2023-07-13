
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/DeleteServerGroupMemberRequestBody.h>
#include <string>

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
class HUAWEICLOUD_ECS_V2_EXPORT  DeleteServerGroupMemberRequest
    : public ModelBase
{
public:
    DeleteServerGroupMemberRequest();
    virtual ~DeleteServerGroupMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteServerGroupMemberRequest members

    /// <summary>
    /// 云服务器组ID。
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteServerGroupMemberRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteServerGroupMemberRequestBody& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    DeleteServerGroupMemberRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteServerGroupMemberRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteServerGroupMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServerGroupMemberRequest_H_
