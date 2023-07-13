
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/AddServerGroupMemberRequestBody.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  AddServerGroupMemberRequest
    : public ModelBase
{
public:
    AddServerGroupMemberRequest();
    virtual ~AddServerGroupMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddServerGroupMemberRequest members

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

    AddServerGroupMemberRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddServerGroupMemberRequestBody& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    AddServerGroupMemberRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddServerGroupMemberRequest& dereference_from_shared_ptr(std::shared_ptr<AddServerGroupMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AddServerGroupMemberRequest_H_
