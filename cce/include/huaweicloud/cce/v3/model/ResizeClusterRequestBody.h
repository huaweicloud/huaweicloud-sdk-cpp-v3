
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ResizeClusterRequestBody_extendParam.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 变更集群规格的请求体
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ResizeClusterRequestBody
    : public ModelBase
{
public:
    ResizeClusterRequestBody();
    virtual ~ResizeClusterRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizeClusterRequestBody members

    /// <summary>
    /// 要变更的目标规格。仅支持变更集群最大节点规模，不支持变更控制节点数，且不支持降低集群规格。例如原集群规格为cce.s2.medium，仅支持变更至cce.s2.large及以上规格，不支持变更至cce.s2.small或cce.s1.medium。  - cce.s1.small: 小规模单控制节点CCE集群（最大50节点） - cce.s1.medium: 中等规模单控制节点CCE集群（最大200节点） - cce.s2.small: 小规模多控制节点CCE集群（最大50节点） - cce.s2.medium: 中等规模多控制节点CCE集群（最大200节点） - cce.s2.large: 大规模多控制节点CCE集群（最大1000节点） - cce.s2.xlarge: 超大规模多控制节点CCE集群（最大2000节点）  &gt;    关于规格参数中的字段说明如下： &gt;    - s1：单控制节点的集群，控制节点数为1。单控制节点故障后，集群将不可用，但已运行工作负载不受影响。 &gt;    - s2：多控制节点的集群，即高可用集群，控制节点数为3。当某个控制节点故障时，集群仍然可用。 &gt;    [- dec：表示专属云的CCE集群规格。例如cce.dec.s1.small表示小规模单控制节点的专属云CCE集群（最大50节点）。](tag:hws,hws_hk) &gt;    - small：表示集群支持管理的最大节点规模为50节点。 &gt;    - medium：表示集群支持管理的最大节点规模为200节点。 &gt;    - large：表示集群支持管理的最大节点规模为1000节点。 &gt;    - xlarge：表示集群支持管理的最大节点规模为2000节点。。 
    /// </summary>

    std::string getFlavorResize() const;
    bool flavorResizeIsSet() const;
    void unsetflavorResize();
    void setFlavorResize(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResizeClusterRequestBody_extendParam getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const ResizeClusterRequestBody_extendParam& value);


protected:
    std::string flavorResize_;
    bool flavorResizeIsSet_;
    ResizeClusterRequestBody_extendParam extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ResizeClusterRequestBody_H_
