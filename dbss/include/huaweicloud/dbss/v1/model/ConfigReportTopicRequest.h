
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ConfigReportTopicRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ConfigReportTopicRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/SchedulerBean.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ConfigReportTopicRequest
    : public ModelBase
{
public:
    ConfigReportTopicRequest();
    virtual ~ConfigReportTopicRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigReportTopicRequest members

    /// <summary>
    /// 
    /// </summary>

    SchedulerBean getScheduler() const;
    bool schedulerIsSet() const;
    void unsetscheduler();
    void setScheduler(const SchedulerBean& value);


protected:
    SchedulerBean scheduler_;
    bool schedulerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ConfigReportTopicRequest_H_
