
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterFlavorSpecification_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterFlavorSpecification_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/MasterFlavorSpec.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 集群可售卖规格详情
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterFlavorSpecification
    : public ModelBase
{
public:
    ClusterFlavorSpecification();
    virtual ~ClusterFlavorSpecification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterFlavorSpecification members

    /// <summary>
    /// **参数解释**： 规格名称 **取值范围**： - cce.s1.small: 小规模单控制节点CCE集群（最大50节点） - cce.s1.medium: 中等规模单控制节点CCE集群（最大200节点） - cce.s2.small: 小规模三控制节点CCE集群（最大50节点） - cce.s2.medium: 中等规模三控制节点CCE集群（最大200节点） - cce.s2.large: 大规模三控制节点CCE集群（最大1000节点） - cce.s2.xlarge: 超大规模三控制节点CCE集群（最大2000节点） [- cce.s3.small: 小规模五控制节点CCE集群（最大50节点）](tag:hcs,hcs_sm) [- cce.s3.medium: 中等规模五控制节点CCE集群（最大200节点）](tag:hcs,hcs_sm) [- cce.s3.large: 大规模五控制节点CCE集群（最大1000节点）](tag:hcs,hcs_sm) [- cce.s3.xlarge: 超大规模五控制节点CCE集群（最大2000节点）](tag:hcs,hcs_sm)  [专属云特殊规格如下：](tag:hws,hws_hk,hcs,hcs_sm) [- cce.dec.s1.small: 小规模单控制节点的专属云CCE集群（最大50节点）](tag:hws,hws_hk) [- cce.dec.s1.medium: 中等规模单控制节点的专属云CCE集群（最大200节点）](tag:hws,hws_hk) [- cce.dec.s1.large: 大规模单控制节点的专属云CCE集群（最大1000节点）](tag:hws,hws_hk) [- cce.dec.s1.xlarge: 超大规模单控制节点的专属云CCE集群（最大2000节点）](tag:hws,hws_hk) [- cce.dec.s2.small: 小规模三控制节点的专属云CCE集群（最大50节点）](tag:hws,hws_hk) [- cce.dec.s2.medium: 中等规模三控制节点的专属云CCE集群（最大200节点）](tag:hws,hws_hk) [- cce.dec.s2.large: 大规模三控制节点的专属云CCE集群（最大1000节点）](tag:hws,hws_hk) [- cce.dec.s2.xlarge: 超大规模三控制节点的专属云CCE集群（最大2000节点）](tag:hws,hws_hk) [- cce.dec.s3.small: 小规模五控制节点的专属云CCE集群（最大50节点）](tag:hcs,hcs_sm) [- cce.dec.s3.medium: 中等规模五控制节点的专属云CCE集群（最大200节点）](tag:hcs,hcs_sm) [- cce.dec.s3.large: 大规模五控制节点的专属云CCE集群（最大1000节点）](tag:hcs,hcs_sm) [- cce.dec.s3.xlarge: 超大规模五控制节点的专属云CCE集群（最大2000节点）](tag:hcs,hcs_sm)
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 集群节点规模 **取值范围**： - 50: 最大支持50节点 - 200: 最大支持200节点 - 100: 最大支持1000节点 - 2000: 最大支持2000节点
    /// </summary>

    int32_t getNodeCapacity() const;
    bool nodeCapacityIsSet() const;
    void unsetnodeCapacity();
    void setNodeCapacity(int32_t value);

    /// <summary>
    /// **参数解释**： 控制节点详情
    /// </summary>

    std::vector<MasterFlavorSpec>& getAvailableMasterFlavors();
    bool availableMasterFlavorsIsSet() const;
    void unsetavailableMasterFlavors();
    void setAvailableMasterFlavors(const std::vector<MasterFlavorSpec>& value);

    /// <summary>
    /// **参数解释**： 集群规格是否售罄 **取值范围**： 不涉及
    /// </summary>

    bool isIsSoldOut() const;
    bool isSoldOutIsSet() const;
    void unsetisSoldOut();
    void setIsSoldOut(bool value);

    /// <summary>
    /// **参数解释**： 是否支持控制节点多可用区分布 **取值范围**： 不涉及
    /// </summary>

    bool isIsSupportMultiAZ() const;
    bool isSupportMultiAZIsSet() const;
    void unsetisSupportMultiAZ();
    void setIsSupportMultiAZ(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t nodeCapacity_;
    bool nodeCapacityIsSet_;
    std::vector<MasterFlavorSpec> availableMasterFlavors_;
    bool availableMasterFlavorsIsSet_;
    bool isSoldOut_;
    bool isSoldOutIsSet_;
    bool isSupportMultiAZ_;
    bool isSupportMultiAZIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterFlavorSpecification_H_
