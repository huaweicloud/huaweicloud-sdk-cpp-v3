
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
    /// 过滤DDL策略。取值： - drop_database  场景区别： - 实时迁移场景：MySQL迁移可填\&quot;\&quot;，表示不过滤DROP DATABASE。 - 实时同步场景：MySQL同步只能填\&quot;drop_database\&quot;。
    /// </summary>

    std::string getFilterDdlPolicy() const;
    bool filterDdlPolicyIsSet() const;
    void unsetfilterDdlPolicy();
    void setFilterDdlPolicy(const std::string& value);

    /// <summary>
    /// 增量阶段冲突策略。该冲突策略特指增量同步中的冲突处理策略,全量阶段的冲突默认忽略。取值： - ignore：忽略。当同步数据与目标库已有数据冲突时（主键/唯一键重复等），DRS将忽略源库的冲突数据，并保留目标库中的冲突数据，继续进行后续同步。  - stop：报错。当同步数据与目标库已有数据冲突时（主键/唯一键重复等），同步任务将失败并立即中止。可在同步日志中查看详细信息。  - overwrite：覆盖。当同步数据与目标库已有数据冲突时（主键/唯一键重复等），将覆盖原来的冲突数据。  场景区别： - 实时迁移场景：不支持。 - 实时同步场景：支持。
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
    /// 增量支持的DDL。取值： - \&quot;CREATE_TABLE,ADD_COLUMN,MODIFY_COLUMN,CHANGE_COLUMN,DROP_INDEX,ADD_INDEX,CREATE_INDEX,RENAME_INDEX\&quot;。 - 含义解释： - CREATE_TABLE：创建表。 - ADD_COLUMN：加列。 - MODIFY_COLUMN：改列属性。 - CHANGE_COLUMN：改列属性。 - DROP_INDEX：删除索引。 - ADD_INDEX：加索引。 - CREATE_INDEX：创建索引。 - RENAME_INDEX：重命名索引。 - 使用提示： 1.一对一，一对多场景，如果业务上认为源和目标应该使用保持严格一致，那么高危类DDL也应该勾选并同步。 2.一对一，一对多场景，如果业务上确定某个高危DDL不应该发生，则可以不勾选同步高危类DDL，这样DRS将拦截过滤这个DDL，从而起到保护目标数据的作用，但需要知晓过滤DDL的附带问题是可能导致同步失败，例如过滤删列动作。 3.多对一数据聚合场景，最佳实践是推荐只选择同步加列DDL，其他大部分DDL同步都因目标表修改而导致其他任务失败/数据不一致的情况发生，常见情况有：a、同步truncate导致目标数据全部被清空； b、同步创建索引导致目标表被锁定； c、同步rename导致其他任务找不到目标表而失败；d、同步改列导致其他任务因数据类型不兼容而失败；
    /// </summary>

    std::string getSupportDdlInfo() const;
    bool supportDdlInfoIsSet() const;
    void unsetsupportDdlInfo();
    void setSupportDdlInfo(const std::string& value);

    /// <summary>
    /// 同步数据类型。取值：supportAllType（同步所有类型），tableData（同步数据），tableStructure（同步表结构），constraintData（索引同步）。 说明：除supportAllType以外，其他类型可组合填写，例如：\&quot;tableData,tableStructure\&quot; 。
    /// </summary>

    std::string getSyncTypePolicy() const;
    bool syncTypePolicyIsSet() const;
    void unsetsyncTypePolicy();
    void setSyncTypePolicy(const std::string& value);

    /// <summary>
    /// oracle-gausssdb增量读取方式：logminer，xstream
    /// </summary>

    std::string getIncrementReadMode() const;
    bool incrementReadModeIsSet() const;
    void unsetincrementReadMode();
    void setIncrementReadMode(const std::string& value);

    /// <summary>
    /// DML同步类型。
    /// </summary>

    std::string getDmlTypes() const;
    bool dmlTypesIsSet() const;
    void unsetdmlTypes();
    void setDmlTypes(const std::string& value);


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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_PolicyConfig_H_
