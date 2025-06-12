
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveJobsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveJobsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/metastudio/v1/model/SmartLiveJob.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListSmartLiveJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSmartLiveJobsResponse();
    virtual ~ListSmartLiveJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSmartLiveJobsResponse members

    /// <summary>
    /// **参数解释**： 数字人直播任务总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 数字人直播任务列表。
    /// </summary>

    std::vector<SmartLiveJob>& getSmartLiveJobs();
    bool smartLiveJobsIsSet() const;
    void unsetsmartLiveJobs();
    void setSmartLiveJobs(const std::vector<SmartLiveJob>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<SmartLiveJob> smartLiveJobs_;
    bool smartLiveJobsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveJobsResponse_H_
