
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetHtapQueryQueuesRuleResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetHtapQueryQueuesRuleResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetHtapQueryQueuesRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    SetHtapQueryQueuesRuleResponse();
    virtual ~SetHtapQueryQueuesRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetHtapQueryQueuesRuleResponse members

    /// <summary>
    /// **参数解释**：  响应返回结果。   **取值范围**：  - success：成功。 - failed：失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  响应错误信息。  **取值范围**：  不涉及。
    /// </summary>

    std::string getMsg() const;
    bool msgIsSet() const;
    void unsetmsg();
    void setMsg(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string msg_;
    bool msgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetHtapQueryQueuesRuleResponse_H_
