
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ErrorTable_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ErrorTable_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ErrorTable
    : public ModelBase
{
public:
    ErrorTable();
    virtual ~ErrorTable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorTable members

    /// <summary>
    /// **参数解释**：  Excel导入失败的对象信息。  **取值范围**：  不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释**：  Excel导入失败的数据库名。   **取值范围**：  不涉及。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**：  Excel导入失败的表名。   **取值范围**：  不涉及。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  Excel导入失败的行。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getRowNumber() const;
    bool rowNumberIsSet() const;
    void unsetrowNumber();
    void setRowNumber(int32_t value);

    /// <summary>
    /// **参数解释**：  Excel导入失败的错误信息描述。  **取值范围**：  不涉及。
    /// </summary>

    std::string getFullDescription() const;
    bool fullDescriptionIsSet() const;
    void unsetfullDescription();
    void setFullDescription(const std::string& value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    int32_t rowNumber_;
    bool rowNumberIsSet_;
    std::string fullDescription_;
    bool fullDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ErrorTable_H_
