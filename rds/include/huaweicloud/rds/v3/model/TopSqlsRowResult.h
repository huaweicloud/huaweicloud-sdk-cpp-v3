
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSqlsRowResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSqlsRowResult_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TopSqlsRowResult
    : public ModelBase
{
public:
    TopSqlsRowResult();
    virtual ~TopSqlsRowResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopSqlsRowResult members

    /// <summary>
    /// 对查询计算的二进制哈希值，用于标识具有类似逻辑的查询。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据类型。 取值范围： AvgReturnRows 平均返回行 TotalReturnRows 总返回行
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 行数。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSqlsRowResult_H_
