
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DatabaseTablesInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DatabaseTablesInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 查询的数据库以及对应表名称的结构体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DatabaseTablesInfo
    : public ModelBase
{
public:
    DatabaseTablesInfo();
    virtual ~DatabaseTablesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseTablesInfo members

    /// <summary>
    /// **参数解释**：  查询的数据库名称。  **约束限制**：  支持英文大小写字母、数字、下划线。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// **参数解释**：  查询的数据表名称。  **约束限制**：  支持英文大小写字母、数字、下划线。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<std::string>& getTables();
    bool tablesIsSet() const;
    void unsettables();
    void setTables(const std::vector<std::string>& value);


protected:
    std::string database_;
    bool databaseIsSet_;
    std::vector<std::string> tables_;
    bool tablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DatabaseTablesInfo_H_
