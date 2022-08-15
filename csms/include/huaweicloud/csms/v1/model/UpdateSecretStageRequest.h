
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretStageRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretStageRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/csms/v1/model/UpdateSecretStageRequestBody.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  UpdateSecretStageRequest
    : public ModelBase
{
public:
    UpdateSecretStageRequest();
    virtual ~UpdateSecretStageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSecretStageRequest members

    /// <summary>
    /// 凭据名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 凭据版本状态的名称。满足 &#39;^[a-zA-Z0-9._-]{1,64}$&#39;
    /// </summary>

    std::string getStageName() const;
    bool stageNameIsSet() const;
    void unsetstageName();
    void setStageName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateSecretStageRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateSecretStageRequestBody& value);


protected:
    std::string secretName_;
    bool secretNameIsSet_;
    std::string stageName_;
    bool stageNameIsSet_;
    UpdateSecretStageRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateSecretStageRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateSecretStageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_UpdateSecretStageRequest_H_
