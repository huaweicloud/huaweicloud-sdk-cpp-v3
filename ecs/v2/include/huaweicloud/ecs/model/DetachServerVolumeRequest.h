
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_DetachServerVolumeRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_DetachServerVolumeRequest_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

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
class HUAWEICLOUD_ECS_EXPORT  DetachServerVolumeRequest
    : public ModelBase
{
public:
    DetachServerVolumeRequest();
    virtual ~DetachServerVolumeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetachServerVolumeRequest members

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

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getDeleteFlag() const;
    bool deleteFlagIsSet() const;
    void unsetdeleteFlag();
    void setDeleteFlag(const std::string& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string deleteFlag_;
    bool deleteFlagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DetachServerVolumeRequest& dereference_from_shared_ptr(std::shared_ptr<DetachServerVolumeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_DetachServerVolumeRequest_H_
