
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListScheduleRecordTasksResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListScheduleRecordTasksResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/ScheduleRecordTasks.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListScheduleRecordTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListScheduleRecordTasksResponse();
    virtual ~ListScheduleRecordTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScheduleRecordTasksResponse members

    /// <summary>
    /// 查询结果的总元素数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 记录偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 当前页条目数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 录制模板数组
    /// </summary>

    std::vector<ScheduleRecordTasks>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<ScheduleRecordTasks>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::vector<ScheduleRecordTasks> tasks_;
    bool tasksIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListScheduleRecordTasksResponse_H_
