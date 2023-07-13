
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchStopJobsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchStopJobsResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/drs/v3/model/PauseJobResp.h>

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
class HUAWEICLOUD_DRS_V3_EXPORT  BatchStopJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchStopJobsResponse();
    virtual ~BatchStopJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchStopJobsResponse members

    /// <summary>
    /// 批量暂停返回列表
    /// </summary>

    std::vector<PauseJobResp>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<PauseJobResp>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<PauseJobResp> results_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchStopJobsResponse_H_
