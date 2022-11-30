
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretStageRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretStageRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CSMS_V1_EXPORT  DeleteSecretStageRequest
    : public ModelBase
{
public:
    DeleteSecretStageRequest();
    virtual ~DeleteSecretStageRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteSecretStageRequest members

    /// <summary>
    /// 凭据的资源标识符。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 凭据版本状态的名称。
    /// </summary>

    std::string getStageName() const;
    bool stageNameIsSet() const;
    void unsetstageName();
    void setStageName(const std::string& value);


protected:
    std::string secretName_;
    bool secretNameIsSet_;
    std::string stageName_;
    bool stageNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteSecretStageRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteSecretStageRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_DeleteSecretStageRequest_H_
