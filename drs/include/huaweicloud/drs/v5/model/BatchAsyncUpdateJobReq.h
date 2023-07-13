
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchAsyncUpdateJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchAsyncUpdateJobReq_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/UpdateJobReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量更新指定ID异步任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BatchAsyncUpdateJobReq
    : public ModelBase
{
public:
    BatchAsyncUpdateJobReq();
    virtual ~BatchAsyncUpdateJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchAsyncUpdateJobReq members

    /// <summary>
    /// 批量更新指定ID异步任务请求体。
    /// </summary>

    std::vector<UpdateJobReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<UpdateJobReq>& value);


protected:
    std::vector<UpdateJobReq> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchAsyncUpdateJobReq_H_
