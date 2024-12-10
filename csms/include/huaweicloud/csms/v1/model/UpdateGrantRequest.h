
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateGrantRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateGrantRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/GrantSecretReqBody.h>
#include <string>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateGrantRequest
    : public ModelBase
{
public:
    UpdateGrantRequest();
    virtual ~UpdateGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGrantRequest members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GrantSecretReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GrantSecretReqBody& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    GrantSecretReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateGrantRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateGrantRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateGrantRequest_H_
