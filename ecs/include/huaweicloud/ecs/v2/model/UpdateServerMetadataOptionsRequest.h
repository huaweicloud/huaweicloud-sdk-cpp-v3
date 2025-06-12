
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataOptionsRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataOptionsRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateServerMetadataOptionsRequestBody.h>
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
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerMetadataOptionsRequest
    : public ModelBase
{
public:
    UpdateServerMetadataOptionsRequest();
    virtual ~UpdateServerMetadataOptionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerMetadataOptionsRequest members

    /// <summary>
    /// 云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateServerMetadataOptionsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateServerMetadataOptionsRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    UpdateServerMetadataOptionsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateServerMetadataOptionsRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateServerMetadataOptionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataOptionsRequest_H_
