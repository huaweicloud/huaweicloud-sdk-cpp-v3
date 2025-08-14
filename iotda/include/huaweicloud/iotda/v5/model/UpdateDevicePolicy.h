
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevicePolicy_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevicePolicy_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/Statement.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新策略请求体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateDevicePolicy
    : public ModelBase
{
public:
    UpdateDevicePolicy();
    virtual ~UpdateDevicePolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDevicePolicy members

    /// <summary>
    /// **参数说明**：策略名称。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// **参数说明**：策略文档。
    /// </summary>

    std::vector<Statement>& getStatement();
    bool statementIsSet() const;
    void unsetstatement();
    void setStatement(const std::vector<Statement>& value);


protected:
    std::string policyName_;
    bool policyNameIsSet_;
    std::vector<Statement> statement_;
    bool statementIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateDevicePolicy_H_
