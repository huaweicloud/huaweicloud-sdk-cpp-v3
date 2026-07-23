
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobSchedulesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobSchedulesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/JobScheduleInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListJobSchedulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListJobSchedulesResponse();
    virtual ~ListJobSchedulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobSchedulesResponse members

    /// <summary>
    /// 策略列表。
    /// </summary>

    std::vector<JobScheduleInfo>& getSchedules();
    bool schedulesIsSet() const;
    void unsetschedules();
    void setSchedules(const std::vector<JobScheduleInfo>& value);

    /// <summary>
    /// 策略总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<JobScheduleInfo> schedules_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobSchedulesResponse_H_
