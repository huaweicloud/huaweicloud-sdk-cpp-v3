
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSqlLimitControlReqV3_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSqlLimitControlReqV3_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  SwitchSqlLimitControlReqV3
    : public ModelBase
{
public:
    SwitchSqlLimitControlReqV3();
    virtual ~SwitchSqlLimitControlReqV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchSqlLimitControlReqV3 members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// SQL限流ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// SQL限流动作标志。 取值为“open”：表示开启当前SQL限流。 取值为“close”：表示关闭当前SQL限流。 取值为“disable_all”：表示禁用所有SQL限流。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchSqlLimitControlReqV3_H_
