
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowJobRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowJobRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowJobRequest
    : public ModelBase
{
public:
    ShowJobRequest();
    virtual ~ShowJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowJobRequest members

    /// <summary>
    /// 异步请求的任务ID。
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
    ShowJobRequest& dereference_from_shared_ptr(std::shared_ptr<ShowJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowJobRequest_H_
