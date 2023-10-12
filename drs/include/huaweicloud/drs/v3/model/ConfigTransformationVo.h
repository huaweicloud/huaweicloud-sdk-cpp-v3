
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ConfigTransformationVo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ConfigTransformationVo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据同步配置库规则信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ConfigTransformationVo
    : public ModelBase
{
public:
    ConfigTransformationVo();
    virtual ~ConfigTransformationVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigTransformationVo members

    /// <summary>
    /// 库名.表名。
    /// </summary>

    std::string getDbTableName() const;
    bool dbTableNameIsSet() const;
    void unsetdbTableName();
    void setDbTableName(const std::string& value);

    /// <summary>
    /// 库名。长度限制256。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 表名。长度限制256。
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 列名。长度限制256。
    /// </summary>

    std::string getColNames() const;
    bool colNamesIsSet() const;
    void unsetcolNames();
    void setColNames(const std::string& value);

    /// <summary>
    /// 主键或唯一索引。长度限制256。
    /// </summary>

    std::string getPrimKeyOrIndex() const;
    bool primKeyOrIndexIsSet() const;
    void unsetprimKeyOrIndex();
    void setPrimKeyOrIndex(const std::string& value);

    /// <summary>
    /// 优化查询所需的索引。长度限制256。
    /// </summary>

    std::string getIndexs() const;
    bool indexsIsSet() const;
    void unsetindexs();
    void setIndexs(const std::string& value);

    /// <summary>
    /// 过滤条件。长度限制256。
    /// </summary>

    std::string getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::string& value);


protected:
    std::string dbTableName_;
    bool dbTableNameIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string colNames_;
    bool colNamesIsSet_;
    std::string primKeyOrIndex_;
    bool primKeyOrIndexIsSet_;
    std::string indexs_;
    bool indexsIsSet_;
    std::string values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ConfigTransformationVo_H_
