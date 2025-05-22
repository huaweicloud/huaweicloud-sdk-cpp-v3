
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CheckSecretsRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CheckSecretsRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/CheckSecretsRequestBody.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  CheckSecretsRequest
    : public ModelBase
{
public:
    CheckSecretsRequest();
    virtual ~CheckSecretsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckSecretsRequest members

    /// <summary>
    /// 
    /// </summary>

    CheckSecretsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CheckSecretsRequestBody& value);


protected:
    CheckSecretsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckSecretsRequest& dereference_from_shared_ptr(std::shared_ptr<CheckSecretsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CheckSecretsRequest_H_
