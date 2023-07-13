
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobDetailResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobDetailResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/BaseResp.h>
#include <vector>
#include <huaweicloud/drs/v5/model/JobDetailResp.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ListAsyncJobDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAsyncJobDetailResponse();
    virtual ~ListAsyncJobDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAsyncJobDetailResponse members

    /// <summary>
    /// 列表中的项目总数，与分页无关。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 查询租户指定ID批量异步任务详情响应体。
    /// </summary>

    std::vector<JobDetailResp>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<JobDetailResp>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<JobDetailResp> jobs_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListAsyncJobDetailResponse_H_
