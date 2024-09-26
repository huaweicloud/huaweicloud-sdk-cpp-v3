
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHarvestJobStatusRequestBody_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHarvestJobStatusRequestBody_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改状态请求体
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdateHarvestJobStatusRequestBody
    : public ModelBase
{
public:
    UpdateHarvestJobStatusRequestBody();
    virtual ~UpdateHarvestJobStatusRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHarvestJobStatusRequestBody members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdateHarvestJobStatusRequestBody_H_
