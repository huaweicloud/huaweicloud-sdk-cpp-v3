
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// master的配置，支持指定可用区、规格和故障域。若指定故障域，则必须所有master节点都需要指定故障字段。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  MasterSpec
    : public ModelBase
{
public:
    MasterSpec();
    virtual ~MasterSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MasterSpec members

    /// <summary>
    /// **参数解释：** 控制节点所在的可用区，需要指定可用区（AZ）的名称。 [CCE支持的可用区请参考[地区和终端节点](https://console.huaweicloud.com/apiexplorer/#/endpoint/CCE)](tag:hws) [CCE支持的可用区请参考[地区和终端节点](https://console-intl.huaweicloud.com/apiexplorer/#/endpoint/CCE)](tag:hws_hk) **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及 
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 规格
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 故障域。 1. 指定该字段需要当前系统已开启故障域特性，否则校验失败。 2. 仅单az场景支持且必须显式指定az。
    /// </summary>

    std::string getFaultDomain() const;
    bool faultDomainIsSet() const;
    void unsetfaultDomain();
    void setFaultDomain(const std::string& value);


protected:
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string faultDomain_;
    bool faultDomainIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_MasterSpec_H_
