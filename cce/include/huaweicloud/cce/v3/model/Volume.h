
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Volume_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Volume_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/VolumeMetadata.h>
#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Volume
    : public ModelBase
{
public:
    Volume();
    virtual ~Volume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Volume members

    /// <summary>
    /// 磁盘大小，单位为GB  - 系统盘取值范围：40~1024 [- 数据盘取值范围：100~32768](tag:sbc,hk_sbc,ctc,cmcc,g42,tm,hk_tm,hk_g42,hcso) [- 第一块数据盘取值范围：20~32768(当缺省磁盘初始化配置管理参数storage时，数据盘取值范围：100-32768)](tag:hws,hws_hk) [- 第一块数据盘取值范围：100~32768](tag:hcs) [- 其他数据盘取值范围：10~32768(当缺省磁盘初始化配置管理参数storage时，数据盘取值范围：100-32768)](tag:hws,hws_hk,hcs)
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 磁盘类型，取值请参见创建云服务器 中“root_volume字段数据结构说明”。  - SAS：高IO，是指由SAS存储提供资源的磁盘类型。 - SSD：超高IO，是指由SSD存储提供资源的磁盘类型。 - SATA：普通IO，是指由SATA存储提供资源的磁盘类型。EVS已下线SATA磁盘，仅存量节点有此类型的磁盘。 [- ESSD：通用型SSD云硬盘，是指由SSD存储提供资源的磁盘类型。](tag:hws) [- GPSDD：通用型SSD云硬盘，是指由SSD存储提供资源的磁盘类型。](tag:hws) [- ESSD2：极速型SSD V2云硬盘，是指由极速型SSD V2存储提供资源的磁盘类型。](tag:hws) [- GPSSD2：通用型SSD V2云硬盘，是指由通用型SSD V2存储提供资源的磁盘类型。](tag:hws) [&gt; 了解不同磁盘类型的详细信息，链接请参见[创建云服务器](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。](tag:hws)
    /// </summary>

    std::string getVolumetype() const;
    bool volumetypeIsSet() const;
    void unsetvolumetype();
    void setVolumetype(const std::string& value);

    /// <summary>
    /// 给云硬盘配置iops，购买GPSSD2、ESSD2类型的云硬盘时必填，其他类型不能设置。 &gt; - 只支持按需计费。 &gt; - 了解GPSSD2、ESSD2类型的iops大小范围，请参见[云硬盘类型及性能介绍里面的云硬盘性能数据表](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。
    /// </summary>

    int32_t getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(int32_t value);

    /// <summary>
    /// 给云硬盘配置吞吐量，单位是MiB/s，购买GPSSD2类型云硬盘时必填，其他类型不能设置。 &gt; - 只支持按需计费。 &gt; - 了解GPSSD2类型的吞吐量大小范围，请参见[云硬盘类型及性能介绍里面的云硬盘性能数据表](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。
    /// </summary>

    int32_t getThroughput() const;
    bool throughputIsSet() const;
    void unsetthroughput();
    void setThroughput(int32_t value);

    /// <summary>
    /// 磁盘扩展参数，取值请参见创建云服务器中“extendparam”参数的描述。 [链接请参见[创建云服务器](https://support.huaweicloud.com/api-ecs/zh-cn_topic_0020212668.html)](tag:hws) [链接请参见[创建云服务器](https://support.huaweicloud.com/intl/zh-cn/api-ecs/zh-cn_topic_0020212668.html)](tag:hws_hk) 
    /// </summary>

    std::map<std::string, Object>& getExtendParam();
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const std::map<std::string, Object>& value);

    /// <summary>
    /// 云服务器系统盘对应的存储池的ID。仅用作专属云集群，专属分布式存储DSS的存储池ID，即dssPoolID。  [获取方法请参见[获取单个专属分布式存储池详情](https://support.huaweicloud.com/api-dss/dss_02_1001.html)中“表3 响应参数”的ID字段。](tag:hws) [获取方法请参见[获取单个专属分布式存储池详情](https://support.huaweicloud.com/intl/zh-cn/api-dss/dss_02_1001.html)中“表3 响应参数”的ID字段。](tag:hws_hk)
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 云服务器系统盘对应的磁盘存储类型。仅用作专属云集群，固定取值为dss。  
    /// </summary>

    std::string getClusterType() const;
    bool clusterTypeIsSet() const;
    void unsetclusterType();
    void setClusterType(const std::string& value);

    /// <summary>
    /// - 使用SDI规格创建虚拟机时请关注该参数，如果该参数值为true，说明创建的为SCSI类型的卷 - 节点池类型为ElasticBMS时，此参数必须填写为true - 如存在节点规格涉及本地盘并同时使用云硬盘场景时，请设置磁盘初始化配置管理参数，参见[节点磁盘挂载](node_storage_example.xml)。 
    /// </summary>

    bool isHwPassthrough() const;
    bool hwPassthroughIsSet() const;
    void unsethwPassthrough();
    void setHwPassthrough(bool value);

    /// <summary>
    /// 
    /// </summary>

    VolumeMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const VolumeMetadata& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string volumetype_;
    bool volumetypeIsSet_;
    int32_t iops_;
    bool iopsIsSet_;
    int32_t throughput_;
    bool throughputIsSet_;
    std::map<std::string, Object> extendParam_;
    bool extendParamIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterType_;
    bool clusterTypeIsSet_;
    bool hwPassthrough_;
    bool hwPassthroughIsSet_;
    VolumeMetadata metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Volume_H_
