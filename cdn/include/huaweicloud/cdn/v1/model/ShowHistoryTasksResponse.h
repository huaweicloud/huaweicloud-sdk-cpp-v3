
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTasksResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTasksResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/TasksObject.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowHistoryTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHistoryTasksResponse();
    virtual ~ShowHistoryTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowHistoryTasksResponse members

    /// <summary>
    /// 总共的任务个数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 日志列表数据
    /// </summary>

    std::vector<TasksObject>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<TasksObject>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<TasksObject> tasks_;
    bool tasksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowHistoryTasksResponse_H_
