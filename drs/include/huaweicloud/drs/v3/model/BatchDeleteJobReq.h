
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDeleteJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDeleteJobReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/DeleteJobReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量结束与删除在线迁移任务请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchDeleteJobReq
    : public ModelBase
{
public:
    BatchDeleteJobReq();
    virtual ~BatchDeleteJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteJobReq members

    /// <summary>
    /// 批量结束与删除任务请求列表
    /// </summary>

    std::vector<DeleteJobReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<DeleteJobReq>& value);


protected:
    std::vector<DeleteJobReq> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchDeleteJobReq_H_
