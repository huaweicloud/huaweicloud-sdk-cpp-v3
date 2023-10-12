
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerBlockDeviceRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerBlockDeviceRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerBlockDeviceRequest
    : public ModelBase
{
public:
    ShowServerBlockDeviceRequest();
    virtual ~ShowServerBlockDeviceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerBlockDeviceRequest members

    /// <summary>
    /// 云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 云硬盘ID，UUID格式。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowServerBlockDeviceRequest& dereference_from_shared_ptr(std::shared_ptr<ShowServerBlockDeviceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerBlockDeviceRequest_H_
