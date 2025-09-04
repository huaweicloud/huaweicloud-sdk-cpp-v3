
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryTableRequestV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryTableRequestV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DatabaseTablesInfo.h>
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
/// 查询HTAP主实例数据库表列表请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  QueryTableRequestV3
    : public ModelBase
{
public:
    QueryTableRequestV3();
    virtual ~QueryTableRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTableRequestV3 members

    /// <summary>
    /// **参数解释**：  查询的数据库及表名称的列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<DatabaseTablesInfo>& getDatabaseTables();
    bool databaseTablesIsSet() const;
    void unsetdatabaseTables();
    void setDatabaseTables(const std::vector<DatabaseTablesInfo>& value);

    /// <summary>
    /// **参数解释**：  需要查询数据库的源实例ID，严格匹配UUID规则。  **约束限制**：  只能由英文字母、数字组成，且长度为36个字符。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  已选择的数据库及表名称的列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<DatabaseTablesInfo>& getSelectedTables();
    bool selectedTablesIsSet() const;
    void unsetselectedTables();
    void setSelectedTables(const std::vector<DatabaseTablesInfo>& value);

    /// <summary>
    /// **参数解释**：  表黑白名单设置。include_tables：白名单，exclude_tables：黑名单。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getFilterType() const;
    bool filterTypeIsSet() const;
    void unsetfilterType();
    void setFilterType(const std::string& value);


protected:
    std::vector<DatabaseTablesInfo> databaseTables_;
    bool databaseTablesIsSet_;
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::vector<DatabaseTablesInfo> selectedTables_;
    bool selectedTablesIsSet_;
    std::string filterType_;
    bool filterTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_QueryTableRequestV3_H_
