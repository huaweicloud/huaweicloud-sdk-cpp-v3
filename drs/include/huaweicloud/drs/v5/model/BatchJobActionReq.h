
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchJobActionReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchJobActionReq_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/ActionReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量操作任务请求体，支持测试连接、预检查、启动、暂停、续传、重置、对比、结束等操作。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BatchJobActionReq
    : public ModelBase
{
public:
    BatchJobActionReq();
    virtual ~BatchJobActionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchJobActionReq members

    /// <summary>
    /// 批量操作任务请求体。
    /// </summary>

    std::vector<ActionReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<ActionReq>& value);


protected:
    std::vector<ActionReq> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchJobActionReq_H_
