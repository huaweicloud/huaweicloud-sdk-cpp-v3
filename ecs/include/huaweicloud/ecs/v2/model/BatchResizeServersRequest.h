
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BatchResizeServersReq.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchResizeServersRequest
    : public ModelBase
{
public:
    BatchResizeServersRequest();
    virtual ~BatchResizeServersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResizeServersRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchResizeServersReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchResizeServersReq& value);


protected:
    BatchResizeServersReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchResizeServersRequest& dereference_from_shared_ptr(std::shared_ptr<BatchResizeServersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchResizeServersRequest_H_
