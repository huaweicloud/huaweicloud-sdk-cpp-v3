
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerGroupMemberRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerGroupMemberRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchAddServerGroupMemberReq.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchAddServerGroupMemberRequest
    : public ModelBase
{
public:
    BatchAddServerGroupMemberRequest();
    virtual ~BatchAddServerGroupMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddServerGroupMemberRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getServerGroupId() const;
    bool serverGroupIdIsSet() const;
    void unsetserverGroupId();
    void setServerGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchAddServerGroupMemberReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAddServerGroupMemberReq& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    BatchAddServerGroupMemberReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAddServerGroupMemberRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAddServerGroupMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAddServerGroupMemberRequest_H_
