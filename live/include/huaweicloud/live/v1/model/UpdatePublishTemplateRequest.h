
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdatePublishTemplateRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdatePublishTemplateRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/CallbackUrl.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  UpdatePublishTemplateRequest
    : public ModelBase
{
public:
    UpdatePublishTemplateRequest();
    virtual ~UpdatePublishTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePublishTemplateRequest members

    /// <summary>
    /// 推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CallbackUrl getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CallbackUrl& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    CallbackUrl body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePublishTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePublishTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_UpdatePublishTemplateRequest_H_
