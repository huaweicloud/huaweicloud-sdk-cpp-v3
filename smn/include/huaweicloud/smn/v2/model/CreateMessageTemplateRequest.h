
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateMessageTemplateRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateMessageTemplateRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/CreateMessageTemplateRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  CreateMessageTemplateRequest
    : public ModelBase
{
public:
    CreateMessageTemplateRequest();
    virtual ~CreateMessageTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMessageTemplateRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateMessageTemplateRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateMessageTemplateRequestBody& value);


protected:
    CreateMessageTemplateRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateMessageTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<CreateMessageTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_CreateMessageTemplateRequest_H_
