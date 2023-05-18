
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerRootVolume_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerRootVolume_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/PostPaidServerRootVolumeMetadata.h>
#include <string>
#include <huaweicloud/ecs/v2/model/PostPaidServerRootVolumeExtendParam.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  PostPaidServerRootVolume
    : public ModelBase
{
public:
    PostPaidServerRootVolume();
    virtual ~PostPaidServerRootVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostPaidServerRootVolume members

    /// <summary>
    /// 云服务器系统盘对应的磁盘类型，需要与系统所提供的磁盘类型相匹配。  - SATA：普通IO磁盘类型。 - SAS：高IO磁盘类型。 - SSD：超高IO磁盘类型。 - co-p1：高IO (性能优化Ⅰ型) - uh-l1：超高IO (时延优化)  &gt; 说明： &gt;  &gt; 对于HANA云服务器、HL1型云服务器、HL2型云服务器，需使用co-p1和uh-l1两种磁盘类型。对于其他类型的云服务器，不能使用co-p1和uh-l1两种磁盘类型。
    /// </summary>

    std::string getVolumetype() const;
    bool volumetypeIsSet() const;
    void unsetvolumetype();
    void setVolumetype(const std::string& value);

    /// <summary>
    /// 系统盘大小，容量单位为GB， 输入大小范围为[1,1024]。  约束：  - 系统盘大小取值应不小于镜像支持的系统盘的最小值(镜像的min_disk属性)。 - 若该参数没有指定或者指定为0时，系统盘大小默认取值为镜像中系统盘的最小值(镜像的min_disk属性)。  &gt; 说明： &gt; &gt; 镜像系统盘的最小值(镜像的min_disk属性)可在控制台中点击镜像详情查看。或通过调用“查询镜像详情（OpenStack原生）”API获取，详细操作请参考[《镜像服务API参考》](https://support.huaweicloud.com/api-ims/ims_03_0702.html)中“查询镜像详情（OpenStack原生）”章节。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 使用SDI规格创建虚拟机时请关注该参数，如果该参数值为true，说明创建的为scsi类型的卷  &gt; 说明： &gt;  &gt; 此参数为boolean类型，若传入非boolean类型字符，程序将按照false方式处理。
    /// </summary>

    bool isHwpassthrough() const;
    bool hwpassthroughIsSet() const;
    void unsethwpassthrough();
    void setHwpassthrough(bool value);

    /// <summary>
    /// 云服务器系统盘对应的磁盘存储类型。 磁盘存储类型枚举值： DSS：专属存储类型
    /// </summary>

    std::string getClusterType() const;
    bool clusterTypeIsSet() const;
    void unsetclusterType();
    void setClusterType(const std::string& value);

    /// <summary>
    /// 云服务器数据盘对应的存储池的ID。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerRootVolumeExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PostPaidServerRootVolumeExtendParam& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerRootVolumeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PostPaidServerRootVolumeMetadata& value);


protected:
    std::string volumetype_;
    bool volumetypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    bool hwpassthrough_;
    bool hwpassthroughIsSet_;
    std::string clusterType_;
    bool clusterTypeIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    PostPaidServerRootVolumeExtendParam extendparam_;
    bool extendparamIsSet_;
    PostPaidServerRootVolumeMetadata metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerRootVolume_H_
