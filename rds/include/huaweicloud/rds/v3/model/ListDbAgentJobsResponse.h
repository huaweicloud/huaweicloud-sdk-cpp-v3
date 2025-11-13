
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ListDbAgentJobsResult.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListDbAgentJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDbAgentJobsResponse();
    virtual ~ListDbAgentJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDbAgentJobsResponse members

    /// <summary>
    /// 作业列表。
    /// </summary>

    std::vector<ListDbAgentJobsResult>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<ListDbAgentJobsResult>& value);

    /// <summary>
    /// 作业总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListDbAgentJobsResult> jobs_;
    bool jobsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListDbAgentJobsResponse_H_
