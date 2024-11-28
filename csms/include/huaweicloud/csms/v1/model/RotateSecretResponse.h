
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_RotateSecretResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_RotateSecretResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  RotateSecretResponse
    : public ModelBase, public HttpResponse
{
public:
    RotateSecretResponse();
    virtual ~RotateSecretResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RotateSecretResponse members

    /// <summary>
    /// 凭据的版本号标识符。
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);

    /// <summary>
    /// 凭据的名称。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// 凭据轮转任务ID。
    /// </summary>

    std::string getRotationTaskId() const;
    bool rotationTaskIdIsSet() const;
    void unsetrotationTaskId();
    void setRotationTaskId(const std::string& value);


protected:
    std::string versionId_;
    bool versionIdIsSet_;
    std::string secretName_;
    bool secretNameIsSet_;
    std::string rotationTaskId_;
    bool rotationTaskIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_RotateSecretResponse_H_
