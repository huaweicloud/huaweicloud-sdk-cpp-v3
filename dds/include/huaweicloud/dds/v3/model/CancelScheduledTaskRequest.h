
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CancelScheduledTaskRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CancelScheduledTaskRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CancelScheduledTaskRequest
    : public ModelBase
{
public:
    CancelScheduledTaskRequest();
    virtual ~CancelScheduledTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelScheduledTaskRequest members

    /// <summary>
    /// 任务ID，取值为定时任务列表。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CancelScheduledTaskRequest& dereference_from_shared_ptr(std::shared_ptr<CancelScheduledTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CancelScheduledTaskRequest_H_
