
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListPullTasksResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListPullTasksResponse_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/LivePullTaskInfo.h>
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
class HUAWEICLOUD_LIVE_V1_EXPORT  ListPullTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPullTasksResponse();
    virtual ~ListPullTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPullTasksResponse members

    /// <summary>
    /// 直播拉流任务列表
    /// </summary>

    std::vector<LivePullTaskInfo>& getTaskInfos();
    bool taskInfosIsSet() const;
    void unsettaskInfos();
    void setTaskInfos(const std::vector<LivePullTaskInfo>& value);

    /// <summary>
    /// 请求id
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 任务条目数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<LivePullTaskInfo> taskInfos_;
    bool taskInfosIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListPullTasksResponse_H_
