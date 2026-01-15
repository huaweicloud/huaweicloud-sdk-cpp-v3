
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnInfo_H_


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
/// 列信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ColumnInfo
    : public ModelBase
{
public:
    ColumnInfo();
    virtual ~ColumnInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ColumnInfo members

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
    /// 列的键类型。
    /// </summary>

    std::string getKeyType() const;
    bool keyTypeIsSet() const;
    void unsetkeyType();
    void setKeyType(const std::string& value);

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

    bool isStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(bool value);

    /// <summary>
    /// 该列是否partitionKey
    /// </summary>

    bool isPartition() const;
    bool partitionIsSet() const;
    void unsetpartition();
    void setPartition(bool value);


protected:
    std::string columnName_;
    bool columnNameIsSet_;
    std::string columnType_;
    bool columnTypeIsSet_;
    std::string keyType_;
    bool keyTypeIsSet_;
    std::string columnMappedName_;
    bool columnMappedNameIsSet_;
    bool status_;
    bool statusIsSet_;
    bool partition_;
    bool partitionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ColumnInfo_H_
