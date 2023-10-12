
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchExecuteJobActionsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchExecuteJobActionsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/drs/v5/model/AsyncActionResp.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  BatchExecuteJobActionsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchExecuteJobActionsResponse();
    virtual ~BatchExecuteJobActionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchExecuteJobActionsResponse members

    /// <summary>
    /// 批量异步操作任务响应体。
    /// </summary>

    std::vector<AsyncActionResp>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<AsyncActionResp>& value);


protected:
    std::vector<AsyncActionResp> jobs_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchExecuteJobActionsResponse_H_
