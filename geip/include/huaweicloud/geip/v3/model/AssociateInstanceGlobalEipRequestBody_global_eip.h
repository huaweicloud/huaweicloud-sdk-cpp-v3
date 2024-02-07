
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipRequestBody_global_eip_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipRequestBody_global_eip_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info.h>
#include <huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 绑定后端实例请求体对象
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  AssociateInstanceGlobalEipRequestBody_global_eip
    : public ModelBase
{
public:
    AssociateInstanceGlobalEipRequestBody_global_eip();
    virtual ~AssociateInstanceGlobalEipRequestBody_global_eip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateInstanceGlobalEipRequestBody_global_eip members

    /// <summary>
    /// 
    /// </summary>

    AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info getAssociateInstanceInfo() const;
    bool associateInstanceInfoIsSet() const;
    void unsetassociateInstanceInfo();
    void setAssociateInstanceInfo(const AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info& value);

    /// <summary>
    /// 
    /// </summary>

    AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info getGcBandwidthInfo() const;
    bool gcBandwidthInfoIsSet() const;
    void unsetgcBandwidthInfo();
    void setGcBandwidthInfo(const AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info& value);


protected:
    AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info associateInstanceInfo_;
    bool associateInstanceInfoIsSet_;
    AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info gcBandwidthInfo_;
    bool gcBandwidthInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AssociateInstanceGlobalEipRequestBody_global_eip_H_
