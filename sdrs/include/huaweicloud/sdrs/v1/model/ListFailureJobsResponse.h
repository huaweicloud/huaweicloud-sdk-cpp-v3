
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListFailureJobsResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListFailureJobsResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/FailureJobParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListFailureJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFailureJobsResponse();
    virtual ~ListFailureJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListFailureJobsResponse members

    /// <summary>
    /// 失败任务信息列表。
    /// </summary>

    std::vector<FailureJobParams>& getFailureJobs();
    bool failureJobsIsSet() const;
    void unsetfailureJobs();
    void setFailureJobs(const std::vector<FailureJobParams>& value);

    /// <summary>
    /// 列表中失败任务个数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<FailureJobParams> failureJobs_;
    bool failureJobsIsSet_;
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

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListFailureJobsResponse_H_
