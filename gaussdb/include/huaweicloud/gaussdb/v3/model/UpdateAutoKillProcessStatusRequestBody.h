
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateAutoKillProcessStatusRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateAutoKillProcessStatusRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateAutoKillProcessStatusRequestBody
    : public ModelBase
{
public:
    UpdateAutoKillProcessStatusRequestBody();
    virtual ~UpdateAutoKillProcessStatusRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAutoKillProcessStatusRequestBody members

    /// <summary>
    /// **参数解释**：  开关状态。  **约束限制**：  不涉及。  **取值范围**：  - ON：开启。 - OFF：关闭。  **默认取值**：  不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateAutoKillProcessStatusRequestBody_H_
