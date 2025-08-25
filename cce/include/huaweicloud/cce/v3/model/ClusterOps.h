
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterOps_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterOps_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AlarmInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 集群运维参数配置。 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterOps
    : public ModelBase
{
public:
    ClusterOps();
    virtual ~ClusterOps();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterOps members

    /// <summary>
    /// 
    /// </summary>

    AlarmInfo getAlarm() const;
    bool alarmIsSet() const;
    void unsetalarm();
    void setAlarm(const AlarmInfo& value);


protected:
    AlarmInfo alarm_;
    bool alarmIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterOps_H_
