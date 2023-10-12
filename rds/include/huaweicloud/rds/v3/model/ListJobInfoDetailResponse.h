
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobInfoDetailResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobInfoDetailResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/GetTaskDetailListRsp_jobs.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListJobInfoDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListJobInfoDetailResponse();
    virtual ~ListJobInfoDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobInfoDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    GetTaskDetailListRsp_jobs getJobs() const;
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const GetTaskDetailListRsp_jobs& value);

    /// <summary>
    /// 任务数量。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    GetTaskDetailListRsp_jobs jobs_;
    bool jobsIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListJobInfoDetailResponse_H_
