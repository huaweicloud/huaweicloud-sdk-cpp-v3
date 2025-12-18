
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlCreateBackupRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlCreateBackupRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/gaussdbfornosql/v3/model/DatabaseTable.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 创建手动备份请求参数。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  NoSqlCreateBackupRequestBody
    : public ModelBase
{
public:
    NoSqlCreateBackupRequestBody();
    virtual ~NoSqlCreateBackupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NoSqlCreateBackupRequestBody members

    /// <summary>
    /// **参数解释：** 手动备份名称。 **约束限制：** 长度为4~64位，必须以字母开头（A~Z或a~z），区分大小写，可以包含字母、数字（0~9）、中划线（-）或者下划线（_），不能包含其他特殊字符。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 手动备份描述。 **约束限制：** 长度不超过256位，且不能包含&gt;!&lt;\&quot;&amp;&#39;&#x3D;特殊字符。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 备份里的库表信息。 **约束限制：** 该参数仅针对GeminiDB Cassandra。 **取值范围：** - 字段为空，表示创建实例级备份。 - 字段非空，表示创建库表级备份。  **默认取值：** 不涉及。
    /// </summary>

    std::vector<DatabaseTable>& getDatabaseTables();
    bool databaseTablesIsSet() const;
    void unsetdatabaseTables();
    void setDatabaseTables(const std::vector<DatabaseTable>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<DatabaseTable> databaseTables_;
    bool databaseTablesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSqlCreateBackupRequestBody_H_
