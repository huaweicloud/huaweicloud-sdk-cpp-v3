
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SecretVolumeResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SecretVolumeResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 密钥挂载。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SecretVolumeResponse
    : public ModelBase
{
public:
    SecretVolumeResponse();
    virtual ~SecretVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecretVolumeResponse members

    /// <summary>
    /// **参数解释：** 密钥名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥key。 **取值范围：** 长度不大于63。
    /// </summary>

    std::string getSecretKey() const;
    bool secretKeyIsSet() const;
    void unsetsecretKey();
    void setSecretKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥值。 **取值范围：** 长度不大于32768。
    /// </summary>

    std::string getSecretValue() const;
    bool secretValueIsSet() const;
    void unsetsecretValue();
    void setSecretValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 挂载路径。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);


protected:
    std::string secretName_;
    bool secretNameIsSet_;
    std::string secretKey_;
    bool secretKeyIsSet_;
    std::string secretValue_;
    bool secretValueIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SecretVolumeResponse_H_
