
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchPauseJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchPauseJobReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/PauseInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量暂停任务请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchPauseJobReq
    : public ModelBase
{
public:
    BatchPauseJobReq();
    virtual ~BatchPauseJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchPauseJobReq members

    /// <summary>
    /// 不能包含空对象。 集合中的job_id取值严格匹配UUID规则。
    /// </summary>

    std::vector<PauseInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<PauseInfo>& value);


protected:
    std::vector<PauseInfo> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchPauseJobReq_H_
