
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryColumnInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryColumnInfo_H_


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
/// 数据库列信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryColumnInfo
    : public ModelBase
{
public:
    QueryColumnInfo();
    virtual ~QueryColumnInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryColumnInfo members

    /// <summary>
    /// 列名
    /// </summary>

    std::string getColumnName() const;
    bool columnNameIsSet() const;
    void unsetcolumnName();
    void setColumnName(const std::string& value);

    /// <summary>
    /// 列类型
    /// </summary>

    std::string getColumnType() const;
    bool columnTypeIsSet() const;
    void unsetcolumnType();
    void setColumnType(const std::string& value);

    /// <summary>
    /// 主键或者唯一索引
    /// </summary>

    std::string getPrimaryKeyOrUniqueIndex() const;
    bool primaryKeyOrUniqueIndexIsSet() const;
    void unsetprimaryKeyOrUniqueIndex();
    void setPrimaryKeyOrUniqueIndex(const std::string& value);

    /// <summary>
    /// 列映射后的名称
    /// </summary>

    std::string getColumnMappedName() const;
    bool columnMappedNameIsSet() const;
    void unsetcolumnMappedName();
    void setColumnMappedName(const std::string& value);

    /// <summary>
    /// 该列是否过滤
    /// </summary>

    bool isIsFiltered() const;
    bool isFilteredIsSet() const;
    void unsetisFiltered();
    void setIsFiltered(bool value);

    /// <summary>
    /// 该列是否partitionKey
    /// </summary>

    bool isIsPartitionKey() const;
    bool isPartitionKeyIsSet() const;
    void unsetisPartitionKey();
    void setIsPartitionKey(bool value);


protected:
    std::string columnName_;
    bool columnNameIsSet_;
    std::string columnType_;
    bool columnTypeIsSet_;
    std::string primaryKeyOrUniqueIndex_;
    bool primaryKeyOrUniqueIndexIsSet_;
    std::string columnMappedName_;
    bool columnMappedNameIsSet_;
    bool isFiltered_;
    bool isFilteredIsSet_;
    bool isPartitionKey_;
    bool isPartitionKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryColumnInfo_H_
