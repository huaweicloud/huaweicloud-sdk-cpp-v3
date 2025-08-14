
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateDevicePolicy_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateDevicePolicy_H_


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
/// 添加策略请求体。
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  CreateDevicePolicy
    : public ModelBase
{
public:
    CreateDevicePolicy();
    virtual ~CreateDevicePolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDevicePolicy members

    /// <summary>
    /// **参数说明**：策略名称。 **取值范围**：长度不超过128，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getPolicyName() const;
    bool policyNameIsSet() const;
    void unsetpolicyName();
    void setPolicyName(const std::string& value);

    /// <summary>
    /// **参数说明**：资源空间ID。此参数为非必选参数，存在多资源空间的用户需要使用该接口时，建议携带该参数指定创建的设备归属到哪个资源空间下，否则创建的设备将会归属到[[默认资源空间](https://support.huaweicloud.com/usermanual-iothub/iot_01_0006.html#section0)](tag:hws)[[默认资源空间](https://support.huaweicloud.com/intl/zh-cn/usermanual-iothub/iot_01_0006.html#section0)](tag:hws_hk)下。 **取值范围**：长度不超过36，只允许字母、数字、下划线（_）、连接符（-）的组合。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

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
    std::string appId_;
    bool appIdIsSet_;
    std::vector<Statement> statement_;
    bool statementIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_CreateDevicePolicy_H_
