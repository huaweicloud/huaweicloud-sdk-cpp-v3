
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DataProcessInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DataProcessInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DataFilteringCondition.h>
#include <huaweicloud/drs/v5/model/DbOrTableRenameRule.h>
#include <huaweicloud/drs/v5/model/DbObjectColumnInfo.h>
#include <string>
#include <huaweicloud/drs/v5/model/AddColumnInfo.h>
#include <huaweicloud/drs/v5/model/DbObject.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DataProcessInfo
    : public ModelBase
{
public:
    DataProcessInfo();
    virtual ~DataProcessInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataProcessInfo members

    /// <summary>
    /// 指定任务数据加工规则请求体
    /// </summary>

    std::vector<DataFilteringCondition>& getFilterConditions();
    bool filterConditionsIsSet() const;
    void unsetfilterConditions();
    void setFilterConditions(const std::vector<DataFilteringCondition>& value);

    /// <summary>
    /// 库级、批量表级处理为true，单表操作为false
    /// </summary>

    bool isIsBatchProcess() const;
    bool isBatchProcessIsSet() const;
    void unsetisBatchProcess();
    void setIsBatchProcess(bool value);

    /// <summary>
    /// 附加列 当选择附加列时必须填写 约束：使用多对一操作时，需要使用数据加工的附加列操作来避免数据冲突。
    /// </summary>

    std::vector<AddColumnInfo>& getAddColumns();
    bool addColumnsIsSet() const;
    void unsetaddColumns();
    void setAddColumns(const std::vector<AddColumnInfo>& value);

    /// <summary>
    /// 支持DDL的语法 选择增量迁移或同步的DDL操作。取值及意思如下： \&quot;table\&quot;: \&quot;CREATE TABLE, ALTER TABLE,DROP TABLE,RENAME TABLE\&quot; 如该值为空，不迁移或同步DDL操作
    /// </summary>

    std::map<std::string, std::string>& getDdlOperation();
    bool ddlOperationIsSet() const;
    void unsetddlOperation();
    void setDdlOperation(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 支持DML的语法 选择DML操作时，取值如下： i：INSERT。 u：UPDATE。 d：DELETE。 如该值为空，不增量迁移或同步DML操作。
    /// </summary>

    std::string getDmlOperation() const;
    bool dmlOperationIsSet() const;
    void unsetdmlOperation();
    void setDmlOperation(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DbObjectColumnInfo getDbObjectColumnInfo() const;
    bool dbObjectColumnInfoIsSet() const;
    void unsetdbObjectColumnInfo();
    void setDbObjectColumnInfo(const DbObjectColumnInfo& value);

    /// <summary>
    /// 
    /// </summary>

    DbOrTableRenameRule getDbOrTableRenameRule() const;
    bool dbOrTableRenameRuleIsSet() const;
    void unsetdbOrTableRenameRule();
    void setDbOrTableRenameRule(const DbOrTableRenameRule& value);

    /// <summary>
    /// 
    /// </summary>

    DbObject getDbObject() const;
    bool dbObjectIsSet() const;
    void unsetdbObject();
    void setDbObject(const DbObject& value);

    /// <summary>
    /// 表示该规则是否已同步至目标库
    /// </summary>

    bool isIsSynchronized() const;
    bool isSynchronizedIsSet() const;
    void unsetisSynchronized();
    void setIsSynchronized(bool value);


protected:
    std::vector<DataFilteringCondition> filterConditions_;
    bool filterConditionsIsSet_;
    bool isBatchProcess_;
    bool isBatchProcessIsSet_;
    std::vector<AddColumnInfo> addColumns_;
    bool addColumnsIsSet_;
    std::map<std::string, std::string> ddlOperation_;
    bool ddlOperationIsSet_;
    std::string dmlOperation_;
    bool dmlOperationIsSet_;
    DbObjectColumnInfo dbObjectColumnInfo_;
    bool dbObjectColumnInfoIsSet_;
    DbOrTableRenameRule dbOrTableRenameRule_;
    bool dbOrTableRenameRuleIsSet_;
    DbObject dbObject_;
    bool dbObjectIsSet_;
    bool isSynchronized_;
    bool isSynchronizedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DataProcessInfo_H_
