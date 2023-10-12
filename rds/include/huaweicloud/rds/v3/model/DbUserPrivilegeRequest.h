
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DbUserPrivilegeRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DbUserPrivilegeRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 入参对象
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DbUserPrivilegeRequest
    : public ModelBase
{
public:
    DbUserPrivilegeRequest();
    virtual ~DbUserPrivilegeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DbUserPrivilegeRequest members

    /// <summary>
    /// 账号，数据库相关联的帐号
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 授权SQL类型,枚举： 1、ROLE(支持对指定用户设置以下权限) 2、RECYCLING_ROLE(支持对指定用户回收以下权限) 3、SYSTEM_ROLE(支持对指定用户授予以下系统角色) 4、RECYCLING_SYSTEM_ROLE(支持对指定用户回收以下系统角色)
    /// </summary>

    std::string getAuthorizationType() const;
    bool authorizationTypeIsSet() const;
    void unsetauthorizationType();
    void setAuthorizationType(const std::string& value);

    /// <summary>
    /// 支持用户设置的权限集合。 1、privilege_type为ROLE时需要使用,枚举： CREATEDB CREATEROLE LOGIN REPLICATION 2、privilege_type为RECYCLING_ROLE时需要使用,枚举： NOCREATEDB NOCREATEROLE NOLOGIN NOREPLICATION 3、privilege_type为SYSTEM_ROLE /RECYCLING_ SYSTEM_ROLE时需要使用,枚举： pg_monitor pg_signal_backend root
    /// </summary>

    std::vector<std::string>& getPrivileges();
    bool privilegesIsSet() const;
    void unsetprivileges();
    void setPrivileges(const std::vector<std::string>& value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::string authorizationType_;
    bool authorizationTypeIsSet_;
    std::vector<std::string> privileges_;
    bool privilegesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DbUserPrivilegeRequest_H_
