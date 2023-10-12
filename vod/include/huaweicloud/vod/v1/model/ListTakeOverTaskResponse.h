
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTakeOverTaskResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTakeOverTaskResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/TakeOverTask.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ListTakeOverTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTakeOverTaskResponse();
    virtual ~ListTakeOverTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTakeOverTaskResponse members

    /// <summary>
    /// 托管任务信息。
    /// </summary>

    std::vector<TakeOverTask>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<TakeOverTask>& value);

    /// <summary>
    /// 任务数量。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<TakeOverTask> tasks_;
    bool tasksIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListTakeOverTaskResponse_H_
