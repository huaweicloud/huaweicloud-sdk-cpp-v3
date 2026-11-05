
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseExistingInstanceRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseExistingInstanceRequest_H_


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
/// 存量PG实例请求（manage_type&#x3D;existed_instance时必填）。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseExistingInstanceRequest
    : public ModelBase
{
public:
    SupabaseExistingInstanceRequest();
    virtual ~SupabaseExistingInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseExistingInstanceRequest members

    /// <summary>
    /// 数据库实例ID（必须为PostgreSQL实例）。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 对接的数据库用户名。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 对接的数据库密码。
    /// </summary>

    std::string getDatabasePwd() const;
    bool databasePwdIsSet() const;
    void unsetdatabasePwd();
    void setDatabasePwd(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string databasePwd_;
    bool databasePwdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseExistingInstanceRequest_H_
