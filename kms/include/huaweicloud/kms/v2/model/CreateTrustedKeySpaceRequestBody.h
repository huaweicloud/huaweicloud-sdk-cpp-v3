
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateTrustedKeySpaceRequestBody_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateTrustedKeySpaceRequestBody_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建密钥空间请求体
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateTrustedKeySpaceRequestBody
    : public ModelBase
{
public:
    CreateTrustedKeySpaceRequestBody();
    virtual ~CreateTrustedKeySpaceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTrustedKeySpaceRequestBody members

    /// <summary>
    /// **参数解释：** 密钥空间名称 **约束限制：** 不涉及 **取值范围：** 1-255 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyspaceName() const;
    bool keyspaceNameIsSet() const;
    void unsetkeyspaceName();
    void setKeyspaceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间类型 **约束限制：** 不涉及 **取值范围：** - 1 默认密钥空间 - 2 专属加密集群密钥空间 - 3 外部密钥存储密钥空间 **默认取值：** 1
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间关联的密钥库ID,仅type为2或3时必填，关联的密钥库ID需要和类型匹配 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥空间描述信息 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string keyspaceName_;
    bool keyspaceNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string keystoreId_;
    bool keystoreIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateTrustedKeySpaceRequestBody_H_
