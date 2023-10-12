
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchCreateJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchCreateJobReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/CreateJobReq.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量创建实时迁移任务请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchCreateJobReq
    : public ModelBase
{
public:
    BatchCreateJobReq();
    virtual ~BatchCreateJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateJobReq members

    /// <summary>
    /// 创建任务请求体
    /// </summary>

    std::vector<CreateJobReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<CreateJobReq>& value);


protected:
    std::vector<CreateJobReq> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchCreateJobReq_H_
