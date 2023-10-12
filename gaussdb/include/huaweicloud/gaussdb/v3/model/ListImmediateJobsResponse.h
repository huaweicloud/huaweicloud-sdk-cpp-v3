
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListImmediateJobsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListImmediateJobsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TaskDetailInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListImmediateJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListImmediateJobsResponse();
    virtual ~ListImmediateJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListImmediateJobsResponse members

    /// <summary>
    /// 任务详情。
    /// </summary>

    std::vector<TaskDetailInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<TaskDetailInfo>& value);

    /// <summary>
    /// 任务总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<TaskDetailInfo> jobs_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListImmediateJobsResponse_H_
