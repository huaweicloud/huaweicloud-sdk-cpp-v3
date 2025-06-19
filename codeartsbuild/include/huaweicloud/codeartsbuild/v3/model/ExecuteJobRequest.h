
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ExecuteJobRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ExecuteJobRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/RunJobRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ExecuteJobRequest
    : public ModelBase
{
public:
    ExecuteJobRequest();
    virtual ~ExecuteJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteJobRequest members

    /// <summary>
    /// 
    /// </summary>

    RunJobRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RunJobRequestBody& value);


protected:
    RunJobRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExecuteJobRequest& dereference_from_shared_ptr(std::shared_ptr<ExecuteJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ExecuteJobRequest_H_
