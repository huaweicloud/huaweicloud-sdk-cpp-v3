
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableMetaInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableMetaInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TableMetaInfo
    : public ModelBase
{
public:
    TableMetaInfo();
    virtual ~TableMetaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TableMetaInfo members

    /// <summary>
    /// 列的数据类型
    /// </summary>

    std::string getColumnType() const;
    bool columnTypeIsSet() const;
    void unsetcolumnType();
    void setColumnType(const std::string& value);

    /// <summary>
    /// 额外的信息，例如是否是自动递增列
    /// </summary>

    std::string getExtra() const;
    bool extraIsSet() const;
    void unsetextra();
    void setExtra(const std::string& value);

    /// <summary>
    /// 是否允许为NULL
    /// </summary>

    std::string getIsNullable() const;
    bool isNullableIsSet() const;
    void unsetisNullable();
    void setIsNullable(const std::string& value);

    /// <summary>
    /// 列的默认值
    /// </summary>

    std::string getColumnDefault() const;
    bool columnDefaultIsSet() const;
    void unsetcolumnDefault();
    void setColumnDefault(const std::string& value);

    /// <summary>
    /// 是否是索引列
    /// </summary>

    std::string getColumnKey() const;
    bool columnKeyIsSet() const;
    void unsetcolumnKey();
    void setColumnKey(const std::string& value);

    /// <summary>
    /// 列名
    /// </summary>

    std::string getColumnName() const;
    bool columnNameIsSet() const;
    void unsetcolumnName();
    void setColumnName(const std::string& value);


protected:
    std::string columnType_;
    bool columnTypeIsSet_;
    std::string extra_;
    bool extraIsSet_;
    std::string isNullable_;
    bool isNullableIsSet_;
    std::string columnDefault_;
    bool columnDefaultIsSet_;
    std::string columnKey_;
    bool columnKeyIsSet_;
    std::string columnName_;
    bool columnNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TableMetaInfo_H_
