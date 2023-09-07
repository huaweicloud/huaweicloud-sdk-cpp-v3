
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectColumnInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectColumnInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/QueryColumnInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 列加工对象 约束： 列加工提供列级的查询、映射和过滤能力。 编辑列名后，目标数据库的列名为修改后的名称。 列映射名不能和原列名或已存在的映射名相同。 不支持库名、表名带有换行符的列进行映射。 任务再编辑时，已经同步的表不支持修改列信息。 只有勾选的列才会被同步。 MySQL-&gt;MySQL、MySQL-&gt;GaussDB(for MySQL)不支持分区表的分区字段进行列映射。 GaussDB分区键不可以被过滤。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DbObjectColumnInfo
    : public ModelBase
{
public:
    DbObjectColumnInfo();
    virtual ~DbObjectColumnInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DbObjectColumnInfo members

    /// <summary>
    /// 数据库库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 数据库schema名称。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// 数据库表名称。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 数据库列信息。
    /// </summary>

    std::vector<QueryColumnInfo>& getColumnInfos();
    bool columnInfosIsSet() const;
    void unsetcolumnInfos();
    void setColumnInfos(const std::vector<QueryColumnInfo>& value);

    /// <summary>
    /// 数据库列信息总数，与分页无关，仅作为返回体参数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::vector<QueryColumnInfo> columnInfos_;
    bool columnInfosIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DbObjectColumnInfo_H_
