
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_InvokeEndpointProxyRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_InvokeEndpointProxyRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/EndpointProxyParam.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  InvokeEndpointProxyRequest
    : public ModelBase
{
public:
    InvokeEndpointProxyRequest();
    virtual ~InvokeEndpointProxyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InvokeEndpointProxyRequest members

    /// <summary>
    /// 
    /// </summary>

    EndpointProxyParam getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const EndpointProxyParam& value);


protected:
    EndpointProxyParam body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    InvokeEndpointProxyRequest& dereference_from_shared_ptr(std::shared_ptr<InvokeEndpointProxyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_InvokeEndpointProxyRequest_H_
