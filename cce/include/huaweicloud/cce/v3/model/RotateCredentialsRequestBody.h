
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_RotateCredentialsRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_RotateCredentialsRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AuthenticatingProxy.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  RotateCredentialsRequestBody
    : public ModelBase
{
public:
    RotateCredentialsRequestBody();
    virtual ~RotateCredentialsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RotateCredentialsRequestBody members

    /// <summary>
    /// **参数解释：**  需要轮转的组件名称。 **约束限制：** 不涉及 **取值范围：** - all：轮转CCE集群证书。 - service-account-controller：轮转ServiceAccount token相关证书。 - custom：轮转用户自有证书，指定此参数时，需同时指定certContent参数。  **默认取值：** 不涉及 
    /// </summary>

    std::string getComponent() const;
    bool componentIsSet() const;
    void unsetcomponent();
    void setComponent(const std::string& value);

    /// <summary>
    /// **参数解释：**  轮转证书后，用于验证ServiceAccount Token签名的旧证书保留时间。  为了保证基于旧证书签发的ServiceAccount Token在证书轮转后能验签通过，CCE会保留老证书一段时间，具体规则如下： - 首次轮转时，CCE会保留创建集群时生成的证书； - 从第二次轮转开始，CCE会保留老证书一段时间，默认24小时。用户可以通过当前参数配置保留的时间。  **约束限制：** 不涉及 **取值范围：** 0-8784（小时） **默认取值：** 24（小时） 
    /// </summary>

    int32_t getCertificateExpirationTime() const;
    bool certificateExpirationTimeIsSet() const;
    void unsetcertificateExpirationTime();
    void setCertificateExpirationTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    AuthenticatingProxy getCertContent() const;
    bool certContentIsSet() const;
    void unsetcertContent();
    void setCertContent(const AuthenticatingProxy& value);


protected:
    std::string component_;
    bool componentIsSet_;
    int32_t certificateExpirationTime_;
    bool certificateExpirationTimeIsSet_;
    AuthenticatingProxy certContent_;
    bool certContentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_RotateCredentialsRequestBody_H_
