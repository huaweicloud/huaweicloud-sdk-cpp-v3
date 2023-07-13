
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  AttachServerVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    AttachServerVolumeResponse();
    virtual ~AttachServerVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachServerVolumeResponse members

    /// <summary>
    /// 提交任务成功后返回的任务ID，用户可以使用该ID对任务执行情况进行查询。
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
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachServerVolumeResponse_H_
