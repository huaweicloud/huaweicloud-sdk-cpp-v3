
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstanceTasksResponse_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstanceTasksResponse_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/Page.h>
#include <huaweicloud/iotdm/v5/model/InstanceTask.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  ListInstanceTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceTasksResponse();
    virtual ~ListInstanceTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceTasksResponse members

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);

    /// <summary>
    /// 实例任务列表
    /// </summary>

    std::vector<InstanceTask>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<InstanceTask>& value);


protected:
    Page page_;
    bool pageIsSet_;
    std::vector<InstanceTask> tasks_;
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

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstanceTasksResponse_H_
