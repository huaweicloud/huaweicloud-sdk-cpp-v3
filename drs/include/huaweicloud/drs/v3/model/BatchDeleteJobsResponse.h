
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDeleteJobsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDeleteJobsResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/DeleteJobResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchDeleteJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteJobsResponse();
    virtual ~BatchDeleteJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteJobsResponse members

    /// <summary>
    /// 批量结束任务或删除任务的响应体集合。
    /// </summary>

    std::vector<DeleteJobResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<DeleteJobResp>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<DeleteJobResp> results_;
    bool resultsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDeleteJobsResponse_H_
