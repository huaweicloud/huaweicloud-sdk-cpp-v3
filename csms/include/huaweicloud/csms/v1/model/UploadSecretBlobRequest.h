
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UploadSecretBlobRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UploadSecretBlobRequest_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/UploadSecretBlobRequestBody.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  UploadSecretBlobRequest
    : public ModelBase
{
public:
    UploadSecretBlobRequest();
    virtual ~UploadSecretBlobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadSecretBlobRequest members

    /// <summary>
    /// 
    /// </summary>

    UploadSecretBlobRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UploadSecretBlobRequestBody& value);


protected:
    UploadSecretBlobRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UploadSecretBlobRequest& dereference_from_shared_ptr(std::shared_ptr<UploadSecretBlobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UploadSecretBlobRequest_H_
