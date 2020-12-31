
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerBlockDeviceMapping_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerBlockDeviceMapping_H_

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
///  扩展属性，指定弹性云服务器存储设备的v2接口。是存储资源的新版本接口，指定卷场景不能批创弹性云服务器。  裸金属服务器场景不支持。
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  NovaServerBlockDeviceMapping
    : public ModelBase
{
public:
    NovaServerBlockDeviceMapping();
    virtual ~NovaServerBlockDeviceMapping();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerBlockDeviceMapping members

    /// <summary>
    /// 卷设备的源头类型，当前只支持volume、image、snapshot、blank类型。  当使用卷创建云服务器时，source_type设置为volume；当使用镜像创建云服务器时，source_type设置为image；当使用快照创建云服务器时，source_type设置为snapshot；当创建空数据卷时，source_type设置为blank。  - 说明： -  - 当卷设备的源头类型为snapshot时，且boot_index为0，则该快照对应的云硬盘必须为系统盘。
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// 卷设备的目标类型，当前仅支持volume类型。  - volume：卷。 - local：本地文件，当前不支持该类型。
    /// </summary>

    std::string getDestinationType() const;
    bool destinationTypeIsSet() const;
    void unsetdestinationType();
    void setDestinationType(const std::string& value);

    /// <summary>
    /// local文件系统格式，例如：swap, ext4。  当前不支持该功能。
    /// </summary>

    std::string getGuestFormat() const;
    bool guestFormatIsSet() const;
    void unsetguestFormat();
    void setGuestFormat(const std::string& value);

    /// <summary>
    /// 卷设备名称。  &gt; 说明： &gt;  &gt; 该字段已经废弃。 &gt;  &gt; 用户指定的device_name不会生效，系统会默认生成一个device_name。
    /// </summary>

    std::string getDeviceName() const;
    bool deviceNameIsSet() const;
    void unsetdeviceName();
    void setDeviceName(const std::string& value);

    /// <summary>
    /// 删除弹性云服务器时，是否删除卷，默认值false。  true：删除弹性云服务器时，删除卷  false：删除弹性云服务器时，不删除卷
    /// </summary>

    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);

    /// <summary>
    /// 启动标识，“0”代表启动盘，“-1“代表非启动盘。  &gt; 说明： &gt;  &gt; 当卷设备的源头类型全为volume时，boot_index的值有一个为0。
    /// </summary>

    std::string getBootIndex() const;
    bool bootIndexIsSet() const;
    void unsetbootIndex();
    void setBootIndex(const std::string& value);

    /// <summary>
    /// 当source_type值是volume时，uuid为卷的uuid；  当source_type值是snapshot时，uuid为快照的uuid；  当source_type值是image时，uuid为镜像的uuid；
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 卷大小，整数，在source_type是image或blank，destination_type是volume的时候必选。  单位为GB。
    /// </summary>

    int32_t getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(int32_t value);

    /// <summary>
    /// 卷类型，在source_type是image，destination_type是volume时建议填写。  卷类型取值范围请参考 EVS 服务 磁盘类型介绍。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);


protected:
    std::string sourceType_;
    bool sourceTypeIsSet_;
    std::string destinationType_;
    bool destinationTypeIsSet_;
    std::string guestFormat_;
    bool guestFormatIsSet_;
    std::string deviceName_;
    bool deviceNameIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;
    std::string bootIndex_;
    bool bootIndexIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    int32_t volumeSize_;
    bool volumeSizeIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerBlockDeviceMapping_H_
