
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchStopJobsActionResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchStopJobsActionResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ActionBaseResp.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  BatchStopJobsActionResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchStopJobsActionResponse();
    virtual ~BatchStopJobsActionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchStopJobsActionResponse members

    /// <summary>
    /// 批量操作任务响应体。
    /// </summary>

    std::vector<ActionBaseResp>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<ActionBaseResp>& value);


protected:
    std::vector<ActionBaseResp> jobs_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchStopJobsActionResponse_H_
