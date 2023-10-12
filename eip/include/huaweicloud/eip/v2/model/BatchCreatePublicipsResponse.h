
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsResponse_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchCreatePublicipsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchCreatePublicipsResponse();
    virtual ~BatchCreatePublicipsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreatePublicipsResponse members

    /// <summary>
    /// job_id，需要访问调用netAPI组件访问job执行情况。netAPI：/v1/{tenant_id}/jobs/{job_id}
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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsResponse_H_
