
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplicationJobsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplicationJobsResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/OfflineTaskInfo.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  ListReplicationJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReplicationJobsResponse();
    virtual ~ListReplicationJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReplicationJobsResponse members

    /// <summary>
    /// 备份迁移任务总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 备份迁移任务列表。
    /// </summary>

    std::vector<OfflineTaskInfo>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<OfflineTaskInfo>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<OfflineTaskInfo> jobs_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListReplicationJobsResponse_H_
