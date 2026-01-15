
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbRequest_databases_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbRequest_databases_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  RdsDbRequest_databases
    : public ModelBase
{
public:
    RdsDbRequest_databases();
    virtual ~RdsDbRequest_databases();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RdsDbRequest_databases members

    /// <summary>
    /// rds数据库id，可在查询rds数据库列表接口的ID字段获取。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库类型 - MYSQL：MySQL - ORACLE：Oracle - POSTGRESQL：PostgreSQL - SQLSERVER：SQL Server - DAMENG：DAMENG - TAURUS：Taurus DB - DWS：GaussDB(DWS) - KINGBASE：Kingbase - MARIADB：MariaDB - GAUSSDBOPENGAUSS：GaussDB/openGauss
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_RdsDbRequest_databases_H_
