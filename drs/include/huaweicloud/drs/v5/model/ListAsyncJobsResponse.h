
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobsResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/AsyncJobResp.h>
#include <huaweicloud/drs/v5/model/BaseResp.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  ListAsyncJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAsyncJobsResponse();
    virtual ~ListAsyncJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAsyncJobsResponse members

    /// <summary>
    /// 列表中的项目总数，与分页无关。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 所有批量异步创建任务响应体。
    /// </summary>

    std::vector<AsyncJobResp>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<AsyncJobResp>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<AsyncJobResp> jobs_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobsResponse_H_
