
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UserForCreation_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UserForCreation_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DatabaseWithPrivilegeObject.h>
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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UserForCreation
    : public ModelBase
{
public:
    UserForCreation();
    virtual ~UserForCreation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserForCreation members

    /// <summary>
    /// 数据库用户名称。 数据库帐号名称在1到32个字符之间，由字母、数字、中划线或下划线组成，不能包含其他特殊字符。 - 若数据库版本为MySQL5.6，帐号长度为1～16个字符。 - 若数据库版本为MySQL5.7和8.0，帐号长度为1～32个字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库帐号密码。  取值范围：  非空，由大小写字母、数字和特殊符号~!@#$%^*-_&#x3D;+?,()&amp;组成，长度8~32个字符，不能和数据库帐号“name”或“name”的逆序相同。  建议您输入高强度密码，以提高安全性，防止出现密码被暴力破解等安全风险。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 数据库用户备注。 取值范围：长度1~512个字符。目前仅支持MySQL 8.0.25及以上版本。
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 是否创建高权限用户。 • 默认为false，暂不支持设置为true
    /// </summary>

    bool isIsPrivilege() const;
    bool isPrivilegeIsSet() const;
    void unsetisPrivilege();
    void setIsPrivilege(bool value);

    /// <summary>
    /// 授权用户登录主机IP列表 • 若IP地址为%，则表示允许所有地址访问MySQL实例。 • 若IP地址为“10.10.10.%”，则表示10.10.10.X的IP地址都可以访问该MySQL实例。 • 支持添加多个IP地址。
    /// </summary>

    std::vector<std::string>& getHosts();
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::vector<std::string>& value);

    /// <summary>
    /// 授权用户数据库权限
    /// </summary>

    std::vector<DatabaseWithPrivilegeObject>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<DatabaseWithPrivilegeObject>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string comment_;
    bool commentIsSet_;
    bool isPrivilege_;
    bool isPrivilegeIsSet_;
    std::vector<std::string> hosts_;
    bool hostsIsSet_;
    std::vector<DatabaseWithPrivilegeObject> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UserForCreation_H_
