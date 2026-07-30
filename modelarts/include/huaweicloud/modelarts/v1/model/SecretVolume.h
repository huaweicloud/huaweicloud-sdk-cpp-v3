
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SecretVolume_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SecretVolume_H_


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
/// **参数解释：** 密钥挂载。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  SecretVolume
    : public ModelBase
{
public:
    SecretVolume();
    virtual ~SecretVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecretVolume members

    /// <summary>
    /// **参数解释：** 密钥名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretName() const;
    bool secretNameIsSet() const;
    void unsetsecretName();
    void setSecretName(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥key。 **约束限制：** 匹配一个长度在1到63之间的字符串，只能包含字母、数字、点、下划线和连字符，并且不能以两个连续的点（..）开头。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretKey() const;
    bool secretKeyIsSet() const;
    void unsetsecretKey();
    void setSecretKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥值。 **约束限制：** 长度在1~32768，Base64编码后的密钥值。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSecretValue() const;
    bool secretValueIsSet() const;
    void unsetsecretValue();
    void setSecretValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 挂载路径。 **约束限制：** 不涉及。 **取值范围：** 以(/)开头和结尾，可包含字母、数字、中划线、下划线，整个挂载路径长度不能超过255位。 **默认取值：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_SecretVolume_H_
