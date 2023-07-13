
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesOption_H_

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
class HUAWEICLOUD_ECS_V2_EXPORT  BatchAttachSharableVolumesOption
    : public ModelBase
{
public:
    BatchAttachSharableVolumesOption();
    virtual ~BatchAttachSharableVolumesOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchAttachSharableVolumesOption members

    /// <summary>
    /// 共享磁盘需要挂载的弹性云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 磁盘挂载点。  &gt; 说明： &gt;  &gt; - 新增加的磁盘挂载点不能和已有的磁盘挂载点相同。 &gt; - 对于采用XEN虚拟化类型的弹性云服务器，device为必选参数；系统盘挂载点请指定/dev/sda；数据盘挂载点请按英文字母顺序依次指定，如/dev/sdb，/dev/sdc，如果指定了以“/dev/vd”开头的挂载点，系统默认改为“/dev/sd”。 &gt; - 对于采用KVM虚拟化类型的弹性云服务器，系统盘挂载点请指定/dev/vda；数据盘挂载点可不用指定，也可按英文字母顺序依次指定，如/dev/vdb，/dev/vdc，如果指定了以“/dev/sd”开头的挂载点，系统默认改为“/dev/vd”。
    /// </summary>

    std::string getDevice() const;
    bool deviceIsSet() const;
    void unsetdevice();
    void setDevice(const std::string& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string device_;
    bool deviceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchAttachSharableVolumesOption_H_
