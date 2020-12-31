
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerTagsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerTagsRequest_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/ecs/model/BatchDeleteServerTagsRequestBody.h"

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
class HUAWEICLOUD_ECS_EXPORT  BatchDeleteServerTagsRequest
    : public ModelBase
{
public:
    BatchDeleteServerTagsRequest();
    virtual ~BatchDeleteServerTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteServerTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteServerTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteServerTagsRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    BatchDeleteServerTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteServerTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteServerTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerTagsRequest_H_
