
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilteringAdvancedSetting_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilteringAdvancedSetting_H_


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
/// 数据过滤高级设置信息体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DataFilteringAdvancedSetting
    : public ModelBase
{
public:
    DataFilteringAdvancedSetting();
    virtual ~DataFilteringAdvancedSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DataFilteringAdvancedSetting members

    /// <summary>
    /// 库名
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 表名
    /// </summary>

    std::string getTableName() const;
    bool tableNameIsSet() const;
    void unsettableName();
    void setTableName(const std::string& value);

    /// <summary>
    /// 列名
    /// </summary>

    std::string getColNames() const;
    bool colNamesIsSet() const;
    void unsetcolNames();
    void setColNames(const std::string& value);

    /// <summary>
    /// 主键或唯一索引
    /// </summary>

    std::string getPrimKeyOrIndexes() const;
    bool primKeyOrIndexesIsSet() const;
    void unsetprimKeyOrIndexes();
    void setPrimKeyOrIndexes(const std::string& value);

    /// <summary>
    /// 优化查询所需的索引
    /// </summary>

    std::string getIndexes() const;
    bool indexesIsSet() const;
    void unsetindexes();
    void setIndexes(const std::string& value);

    /// <summary>
    /// 过滤条件
    /// </summary>

    std::string getValues() const;
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string tableName_;
    bool tableNameIsSet_;
    std::string colNames_;
    bool colNamesIsSet_;
    std::string primKeyOrIndexes_;
    bool primKeyOrIndexesIsSet_;
    std::string indexes_;
    bool indexesIsSet_;
    std::string values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DataFilteringAdvancedSetting_H_
