
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ArchivableTable_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ArchivableTable_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ArchivableTable
    : public ModelBase
{
public:
    ArchivableTable();
    virtual ~ArchivableTable();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ArchivableTable members

    /// <summary>
    /// **参数解释**：  数据库名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**：  表名。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// **参数解释**：  分区名，为空表示无分区表。  **取值范围**：  不涉及。
    /// </summary>

    std::string getPartitionName() const;
    bool partitionNameIsSet() const;
    void unsetpartitionName();
    void setPartitionName(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否存在限制或约束。  **取值范围**：  - true：存在限制或约束，归档受限。 - false：无限制或约束，可归档。
    /// </summary>

    bool isRestricted() const;
    bool restrictedIsSet() const;
    void unsetrestricted();
    void setRestricted(bool value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string partitionName_;
    bool partitionNameIsSet_;
    bool restricted_;
    bool restrictedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ArchivableTable_H_
