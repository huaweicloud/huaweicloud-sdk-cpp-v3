
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxyEipRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxyEipRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Proxy绑定解绑弹性公网IP请求体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SwitchMySqlProxyEipRequestBody
    : public ModelBase
{
public:
    SwitchMySqlProxyEipRequestBody();
    virtual ~SwitchMySqlProxyEipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchMySqlProxyEipRequestBody members

    /// <summary>
    /// **参数解释**：  待绑定的弹性公网IP地址。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// **参数解释**：  弹性公网IP地址对应的ID。请求为绑定弹性公网IP时需传入该参数，请求为解绑弹性公网IP时无需传入。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// **参数解释**：  请求是否为绑定弹性公网IP。  **约束限制**：  不涉及。  **取值范围**：  - true：表示请求为绑定弹性公网IP。 - false：表示请求为解绑弹性公网IP。  **默认取值**：  不涉及。
    /// </summary>

    std::string getBind() const;
    bool bindIsSet() const;
    void unsetbind();
    void setBind(const std::string& value);


protected:
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    std::string bind_;
    bool bindIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxyEipRequestBody_H_
