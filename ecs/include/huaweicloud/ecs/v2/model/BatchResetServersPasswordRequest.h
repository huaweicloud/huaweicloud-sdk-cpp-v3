
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResetServersPasswordRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResetServersPasswordRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchResetServersPasswordRequestBody.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchResetServersPasswordRequest
    : public ModelBase
{
public:
    BatchResetServersPasswordRequest();
    virtual ~BatchResetServersPasswordRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchResetServersPasswordRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchResetServersPasswordRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchResetServersPasswordRequestBody& value);


protected:
    BatchResetServersPasswordRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchResetServersPasswordRequest& dereference_from_shared_ptr(std::shared_ptr<BatchResetServersPasswordRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResetServersPasswordRequest_H_
