
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSqlsTimeResult_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSqlsTimeResult_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  TopSqlsTimeResult
    : public ModelBase
{
public:
    TopSqlsTimeResult();
    virtual ~TopSqlsTimeResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopSqlsTimeResult members

    /// <summary>
    /// 对查询计算的二进制哈希值，用于标识具有类似逻辑的查询。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据类型。取值范围： AvgWorkerTime 平均CPU开销 AvgDuration 平均执行耗时 TotalWorkerTime 总CPU开销 TotalDuration 总执行耗时
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 耗时时间，单位ms。
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TopSqlsTimeResult_H_
