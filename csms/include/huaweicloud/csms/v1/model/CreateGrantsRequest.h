
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateGrantsRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateGrantsRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/GrantSecretReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateGrantsRequest
    : public ModelBase
{
public:
    CreateGrantsRequest();
    virtual ~CreateGrantsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGrantsRequest members

    /// <summary>
    /// 
    /// </summary>

    GrantSecretReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GrantSecretReqBody& value);


protected:
    GrantSecretReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateGrantsRequest& dereference_from_shared_ptr(std::shared_ptr<CreateGrantsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateGrantsRequest_H_
