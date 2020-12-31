
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequest_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include "huaweicloud/ecs/model/UpdateServerMetadataRequestBody.h"

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
class HUAWEICLOUD_ECS_EXPORT  UpdateServerMetadataRequest
    : public ModelBase
{
public:
    UpdateServerMetadataRequest();
    virtual ~UpdateServerMetadataRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateServerMetadataRequest members

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

    UpdateServerMetadataRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateServerMetadataRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    UpdateServerMetadataRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateServerMetadataRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateServerMetadataRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequest_H_
