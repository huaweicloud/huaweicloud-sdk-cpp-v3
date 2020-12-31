
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerBlockDevice_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerBlockDevice_H_

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
/// 查询云服务器指定磁盘挂载信息响应信息
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  ServerBlockDevice
    : public ModelBase
{
public:
    ServerBlockDevice();
    virtual ~ServerBlockDevice();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerBlockDevice members

    /// <summary>
    /// 云硬盘启动顺序。  - 0为系统盘。  - 非0为数据盘
    /// </summary>

    int32_t getBootIndex() const;
    bool bootIndexIsSet() const;
    void unsetbootIndex();
    void setBootIndex(int32_t value);

    /// <summary>
    /// pci地址。
    /// </summary>

    std::string getPciAddress() const;
    bool pciAddressIsSet() const;
    void unsetpciAddress();
    void setPciAddress(const std::string& value);

    /// <summary>
    /// 云硬盘ID，UUID格式。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 云硬盘挂载盘符，即磁盘挂载点。
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);

    /// <summary>
    /// 弹性云服务器ID，UUID格式。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 挂载ID，与云硬盘ID相同。UUID格式。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云硬盘大小，单位GB。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 磁盘总线类型 。  取值范围：virtio、scsi
    /// </summary>

    std::string getBus() const;
    bool busIsSet() const;
    void unsetbus();
    void setBus(const std::string& value);


protected:
    int32_t bootIndex_;
    bool bootIndexIsSet_;
    std::string pciAddress_;
    bool pciAddressIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string device_;
    bool deviceIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    std::string id_;
    bool idIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string bus_;
    bool busIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerBlockDevice_H_
