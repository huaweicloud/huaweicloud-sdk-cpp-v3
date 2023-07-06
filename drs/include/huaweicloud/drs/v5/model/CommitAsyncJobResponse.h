
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CommitAsyncJobResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CommitAsyncJobResponse_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/AsyncCommitJobResp.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  CommitAsyncJobResponse
    : public ModelBase, public HttpResponse
{
public:
    CommitAsyncJobResponse();
    virtual ~CommitAsyncJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CommitAsyncJobResponse members

    /// <summary>
    /// 
    /// </summary>

    AsyncCommitJobResp getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const AsyncCommitJobResp& value);


protected:
    AsyncCommitJobResp job_;
    bool jobIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CommitAsyncJobResponse_H_
