
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BlockDeviceAttachableQuantity_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BlockDeviceAttachableQuantity_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"


namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 云服务器可挂载磁盘数量。
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  BlockDeviceAttachableQuantity
    : public ModelBase
{
public:
    BlockDeviceAttachableQuantity();
    virtual ~BlockDeviceAttachableQuantity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BlockDeviceAttachableQuantity members

    /// <summary>
    /// 云服务器可挂载scsi类型磁盘数量。
    /// </summary>

    int32_t getFreeScsi() const;
    bool freeScsiIsSet() const;
    void unsetfreeScsi();
    void setFreeScsi(int32_t value);

    /// <summary>
    /// 云服务器可挂载virtio_blk类型磁盘数量。
    /// </summary>

    int32_t getFreeBlk() const;
    bool freeBlkIsSet() const;
    void unsetfreeBlk();
    void setFreeBlk(int32_t value);

    /// <summary>
    /// 云服务器可挂载磁盘总数。
    /// </summary>

    int32_t getFreeDisk() const;
    bool freeDiskIsSet() const;
    void unsetfreeDisk();
    void setFreeDisk(int32_t value);


protected:
    int32_t freeScsi_;
    bool freeScsiIsSet_;
    int32_t freeBlk_;
    bool freeBlkIsSet_;
    int32_t freeDisk_;
    bool freeDiskIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BlockDeviceAttachableQuantity_H_
