
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteJobReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  BatchDeleteJobReq
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
    /// 批量删除任务请求体。
    /// </summary>

    std::vector<std::string>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteJobReq_H_
