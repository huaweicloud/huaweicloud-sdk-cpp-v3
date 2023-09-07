
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_AddColumnInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_AddColumnInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  AddColumnInfo
    : public ModelBase
{
public:
    AddColumnInfo();
    virtual ~AddColumnInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddColumnInfo members

    /// <summary>
    /// 列类型
    /// </summary>

    std::string getColumnType() const;
    bool columnTypeIsSet() const;
    void unsetcolumnType();
    void setColumnType(const std::string& value);

    /// <summary>
    /// 列名称
    /// </summary>

    std::string getColumnName() const;
    bool columnNameIsSet() const;
    void unsetcolumnName();
    void setColumnName(const std::string& value);

    /// <summary>
    /// 列填充值
    /// </summary>

    std::string getColumnValue() const;
    bool columnValueIsSet() const;
    void unsetcolumnValue();
    void setColumnValue(const std::string& value);

    /// <summary>
    /// 填充列的数据类型
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);


protected:
    std::string columnType_;
    bool columnTypeIsSet_;
    std::string columnName_;
    bool columnNameIsSet_;
    std::string columnValue_;
    bool columnValueIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_AddColumnInfo_H_
