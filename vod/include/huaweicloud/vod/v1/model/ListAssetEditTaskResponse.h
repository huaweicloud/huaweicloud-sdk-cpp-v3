
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetEditTaskResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetEditTaskResponse_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/EditingTaskInfo.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ListAssetEditTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAssetEditTaskResponse();
    virtual ~ListAssetEditTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetEditTaskResponse members

    /// <summary>
    /// 任务总数 
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 任务列表 
    /// </summary>

    std::vector<EditingTaskInfo>& getTasks();
    bool tasksIsSet() const;
    void unsettasks();
    void setTasks(const std::vector<EditingTaskInfo>& value);


protected:
    int64_t total_;
    bool totalIsSet_;
    std::vector<EditingTaskInfo> tasks_;
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

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ListAssetEditTaskResponse_H_
