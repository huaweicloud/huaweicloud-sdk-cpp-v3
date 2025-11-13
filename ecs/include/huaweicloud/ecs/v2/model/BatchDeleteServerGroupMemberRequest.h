
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerGroupMemberRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerGroupMemberRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchDeleteServerGroupMemberReq.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchDeleteServerGroupMemberRequest
    : public ModelBase
{
public:
    BatchDeleteServerGroupMemberRequest();
    virtual ~BatchDeleteServerGroupMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteServerGroupMemberRequest members

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

    BatchDeleteServerGroupMemberReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteServerGroupMemberReq& value);


protected:
    std::string serverGroupId_;
    bool serverGroupIdIsSet_;
    BatchDeleteServerGroupMemberReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteServerGroupMemberRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteServerGroupMemberRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerGroupMemberRequest_H_
