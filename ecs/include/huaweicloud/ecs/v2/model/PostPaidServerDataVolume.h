
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerDataVolume_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerDataVolume_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/PostPaidServerDataVolumeMetadata.h>
#include <huaweicloud/ecs/v2/model/PostPaidServerDataVolumeExtendParam.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务器对应数据盘相关配置。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  PostPaidServerDataVolume
    : public ModelBase
{
public:
    PostPaidServerDataVolume();
    virtual ~PostPaidServerDataVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostPaidServerDataVolume members

    /// <summary>
    /// 云服务器数据盘对应的磁盘类型，需要与系统所提供的磁盘类型相匹配。   - SATA：普通IO磁盘类型。  - SAS：高IO磁盘类型。  - SSD：超高IO磁盘类型。  - GPSSD：为通用型SSD磁盘类型。  - co-p1：高IO (性能优化Ⅰ型)。  - uh-l1：超高IO (时延优化)。  - ESSD：为极速IO磁盘类型。  - GPSSD2：通用型SSD V2磁盘类型。  - ESSD2：极速型SSD V2磁盘类型。   &gt; 说明： &gt;  &gt; 对于HANA云服务器、HL1型云服务器、HL2型云服务器，需使用co-p1和uh-l1两种磁盘类型。对于其他类型的云服务器，不能使用co-p1和uh-l1两种磁盘类型。  了解不同磁盘类型的详细信息，请参见 [磁盘类型及性能介绍](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。  获取region可用的卷类型，请参见[查询云硬盘类型列表](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;EVS&amp;api&#x3D;CinderListVolumeTypes)
    /// </summary>

    std::string getVolumetype() const;
    bool volumetypeIsSet() const;
    void unsetvolumetype();
    void setVolumetype(const std::string& value);

    /// <summary>
    /// 数据盘大小，容量单位为GB，输入大小范围为[10,32768]。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 给云硬盘配置iops，购买GPSSD2、ESSD2类型的云硬盘时必填，其他类型不能设置。  说明： 1、了解GPSSD2、ESSD2类型的iops大小范围，请参见 [云硬盘类型及性能介绍里面的云硬盘性能数据表](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。 2、只支持按需计费。
    /// </summary>

    int32_t getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(int32_t value);

    /// <summary>
    /// 给云硬盘配置吞吐量，单位是MiB/s，购买GPSSD2类型云盘时必填，其他类型不能设置。  说明： 1、了解GPSSD2类型的吞吐量大小范围，请参见 [云硬盘类型及性能介绍里面的云硬盘性能数据表](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。 2、只支持按需计费。
    /// </summary>

    int32_t getThroughput() const;
    bool throughputIsSet() const;
    void unsetthroughput();
    void setThroughput(int32_t value);

    /// <summary>
    /// 是否为共享磁盘。true为共享盘，false为普通云硬盘。  &gt; 说明： &gt;  &gt; 该字段已废弃，请使用multiattach。
    /// </summary>

    bool isShareable() const;
    bool shareableIsSet() const;
    void unsetshareable();
    void setShareable(bool value);

    /// <summary>
    /// 创建共享磁盘的信息。  - true：创建的磁盘为共享盘。 - false：创建的磁盘为普通云硬盘。  &gt; 说明： &gt;  &gt; shareable当前为废弃字段，如果确实需要同时使用shareable字段和multiattach字段，此时，请确保两个字段的参数值相同。当不指定该字段时，系统默认创建普通云硬盘。
    /// </summary>

    bool isMultiattach() const;
    bool multiattachIsSet() const;
    void unsetmultiattach();
    void setMultiattach(bool value);

    /// <summary>
    /// 数据卷是否使用SCSI锁。  - true表示云硬盘的设备类型为SCSI类型，即允许ECS操作系统直接访问底层存储介质。支持SCSI锁命令。 - false表示云硬盘的设备类型为VBD (虚拟块存储设备 , Virtual Block Device)类型，即为默认类型，VBD只能支持简单的SCSI读写命令。 - 该字段不存在时，云硬盘默认为VBD类型。  &gt; 说明： &gt;  &gt; 此参数为boolean类型，若传入非boolean类型字符，程序将按照【false】方式处理。
    /// </summary>

    bool isHwpassthrough() const;
    bool hwpassthroughIsSet() const;
    void unsethwpassthrough();
    void setHwpassthrough(bool value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerDataVolumeExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PostPaidServerDataVolumeExtendParam& value);

    /// <summary>
    /// 云服务器数据盘对应的磁盘存储类型。 磁盘存储类型枚举值： DSS：专属存储类型
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

    PostPaidServerDataVolumeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PostPaidServerDataVolumeMetadata& value);

    /// <summary>
    /// 数据镜像的ID，UUID格式。  如果使用数据盘镜像创建数据盘，则data_image_id为必选参数，且不支持使用metadata。
    /// </summary>

    std::string getDataImageId() const;
    bool dataImageIdIsSet() const;
    void unsetdataImageId();
    void setDataImageId(const std::string& value);

    /// <summary>
    /// 数据盘随实例释放策略。  true：数据盘随实例释放。 false：数据盘不随实例释放。 默认值：false。
    /// </summary>

    bool isDeleteOnTermination() const;
    bool deleteOnTerminationIsSet() const;
    void unsetdeleteOnTermination();
    void setDeleteOnTermination(bool value);


protected:
    std::string volumetype_;
    bool volumetypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    int32_t iops_;
    bool iopsIsSet_;
    int32_t throughput_;
    bool throughputIsSet_;
    bool shareable_;
    bool shareableIsSet_;
    bool multiattach_;
    bool multiattachIsSet_;
    bool hwpassthrough_;
    bool hwpassthroughIsSet_;
    PostPaidServerDataVolumeExtendParam extendparam_;
    bool extendparamIsSet_;
    std::string clusterType_;
    bool clusterTypeIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    PostPaidServerDataVolumeMetadata metadata_;
    bool metadataIsSet_;
    std::string dataImageId_;
    bool dataImageIdIsSet_;
    bool deleteOnTermination_;
    bool deleteOnTerminationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerDataVolume_H_
