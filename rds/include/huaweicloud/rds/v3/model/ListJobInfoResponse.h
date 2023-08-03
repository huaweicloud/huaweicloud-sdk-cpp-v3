
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobInfoResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobInfoResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/GetJobInfoResponseBody_job.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListJobInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ListJobInfoResponse();
    virtual ~ListJobInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListJobInfoResponse members

    /// <summary>
    /// 
    /// </summary>

    GetJobInfoResponseBody_job getJob() const;
    bool jobIsSet() const;
    void unsetjob();
    void setJob(const GetJobInfoResponseBody_job& value);


protected:
    GetJobInfoResponseBody_job job_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobInfoResponse_H_
