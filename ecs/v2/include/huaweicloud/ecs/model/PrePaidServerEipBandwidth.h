
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerEipBandwidth_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerEipBandwidth_H_

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
/// 
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  PrePaidServerEipBandwidth
    : public ModelBase
{
public:
    PrePaidServerEipBandwidth();
    virtual ~PrePaidServerEipBandwidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServerEipBandwidth members

    /// <summary>
    /// 功能说明：带宽大小  带宽（Mbit/s），取值范围为[1,2000]。  调整带宽时的最小单位会根据带宽范围不同存在差异。  - 小于等于300Mbit/s：默认最小单位为1Mbit/s。 - 300Mbit/s~1000Mbit/s：默认最小单位为50Mbit/s。 - 大于1000Mbit/s：默认最小单位为500Mbit/s。  &gt; 说明： &gt;  &gt; 如果share_type是PER，该参数必选项；如果share_type是WHOLE并且id有值，该参数会忽略。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 带宽的共享类型。  共享类型枚举：PER，表示独享。WHOLE，表示共享。
    /// </summary>

    std::string getSharetype() const;
    bool sharetypeIsSet() const;
    void unsetsharetype();
    void setSharetype(const std::string& value);

    /// <summary>
    /// 带宽的计费类型。  - 未传该字段，表示按带宽计费。 - 字段值为空，表示按带宽计费。 - 字段值为“traffic”，表示按流量计费。 - 字段为其它值，会导致创建云服务器失败。  &gt; 说明： &gt;  &gt; 如果share_type是WHOLE并且id有值，该参数会忽略。
    /// </summary>

    std::string getChargemode() const;
    bool chargemodeIsSet() const;
    void unsetchargemode();
    void setChargemode(const std::string& value);

    /// <summary>
    /// 带宽ID，创建WHOLE类型带宽的弹性IP时可以指定之前的共享带宽创建。  取值范围：WHOLE类型的带宽ID。  &gt; 说明： &gt;  &gt; 当创建WHOLE类型的带宽时，该字段必选。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    int32_t size_;
    bool sizeIsSet_;
    std::string sharetype_;
    bool sharetypeIsSet_;
    std::string chargemode_;
    bool chargemodeIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerEipBandwidth_H_
