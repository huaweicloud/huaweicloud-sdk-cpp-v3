
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchStopServersRequestBody.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchStopServersRequest
    : public ModelBase
{
public:
    BatchStopServersRequest();
    virtual ~BatchStopServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStopServersRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchStopServersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchStopServersRequestBody& value);


protected:
    BatchStopServersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchStopServersRequest& dereference_from_shared_ptr(std::shared_ptr<BatchStopServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchStopServersRequest_H_
