
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/TaskDetailInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  ListTranscodeDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTranscodeDetailResponse();
    virtual ~ListTranscodeDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListTranscodeDetailResponse members

    /// <summary>
    /// 转码详情任务组
    /// </summary>

    std::vector<TaskDetailInfo>& getTaskArray();
    bool taskArrayIsSet() const;
    void unsettaskArray();
    void setTaskArray(const std::vector<TaskDetailInfo>& value);


protected:
    std::vector<TaskDetailInfo> taskArray_;
    bool taskArrayIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ListTranscodeDetailResponse_H_
