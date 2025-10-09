
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplicableInstanceInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplicableInstanceInfo_H_


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
/// **参数解释**：  可应用参数模板的实例详情  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ApplicableInstanceInfo
    : public ModelBase
{
public:
    ApplicableInstanceInfo();
    virtual ~ApplicableInstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplicableInstanceInfo members

    /// <summary>
    /// **参数解释**：  实例id  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEntityId() const;
    bool entityIdIsSet() const;
    void unsetentityId();
    void setEntityId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例名称  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEntityName() const;
    bool entityNameIsSet() const;
    void unsetentityName();
    void setEntityName(const std::string& value);


protected:
    std::string entityId_;
    bool entityIdIsSet_;
    std::string entityName_;
    bool entityNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ApplicableInstanceInfo_H_
