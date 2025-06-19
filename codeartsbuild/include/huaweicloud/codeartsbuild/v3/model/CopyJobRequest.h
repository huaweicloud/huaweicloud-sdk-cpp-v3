
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CopyJobRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CopyJobRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/CopyBuildJobRequestBody.h>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CopyJobRequest
    : public ModelBase
{
public:
    CopyJobRequest();
    virtual ~CopyJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CopyJobRequest members

    /// <summary>
    /// 
    /// </summary>

    CopyBuildJobRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CopyBuildJobRequestBody& value);


protected:
    CopyBuildJobRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CopyJobRequest& dereference_from_shared_ptr(std::shared_ptr<CopyJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CopyJobRequest_H_
