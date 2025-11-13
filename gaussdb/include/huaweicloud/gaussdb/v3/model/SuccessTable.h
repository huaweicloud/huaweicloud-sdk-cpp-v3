
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SuccessTable_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SuccessTable_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SuccessTable
    : public ModelBase
{
public:
    SuccessTable();
    virtual ~SuccessTable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SuccessTable members

    /// <summary>
    /// **参数解释**：  Excel导入成功的数据库名。   **取值范围**：  不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**：  Excel导入成功的表名。   **取值范围**：  不涉及。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  Excel导入成功的表配置。   **取值范围**：  不涉及。
    /// </summary>

    std::string getConfigName() const;
    bool configNameIsSet() const;
    void unsetconfigName();
    void setConfigName(const std::string& value);

    /// <summary>
    /// **参数解释**：  Excel导入成功的行数。   **取值范围**：  不涉及。
    /// </summary>

    int32_t getRowNumber() const;
    bool rowNumberIsSet() const;
    void unsetrowNumber();
    void setRowNumber(int32_t value);

    /// <summary>
    /// **参数解释**：  Excel导入成功的表全名。   **取值范围**：  不涉及。
    /// </summary>

    std::string getFullTableName() const;
    bool fullTableNameIsSet() const;
    void unsetfullTableName();
    void setFullTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  Excel信息是否合规。   **取值范围**：  - true：校验结果合规。 - false：校验结果不合规。
    /// </summary>

    bool isValid() const;
    bool validIsSet() const;
    void unsetvalid();
    void setValid(bool value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string configName_;
    bool configNameIsSet_;
    int32_t rowNumber_;
    bool rowNumberIsSet_;
    std::string fullTableName_;
    bool fullTableNameIsSet_;
    bool valid_;
    bool validIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SuccessTable_H_
