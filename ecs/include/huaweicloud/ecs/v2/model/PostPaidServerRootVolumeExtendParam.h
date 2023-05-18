
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerRootVolumeExtendParam_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerRootVolumeExtendParam_H_

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
class HUAWEICLOUD_ECS_V2_EXPORT  PostPaidServerRootVolumeExtendParam
    : public ModelBase
{
public:
    PostPaidServerRootVolumeExtendParam();
    virtual ~PostPaidServerRootVolumeExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostPaidServerRootVolumeExtendParam members

    /// <summary>
    /// 磁盘产品资源规格编码，如SATA，SAS和SSD。  &gt; 说明： &gt;  &gt; 废弃字段。
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 磁盘产品资源类型。  &gt; 说明： &gt;  &gt; 废弃字段。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 整机镜像中自带的原始数据盘（简称“原数据盘”）所对应的快照ID或原始数据盘ID。  使用场景：  使用整机镜像创建云服务器，并且选择的整机镜像自带1个或者多个数据盘。  用途：  使用整机镜像创建云服务器时，系统会自动恢复整机镜像中自带数据盘（如果有）的数据，但是磁盘类型将被恢复为默认属性：普通I/O、VBD、非共享盘。此时，您可以通过snapshotID，修改指定原数据盘恢复后的磁盘类型。  &gt; 说明： &gt;  &gt; - 建议对每块原数据盘都指定snapshotID，否则，未指定的原数据盘将按默认属性进行创建。 &gt; - 如需修改磁盘大小，修改后的磁盘大小需大于等于原数据盘大小。否则，会影响原数据盘的数据恢复。  实现原理：  snapshotId是整机镜像自带原始数据盘的唯一标识，通过snapshotId可以获取原数据盘的磁盘信息，从而恢复数据盘数据。  快照ID的获取方法：  登录管理控制台，打开\&quot;云硬盘 &gt; 快照\&quot;页面，根据原始数据盘的磁盘名称找到对应的快照ID。
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);


protected:
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string snapshotId_;
    bool snapshotIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerRootVolumeExtendParam_H_
