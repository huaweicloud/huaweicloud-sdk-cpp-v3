
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowJobListResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowJobListResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/JobInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ShowJobListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowJobListResponse();
    virtual ~ShowJobListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowJobListResponse members

    /// <summary>
    /// 任务总数
    /// </summary>

    int32_t getTotalRecord() const;
    bool totalRecordIsSet() const;
    void unsettotalRecord();
    void setTotalRecord(int32_t value);

    /// <summary>
    /// 任务信息列表
    /// </summary>

    std::vector<JobInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<JobInfo>& value);


protected:
    int32_t totalRecord_;
    bool totalRecordIsSet_;
    std::vector<JobInfo> jobs_;
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

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ShowJobListResponse_H_
