
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTopicReportSchedulerConfigResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTopicReportSchedulerConfigResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/SchedulerConfigBase.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowAuditTopicReportSchedulerConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuditTopicReportSchedulerConfigResponse();
    virtual ~ShowAuditTopicReportSchedulerConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuditTopicReportSchedulerConfigResponse members

    /// <summary>
    /// 
    /// </summary>

    SchedulerConfigBase getScheduler() const;
    bool schedulerIsSet() const;
    void unsetscheduler();
    void setScheduler(const SchedulerConfigBase& value);

    /// <summary>
    /// 是否支持订阅  - true: 支持  - false: 不支持\&quot;
    /// </summary>

    bool isSmnEffective() const;
    bool smnEffectiveIsSet() const;
    void unsetsmnEffective();
    void setSmnEffective(bool value);


protected:
    SchedulerConfigBase scheduler_;
    bool schedulerIsSet_;
    bool smnEffective_;
    bool smnEffectiveIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowAuditTopicReportSchedulerConfigResponse_H_
