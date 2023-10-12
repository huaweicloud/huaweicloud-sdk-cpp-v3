
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchStopJobActionReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchStopJobActionReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/StopJobActionInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量结束任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BatchStopJobActionReq
    : public ModelBase
{
public:
    BatchStopJobActionReq();
    virtual ~BatchStopJobActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchStopJobActionReq members

    /// <summary>
    /// 批量结束任务请求体。
    /// </summary>

    std::vector<StopJobActionInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<StopJobActionInfo>& value);


protected:
    std::vector<StopJobActionInfo> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchStopJobActionReq_H_
