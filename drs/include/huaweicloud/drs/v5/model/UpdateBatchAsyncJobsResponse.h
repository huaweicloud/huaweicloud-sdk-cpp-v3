
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateBatchAsyncJobsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateBatchAsyncJobsResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/AsyncUpdateJobResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateBatchAsyncJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateBatchAsyncJobsResponse();
    virtual ~UpdateBatchAsyncJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateBatchAsyncJobsResponse members

    /// <summary>
    /// 批量更新指定ID异步任务响应体。
    /// </summary>

    std::vector<AsyncUpdateJobResp>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<AsyncUpdateJobResp>& value);


protected:
    std::vector<AsyncUpdateJobResp> jobs_;
    bool jobsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateBatchAsyncJobsResponse_H_
