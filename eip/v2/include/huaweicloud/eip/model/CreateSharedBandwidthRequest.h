
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidthRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidthRequest_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/CreateSharedBandwidhRequestBody.h"

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
class HUAWEICLOUD_EIP_EXPORT  CreateSharedBandwidthRequest
    : public ModelBase
{
public:
    CreateSharedBandwidthRequest();
    virtual ~CreateSharedBandwidthRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSharedBandwidthRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateSharedBandwidhRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSharedBandwidhRequestBody& value);


protected:
    CreateSharedBandwidhRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSharedBandwidthRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSharedBandwidthRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreateSharedBandwidthRequest_H_
