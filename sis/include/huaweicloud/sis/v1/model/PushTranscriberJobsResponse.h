
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_PushTranscriberJobsResponse_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_PushTranscriberJobsResponse_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  PushTranscriberJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    PushTranscriberJobsResponse();
    virtual ~PushTranscriberJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PushTranscriberJobsResponse members

    /// <summary>
    /// 创建的任务标识, 如果创建任务成功时必须存在。
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

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_PushTranscriberJobsResponse_H_
