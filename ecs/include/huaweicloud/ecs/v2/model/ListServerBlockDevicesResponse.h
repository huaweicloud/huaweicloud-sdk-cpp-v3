
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerBlockDevicesResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerBlockDevicesResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/BlockDeviceAttachableQuantity.h>
#include <vector>
#include <huaweicloud/ecs/v2/model/ServerBlockDevice.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerBlockDevicesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerBlockDevicesResponse();
    virtual ~ListServerBlockDevicesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServerBlockDevicesResponse members

    /// <summary>
    /// 
    /// </summary>

    BlockDeviceAttachableQuantity getAttachableQuantity() const;
    bool attachableQuantityIsSet() const;
    void unsetattachableQuantity();
    void setAttachableQuantity(const BlockDeviceAttachableQuantity& value);

    /// <summary>
    /// 云服务器挂载信息列表。
    /// </summary>

    std::vector<ServerBlockDevice>& getVolumeAttachments();
    bool volumeAttachmentsIsSet() const;
    void unsetvolumeAttachments();
    void setVolumeAttachments(const std::vector<ServerBlockDevice>& value);


protected:
    BlockDeviceAttachableQuantity attachableQuantity_;
    bool attachableQuantityIsSet_;
    std::vector<ServerBlockDevice> volumeAttachments_;
    bool volumeAttachmentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerBlockDevicesResponse_H_
