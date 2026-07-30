
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerPublicIp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerPublicIp_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerPublicIp
    : public ModelBase
{
public:
    ServerPublicIp();
    virtual ~ServerPublicIp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerPublicIp members

    /// <summary>
    /// **参数解释**：EIP的ID。 **约束限制**：必填。 **取值范围**：1 - 64字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：EIP的IP地址。 **约束限制**：必填。 **取值范围**：1 - 64字符，标准IPv4地址。 **默认取值**：不涉及。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string address_;
    bool addressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerPublicIp_H_
