
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListScheduleJobsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListScheduleJobsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ScheduleTask.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListScheduleJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListScheduleJobsResponse();
    virtual ~ListScheduleJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduleJobsResponse members

    /// <summary>
    /// 任务详情
    /// </summary>

    std::vector<ScheduleTask>& getSchedules();
    bool schedulesIsSet() const;
    void unsetschedules();
    void setSchedules(const std::vector<ScheduleTask>& value);

    /// <summary>
    /// 记录总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ScheduleTask> schedules_;
    bool schedulesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListScheduleJobsResponse_H_
