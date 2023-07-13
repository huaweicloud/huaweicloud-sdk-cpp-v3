
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchRetryReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchRetryReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/RetryInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量续传任务请求列表
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchRetryReq
    : public ModelBase
{
public:
    BatchRetryReq();
    virtual ~BatchRetryReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchRetryReq members

    /// <summary>
    /// 批量续传任务请求列表
    /// </summary>

    std::vector<RetryInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<RetryInfo>& value);


protected:
    std::vector<RetryInfo> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchRetryReq_H_
