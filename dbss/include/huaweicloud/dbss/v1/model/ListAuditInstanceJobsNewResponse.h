
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditInstanceJobsNewResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditInstanceJobsNewResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/JobBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditInstanceJobsNewResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditInstanceJobsNewResponse();
    virtual ~ListAuditInstanceJobsNewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditInstanceJobsNewResponse members

    /// <summary>
    /// 实例创建任务列表
    /// </summary>

    std::vector<JobBean>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<JobBean>& value);


protected:
    std::vector<JobBean> jobs_;
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

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditInstanceJobsNewResponse_H_
