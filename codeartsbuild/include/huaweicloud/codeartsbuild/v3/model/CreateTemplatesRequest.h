
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplatesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplatesRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/CreateTemplatesRequestBody.h>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CreateTemplatesRequest
    : public ModelBase
{
public:
    CreateTemplatesRequest();
    virtual ~CreateTemplatesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTemplatesRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateTemplatesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateTemplatesRequestBody& value);


protected:
    CreateTemplatesRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateTemplatesRequest& dereference_from_shared_ptr(std::shared_ptr<CreateTemplatesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateTemplatesRequest_H_
