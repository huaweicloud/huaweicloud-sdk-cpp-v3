
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_User_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_User_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  User
    : public ModelBase
{
public:
    User();
    virtual ~User();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// User members

    /// <summary>
    /// **参数解释**： 客户端证书。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getClientCertificateData() const;
    bool clientCertificateDataIsSet() const;
    void unsetclientCertificateData();
    void setClientCertificateData(const std::string& value);

    /// <summary>
    /// **参数解释**： 包含来自TLS客户端密钥文件的PEM编码数据。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getClientKeyData() const;
    bool clientKeyDataIsSet() const;
    void unsetclientKeyData();
    void setClientKeyData(const std::string& value);


protected:
    std::string clientCertificateData_;
    bool clientCertificateDataIsSet_;
    std::string clientKeyData_;
    bool clientKeyDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_User_H_
