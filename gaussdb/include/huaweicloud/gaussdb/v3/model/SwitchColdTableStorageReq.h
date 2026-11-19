
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchColdTableStorageReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchColdTableStorageReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TableTarget.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchColdTableStorageReq
    : public ModelBase
{
public:
    SwitchColdTableStorageReq();
    virtual ~SwitchColdTableStorageReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchColdTableStorageReq members

    /// <summary>
    /// **参数解释**：  操作类型。  **约束限制**：  不涉及。  **取值范围**：  - archive：创建冷表。 - unarchive：回迁冷表。  **默认取值**：  不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**：  需要操作的表信息。  **约束限制**：  数组长度小于等于50。
    /// </summary>

    std::vector<TableTarget>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<TableTarget>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<TableTarget> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchColdTableStorageReq_H_
