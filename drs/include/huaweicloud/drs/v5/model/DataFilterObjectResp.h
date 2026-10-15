
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterObjectResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterObjectResp_H_


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
/// 数据过滤对象信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DataFilterObjectResp
    : public ModelBase
{
public:
    DataFilterObjectResp();
    virtual ~DataFilterObjectResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataFilterObjectResp members

    /// <summary>
    /// 数据过滤对象信息批次ID，与父级DataFilterRuleResp的batch_id关联，用于追溯对象归属的批次
    /// </summary>

    int64_t getBatchId() const;
    bool batchIdIsSet() const;
    void unsetbatchId();
    void setBatchId(int64_t value);

    /// <summary>
    /// 数据过滤对象的唯一标识符，由对象层级结构（库名、表名、对象类型等）组合生成
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 父级过滤对象的标识符，用于表示对象之间的层级归属关系（如列归属于表、表归属于库）。
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 数据过滤对象的名称，按object_type不同可为库名、表名或列名。
    /// </summary>

    std::string getObjectName() const;
    bool objectNameIsSet() const;
    void unsetobjectName();
    void setObjectName(const std::string& value);

    /// <summary>
    /// 数据过滤对象的映射名称（别名），在目标端数据库对象名与源端不一致时使用。
    /// </summary>

    std::string getObjectAliasName() const;
    bool objectAliasNameIsSet() const;
    void unsetobjectAliasName();
    void setObjectAliasName(const std::string& value);

    /// <summary>
    /// 数据过滤对象的层级类型，标识当前过滤规则粒度级别。
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 数据过滤对象所属的数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据过滤对象所属的schema名。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 数据过滤对象所属的表名。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 标记该对象是否启用数据过滤。
    /// </summary>

    std::string getIsDataFilter() const;
    bool isDataFilterIsSet() const;
    void unsetisDataFilter();
    void setIsDataFilter(const std::string& value);

    /// <summary>
    /// 数据过滤的类型，标识使用的过滤策略。
    /// </summary>

    std::string getDataFilterType() const;
    bool dataFilterTypeIsSet() const;
    void unsetdataFilterType();
    void setDataFilterType(const std::string& value);

    /// <summary>
    /// 数据过滤条件
    /// </summary>

    std::string getFilterCondition() const;
    bool filterConditionIsSet() const;
    void unsetfilterCondition();
    void setFilterCondition(const std::string& value);

    /// <summary>
    /// 数据过滤条件是否已同步
    /// </summary>

    bool isIsSynchronized() const;
    bool isSynchronizedIsSet() const;
    void unsetisSynchronized();
    void setIsSynchronized(bool value);


protected:
    int64_t batchId_;
    bool batchIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;
    std::string objectName_;
    bool objectNameIsSet_;
    std::string objectAliasName_;
    bool objectAliasNameIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string isDataFilter_;
    bool isDataFilterIsSet_;
    std::string dataFilterType_;
    bool dataFilterTypeIsSet_;
    std::string filterCondition_;
    bool filterConditionIsSet_;
    bool isSynchronized_;
    bool isSynchronizedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilterObjectResp_H_
