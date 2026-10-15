
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_PolicyConfig_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_PolicyConfig_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 策略信息体。设置迁移、同步策略，包括冲突策略、过滤DROP Datase、对象同步范围等。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  PolicyConfig
    : public ModelBase
{
public:
    PolicyConfig();
    virtual ~PolicyConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PolicyConfig members

    /// <summary>
    /// **参数解释**：  过滤DDL策略，指定增量同步阶段需要过滤的DDL操作类型。  **约束限制**：  - 实时迁移场景：MySQL迁移可填空，表示不过滤DROP DATABASE。 - 实时同步场景：MySQL同步只能填drop_database。  **取值范围**：  - drop_database：过滤DROP DATABASE操作  **默认取值**：  不涉及
    /// </summary>

    std::string getFilterDdlPolicy() const;
    bool filterDdlPolicyIsSet() const;
    void unsetfilterDdlPolicy();
    void setFilterDdlPolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：  增量阶段冲突策略，指定当目标库已存在相同数据时的处理方式。该冲突策略特指增量同步中的冲突处理策略，全量阶段的冲突默认忽略。  **约束限制**：  - 实时迁移场景：不支持。 - 实时同步场景：支持。  **取值范围**：  - ignore：忽略，保留目标库中的冲突数据，继续进行后续同步 - stop：报错，同步任务将失败并立即中止 - overwrite：覆盖，用源库数据覆盖目标库已有数据  **默认取值**：  不涉及
    /// </summary>

    std::string getConflictPolicy() const;
    bool conflictPolicyIsSet() const;
    void unsetconflictPolicy();
    void setConflictPolicy(const std::string& value);

    /// <summary>
    /// 对象同步范围：是否同步普通索引。DRS将默认同步主键/唯一索引，普通索引是指除主键/唯一索引以外的其他类型索引。取值： - true：将会同步全部的索引。 - false：仅同步主键/唯一索引，普通索引不会同步。
    /// </summary>

    bool isIndexTrans() const;
    bool indexTransIsSet() const;
    void unsetindexTrans();
    void setIndexTrans(bool value);

    /// <summary>
    /// 对象同步范围：同步增量阶段是否同步DDL。取值： - true：增量阶段同步DDL。 - false：增量阶段不同步DDL。
    /// </summary>

    bool isDdlTrans() const;
    bool ddlTransIsSet() const;
    void unsetddlTrans();
    void setDdlTrans(bool value);

    /// <summary>
    /// 数据同步拓扑。数据同步功能支持多种同步拓扑，您可以根据业务需求规划您的同步实例。参考链接。取值： - one2one：一对一。 - one2many：一对多。 - many2one：多对一。
    /// </summary>

    std::string getDataSyncTopologyType() const;
    bool dataSyncTopologyTypeIsSet() const;
    void unsetdataSyncTopologyType();
    void setDataSyncTopologyType(const std::string& value);

    /// <summary>
    /// **参数解释**：  增量支持的DDL，指定增量同步阶段允许同步的DDL操作类型。  **约束限制**：  不涉及。  **取值范围**：  - CREATE_TABLE：创建表 - ADD_COLUMN：加列 - MODIFY_COLUMN：改列属性 - CHANGE_COLUMN：改列属性 - DROP_INDEX：删除索引 - ADD_INDEX：加索引 - CREATE_INDEX：创建索引 - RENAME_INDEX：重命名索引  **默认取值**：  不涉及
    /// </summary>

    std::string getSupportDdlInfo() const;
    bool supportDdlInfoIsSet() const;
    void unsetsupportDdlInfo();
    void setSupportDdlInfo(const std::string& value);

    /// <summary>
    /// **参数解释**：  同步数据类型，指定增量同步阶段需要同步的数据类型范围。  **约束限制**：  不涉及。  **取值范围**：  - supportAllType：同步所有类型 - tableData：同步数据 - tableStructure：同步表结构 - constraintData：索引同步  **默认取值**：  不涉及
    /// </summary>

    std::string getSyncTypePolicy() const;
    bool syncTypePolicyIsSet() const;
    void unsetsyncTypePolicy();
    void setSyncTypePolicy(const std::string& value);

    /// <summary>
    /// **参数解释**：  Oracle-GaussDB增量读取方式，指定Oracle同步到GaussDB时增量数据的读取模式。  **约束限制**：  不涉及。  **取值范围**：  - logminer：Logminer方式 - xstream：Xstream方式  **默认取值**：  不涉及
    /// </summary>

    std::string getIncrementReadMode() const;
    bool incrementReadModeIsSet() const;
    void unsetincrementReadMode();
    void setIncrementReadMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  DML同步类型，指定增量同步阶段需要同步的数据操作类型，包括插入、更新和删除操作。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDmlTypes() const;
    bool dmlTypesIsSet() const;
    void unsetdmlTypes();
    void setDmlTypes(const std::string& value);

    /// <summary>
    /// **参数解释**：  索引与表结构是否同时建立，指定在同步过程中创建表时是否同时创建索引。  **约束限制**：  不涉及。  **取值范围**：  - true：索引与表结构同时建立 - false：索引与表结构不同时建立  **默认取值**：  不涉及
    /// </summary>

    bool isIsCreateTableWithIndex() const;
    bool isCreateTableWithIndexIsSet() const;
    void unsetisCreateTableWithIndex();
    void setIsCreateTableWithIndex(bool value);


protected:
    std::string filterDdlPolicy_;
    bool filterDdlPolicyIsSet_;
    std::string conflictPolicy_;
    bool conflictPolicyIsSet_;
    bool indexTrans_;
    bool indexTransIsSet_;
    bool ddlTrans_;
    bool ddlTransIsSet_;
    std::string dataSyncTopologyType_;
    bool dataSyncTopologyTypeIsSet_;
    std::string supportDdlInfo_;
    bool supportDdlInfoIsSet_;
    std::string syncTypePolicy_;
    bool syncTypePolicyIsSet_;
    std::string incrementReadMode_;
    bool incrementReadModeIsSet_;
    std::string dmlTypes_;
    bool dmlTypesIsSet_;
    bool isCreateTableWithIndex_;
    bool isCreateTableWithIndexIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_PolicyConfig_H_
