
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSOption_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ModifyVolumeQoSOption
    : public ModelBase
{
public:
    ModifyVolumeQoSOption();
    virtual ~ModifyVolumeQoSOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyVolumeQoSOption members

    /// <summary>
    /// 修改后的云硬盘iops，只支持GPSSD2、ESSD2类型的云硬盘。  说明： 了解GPSSD2、ESSD2类型的iops大小范围，请参见 [云硬盘类型及性能介绍里面的云硬盘性能数据表](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。
    /// </summary>

    int32_t getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(int32_t value);

    /// <summary>
    /// 修改后的云硬盘吞吐量，单位是MiB/s，GPSSD2类型云盘必须填写，其他类型不能填写。  说明： 了解GPSSD2类型的吞吐量大小范围，请参见 [云硬盘类型及性能介绍里面的云硬盘性能数据表](https://support.huaweicloud.com/productdesc-evs/zh-cn_topic_0044524691.html)。
    /// </summary>

    int32_t getThroughput() const;
    bool throughputIsSet() const;
    void unsetthroughput();
    void setThroughput(int32_t value);


protected:
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

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ModifyVolumeQoSOption_H_
