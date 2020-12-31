
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/CreatePrePaidPublicipRequestBody.h"

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
class HUAWEICLOUD_EIP_EXPORT  CreatePrePaidPublicipRequest
    : public ModelBase
{
public:
    CreatePrePaidPublicipRequest();
    virtual ~CreatePrePaidPublicipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePrePaidPublicipRequest members

    /// <summary>
    /// 
    /// </summary>

    CreatePrePaidPublicipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreatePrePaidPublicipRequestBody& value);


protected:
    CreatePrePaidPublicipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatePrePaidPublicipRequest& dereference_from_shared_ptr(std::shared_ptr<CreatePrePaidPublicipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePrePaidPublicipRequest_H_
