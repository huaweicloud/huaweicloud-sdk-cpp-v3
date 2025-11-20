
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ReduceVolumeObject_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ReduceVolumeObject_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例磁盘缩容时必填。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ReduceVolumeObject
    : public ModelBase
{
public:
    ReduceVolumeObject();
    virtual ~ReduceVolumeObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReduceVolumeObject members

    /// <summary>
    /// 缩容后实例磁盘的目标大小。每次缩容至少缩小10GB；目标大小必须为10的整数倍。 为确保实例的正常使用，根据当前磁盘的使用量情况存在磁盘容量下限，当此参数小于磁盘容量下限时，缩容会下发失败，此时请适当调大此参数。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 是否定时变更。 - true，为定时在运维时间窗做变更。 - false，为立即变更，默认该方式。
    /// </summary>

    bool isIsDelay() const;
    bool isDelayIsSet() const;
    void unsetisDelay();
    void setIsDelay(bool value);

    /// <summary>
    /// 该参数只有磁盘类型为Flexible SSD（GPSSD2）和极速型SSDV2（ESSD2）的磁盘必填。 对于Flexible SSD类型的磁盘，IOPS值配置的范围为3000~128000，具体可配置值受磁盘大小限制，需要小于等于500*磁盘容量。 对于极速型SSDV2类型的磁盘，IOPS值配置的范围为100~256000，具体可配置值受磁盘大小限制，需要小于等于1000*磁盘容量。
    /// </summary>

    int32_t getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(int32_t value);

    /// <summary>
    /// 该参数只有磁盘类型为Flexible SSD（GPSSD2）的磁盘必填。 对于Flexible SSD类型的磁盘，throughput值配置的范围为125~1000 MiB/s，具体可配置值受IOPS大小限制，需要小于等于IOPS/4。
    /// </summary>

    int32_t getThroughput() const;
    bool throughputIsSet() const;
    void unsetthroughput();
    void setThroughput(int32_t value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    bool isDelay_;
    bool isDelayIsSet_;
    int32_t iops_;
    bool iopsIsSet_;
    int32_t throughput_;
    bool throughputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ReduceVolumeObject_H_
