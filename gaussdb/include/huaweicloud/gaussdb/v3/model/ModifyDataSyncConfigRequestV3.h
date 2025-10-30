
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDataSyncConfigRequestV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDataSyncConfigRequestV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/TablesConfig.h>
#include <string>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/TableReplConfig.h>
#include <huaweicloud/gaussdb/v3/model/DbConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// StarRocks修改配置请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyDataSyncConfigRequestV3
    : public ModelBase
{
public:
    ModifyDataSyncConfigRequestV3();
    virtual ~ModifyDataSyncConfigRequestV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyDataSyncConfigRequestV3 members

    /// <summary>
    /// **参数解释**：  TaurusDB实例ID。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认值**：  不涉及。
    /// </summary>

    std::string getSourceInstanceId() const;
    bool sourceInstanceIdIsSet() const;
    void unsetsourceInstanceId();
    void setSourceInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  TaurusDB只读节点ID。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为no07，长度为36个字符。  **默认值**：  不涉及。
    /// </summary>

    std::string getSourceNodeId() const;
    bool sourceNodeIdIsSet() const;
    void unsetsourceNodeId();
    void setSourceNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**：  TaurusDB数据库名。  **约束限制**：  不涉及。  **取值范围**：  字符长度限制3~1024位，仅支持英文大小写字母、数字以及下划线。  **默认值**：  不涉及。
    /// </summary>

    std::string getSourceDatabaseName() const;
    bool sourceDatabaseNameIsSet() const;
    void unsetsourceDatabaseName();
    void setSourceDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据同步任务名称。  **约束限制**：  不涉及。  **取值范围**：  长度限制3~128位，仅支持英文大小写字母、数字以及下划线。  **默认值**：  不涉及。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释**：  库配置列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认值**：  不涉及。
    /// </summary>

    std::vector<DbConfig>& getDbConfigs();
    bool dbConfigsIsSet() const;
    void unsetdbConfigs();
    void setDbConfigs(const std::vector<DbConfig>& value);

    /// <summary>
    /// **参数解释**：  表配置信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认值**：  不涉及。
    /// </summary>

    std::vector<TablesConfig>& getTablesConfigs();
    bool tablesConfigsIsSet() const;
    void unsettablesConfigs();
    void setTablesConfigs(const std::vector<TablesConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    TableReplConfig getTableReplConfig() const;
    bool tableReplConfigIsSet() const;
    void unsettableReplConfig();
    void setTableReplConfig(const TableReplConfig& value);

    /// <summary>
    /// **参数解释**：  目标数据库名。  **约束限制**：  不涉及。  **取值范围**：  长度限制3~128位，仅支持英文大小写字母、数字以及下划线。  **默认值**：  不涉及。
    /// </summary>

    std::string getTargetDatabaseName() const;
    bool targetDatabaseNameIsSet() const;
    void unsettargetDatabaseName();
    void setTargetDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否支持实例级同步。  **约束限制**：  不涉及。  **取值范围**：  - true：是。 - false：否。  **默认取值**：  false。
    /// </summary>

    std::string getIsInstanceLevelSync() const;
    bool isInstanceLevelSyncIsSet() const;
    void unsetisInstanceLevelSync();
    void setIsInstanceLevelSync(const std::string& value);

    /// <summary>
    /// **参数解释**：  库同步范围。  **约束限制**：  不涉及。  **取值范围**：  - all：同步全部库。 - part：同步部分库。  **默认取值**：  part。
    /// </summary>

    std::string getDatabaseReplScope() const;
    bool databaseReplScopeIsSet() const;
    void unsetdatabaseReplScope();
    void setDatabaseReplScope(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否支持通配符。  **约束限制**：  不涉及。  **取值范围**：  - true：支持通配符。 - false：不支持通配符。  **默认取值**：  false。
    /// </summary>

    std::string getIsSupportRegExp() const;
    bool isSupportRegExpIsSet() const;
    void unsetisSupportRegExp();
    void setIsSupportRegExp(const std::string& value);


protected:
    std::string sourceInstanceId_;
    bool sourceInstanceIdIsSet_;
    std::string sourceNodeId_;
    bool sourceNodeIdIsSet_;
    std::string sourceDatabaseName_;
    bool sourceDatabaseNameIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::vector<DbConfig> dbConfigs_;
    bool dbConfigsIsSet_;
    std::vector<TablesConfig> tablesConfigs_;
    bool tablesConfigsIsSet_;
    TableReplConfig tableReplConfig_;
    bool tableReplConfigIsSet_;
    std::string targetDatabaseName_;
    bool targetDatabaseNameIsSet_;
    std::string isInstanceLevelSync_;
    bool isInstanceLevelSyncIsSet_;
    std::string databaseReplScope_;
    bool databaseReplScopeIsSet_;
    std::string isSupportRegExp_;
    bool isSupportRegExpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDataSyncConfigRequestV3_H_
