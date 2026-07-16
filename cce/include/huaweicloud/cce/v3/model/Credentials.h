
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Credentials_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Credentials_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 委托凭据信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Credentials
    : public ModelBase
{
public:
    Credentials();
    virtual ~Credentials();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Credentials members

    /// <summary>
    /// **参数解释**： 临时安全凭证的AK **约束限制**： 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getAccessKeyId() const;
    bool accessKeyIdIsSet() const;
    void unsetaccessKeyId();
    void setAccessKeyId(const std::string& value);

    /// <summary>
    /// **参数解释：** 临时安全凭证的SK **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getSecretAccessKey() const;
    bool secretAccessKeyIsSet() const;
    void unsetsecretAccessKey();
    void setSecretAccessKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 临时安全凭证的security_token **约束限制**： 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getSecurityToken() const;
    bool securityTokenIsSet() const;
    void unsetsecurityToken();
    void setSecurityToken(const std::string& value);

    /// <summary>
    /// **参数解释：** 临时安全凭证的失效时间 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getExpiration() const;
    bool expirationIsSet() const;
    void unsetexpiration();
    void setExpiration(const std::string& value);


protected:
    std::string accessKeyId_;
    bool accessKeyIdIsSet_;
    std::string secretAccessKey_;
    bool secretAccessKeyIsSet_;
    std::string securityToken_;
    bool securityTokenIsSet_;
    std::string expiration_;
    bool expirationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Credentials_H_
