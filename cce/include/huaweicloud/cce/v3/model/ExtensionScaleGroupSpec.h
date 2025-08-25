
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroupSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroupSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ScaleGroupAutoscaling.h>
#include <string>
#include <huaweicloud/cce/v3/model/CapacityReservationSpecification.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 扩展伸缩组配置，承载区别于默认伸缩组的差异化配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ExtensionScaleGroupSpec
    : public ModelBase
{
public:
    ExtensionScaleGroupSpec();
    virtual ~ExtensionScaleGroupSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionScaleGroupSpec members

    /// <summary>
    /// 节点规格
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 节点可用区，未指定或者为空则以默认伸缩组中配置为准
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CapacityReservationSpecification getCapacityReservationSpecification() const;
    bool capacityReservationSpecificationIsSet() const;
    void unsetcapacityReservationSpecification();
    void setCapacityReservationSpecification(const CapacityReservationSpecification& value);

    /// <summary>
    /// 
    /// </summary>

    ScaleGroupAutoscaling getAutoscaling() const;
    bool autoscalingIsSet() const;
    void unsetautoscaling();
    void setAutoscaling(const ScaleGroupAutoscaling& value);


protected:
    std::string flavor_;
    bool flavorIsSet_;
    std::string az_;
    bool azIsSet_;
    CapacityReservationSpecification capacityReservationSpecification_;
    bool capacityReservationSpecificationIsSet_;
    ScaleGroupAutoscaling autoscaling_;
    bool autoscalingIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ExtensionScaleGroupSpec_H_
