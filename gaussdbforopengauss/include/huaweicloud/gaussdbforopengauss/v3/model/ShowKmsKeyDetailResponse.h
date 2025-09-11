
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowKmsKeyDetailResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowKmsKeyDetailResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowKmsKeyDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowKmsKeyDetailResponse();
    virtual ~ShowKmsKeyDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKmsKeyDetailResponse members

    /// <summary>
    /// **参数解释**: 秘钥ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// **参数解释**: 密钥别名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getKeyAlias() const;
    bool keyAliasIsSet() const;
    void unsetkeyAlias();
    void setKeyAlias(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户域ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**: 秘钥状态。 **取值范围**: - “1”表示待激活状态。 - “2”表示启用状态。 - “3”表示禁用状态。 - “4”表示计划删除状态。 - “5”表示等待导入状态。
    /// </summary>

    std::string getKeyState() const;
    bool keyStateIsSet() const;
    void unsetkeyState();
    void setKeyState(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string keyAlias_;
    bool keyAliasIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string keyState_;
    bool keyStateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowKmsKeyDetailResponse_H_
