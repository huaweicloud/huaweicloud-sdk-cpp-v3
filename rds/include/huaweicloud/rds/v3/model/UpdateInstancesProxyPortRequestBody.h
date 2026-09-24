
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstancesProxyPortRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstancesProxyPortRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateInstancesProxyPortRequestBody
    : public ModelBase
{
public:
    UpdateInstancesProxyPortRequestBody();
    virtual ~UpdateInstancesProxyPortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstancesProxyPortRequestBody members

    /// <summary>
    /// **参数解释**：  端口号。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int32_t value);


protected:
    int32_t port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstancesProxyPortRequestBody_H_
