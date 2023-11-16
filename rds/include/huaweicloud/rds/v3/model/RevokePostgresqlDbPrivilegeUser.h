
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokePostgresqlDbPrivilegeUser_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokePostgresqlDbPrivilegeUser_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  RevokePostgresqlDbPrivilegeUser
    : public ModelBase
{
public:
    RevokePostgresqlDbPrivilegeUser();
    virtual ~RevokePostgresqlDbPrivilegeUser();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RevokePostgresqlDbPrivilegeUser members

    /// <summary>
    /// 数据库账号名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库下模式名称
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RevokePostgresqlDbPrivilegeUser_H_
