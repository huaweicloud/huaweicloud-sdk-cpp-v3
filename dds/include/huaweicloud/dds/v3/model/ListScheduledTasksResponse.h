
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListScheduledTasksResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListScheduledTasksResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ScheduledTasksRsp_schedules.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListScheduledTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListScheduledTasksResponse();
    virtual ~ListScheduledTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduledTasksResponse members

    /// <summary>
    /// 记录数量
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 任务详情
    /// </summary>

    std::vector<ScheduledTasksRsp_schedules>& getSchedules();
    bool schedulesIsSet() const;
    void unsetschedules();
    void setSchedules(const std::vector<ScheduledTasksRsp_schedules>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ScheduledTasksRsp_schedules> schedules_;
    bool schedulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListScheduledTasksResponse_H_
