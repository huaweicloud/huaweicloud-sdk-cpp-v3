
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/CreatePublicipRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  CreatePublicipRequest
    : public ModelBase
{
public:
    CreatePublicipRequest();
    virtual ~CreatePublicipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePublicipRequest members

    /// <summary>
    /// 
    /// </summary>

    CreatePublicipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreatePublicipRequestBody& value);


protected:
    CreatePublicipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatePublicipRequest& dereference_from_shared_ptr(std::shared_ptr<CreatePublicipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipRequest_H_
