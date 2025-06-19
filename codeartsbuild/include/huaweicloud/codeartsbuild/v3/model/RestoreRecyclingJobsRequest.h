
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RestoreRecyclingJobsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RestoreRecyclingJobsRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/JobsRequestBody.h>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  RestoreRecyclingJobsRequest
    : public ModelBase
{
public:
    RestoreRecyclingJobsRequest();
    virtual ~RestoreRecyclingJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreRecyclingJobsRequest members

    /// <summary>
    /// 
    /// </summary>

    JobsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const JobsRequestBody& value);


protected:
    JobsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RestoreRecyclingJobsRequest& dereference_from_shared_ptr(std::shared_ptr<RestoreRecyclingJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RestoreRecyclingJobsRequest_H_
