
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteJobsByIdResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteJobsByIdResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DeleteJobResp.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  BatchDeleteJobsByIdResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteJobsByIdResponse();
    virtual ~BatchDeleteJobsByIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteJobsByIdResponse members

    /// <summary>
    /// 批量删除任务响应体。
    /// </summary>

    std::vector<DeleteJobResp>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<DeleteJobResp>& value);


protected:
    std::vector<DeleteJobResp> jobs_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_BatchDeleteJobsByIdResponse_H_
