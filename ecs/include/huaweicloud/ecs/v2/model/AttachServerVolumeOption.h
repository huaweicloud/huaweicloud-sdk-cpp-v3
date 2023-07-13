
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  AttachServerVolumeOption
    : public ModelBase
{
public:
    AttachServerVolumeOption();
    virtual ~AttachServerVolumeOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachServerVolumeOption members

    /// <summary>
    /// 磁盘挂载点。  &gt; 说明：  - 新增加的磁盘挂载点不能和已有的磁盘挂载点相同。  - 对于采用XEN虚拟化类型的弹性云服务器，device为必选参数；系统盘挂载点请指定/dev/sda；数据盘挂载点请按英文字母顺序依次指定，如/dev/sdb，/dev/sdc，如果指定了以“/dev/vd”开头的挂载点，系统默认改为“/dev/sd”。  - 对于采用KVM虚拟化类型的弹性云服务器，系统盘挂载点请指定/dev/vda；数据盘挂载点可不用指定，也可按英文字母顺序依次指定，如/dev/vdb，/dev/vdc，如果指定了以“/dev/sd”开头的挂载点，系统默认改为“/dev/vd”。
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);

    /// <summary>
    /// 待挂载磁盘的磁盘ID，UUID格式。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 云硬盘类型。  该字段于dry_run为true并且volumeId不存在时有效且为必选字段。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 云硬盘的个数。  该字段于dry_run为true并且volumeId不存在时有效，如果该字段不存在，默认为1。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// - true: 表示云硬盘的设备类型为SCSI类型，即允许ECS操作系统直接访问底层存储介质。支持SCSI锁命令 - false: 表示云硬盘的设备类型为VBD (虚拟块存储设备 , Virtual Block Device)类型，VBD只能支持简单的SCSI读写命令。 该字段于dry_run为true并且volumeId不存在时有效且为必选字段。
    /// </summary>

    std::string getHwpassthrough() const;
    bool hwpassthroughIsSet() const;
    void unsethwpassthrough();
    void setHwpassthrough(const std::string& value);


protected:
    std::string device_;
    bool deviceIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::string hwpassthrough_;
    bool hwpassthroughIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeOption_H_
