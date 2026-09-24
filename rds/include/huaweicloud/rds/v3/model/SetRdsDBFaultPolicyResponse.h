
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetRdsDBFaultPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetRdsDBFaultPolicyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetRdsDBFaultPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    SetRdsDBFaultPolicyResponse();
    virtual ~SetRdsDBFaultPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetRdsDBFaultPolicyResponse members

    /// <summary>
    /// **参数解释**：  请求状态。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**：  错误信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getErrmsg() const;
    bool errmsgIsSet() const;
    void unseterrmsg();
    void setErrmsg(const std::string& value);


protected:
    std::string state_;
    bool stateIsSet_;
    std::string errmsg_;
    bool errmsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetRdsDBFaultPolicyResponse_H_
