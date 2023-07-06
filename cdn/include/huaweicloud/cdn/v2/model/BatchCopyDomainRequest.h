
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDomainRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDomainRequest_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/BatchCopyDRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  BatchCopyDomainRequest
    : public ModelBase
{
public:
    BatchCopyDomainRequest();
    virtual ~BatchCopyDomainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCopyDomainRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchCopyDRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCopyDRequestBody& value);


protected:
    BatchCopyDRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCopyDomainRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCopyDomainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_BatchCopyDomainRequest_H_
