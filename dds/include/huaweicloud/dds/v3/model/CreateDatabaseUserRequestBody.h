
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateDatabaseUserRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateDatabaseUserRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/RolesOption.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CreateDatabaseUserRequestBody
    : public ModelBase
{
public:
    CreateDatabaseUserRequestBody();
    virtual ~CreateDatabaseUserRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDatabaseUserRequestBody members

    /// <summary>
    /// 数据库用户名称。 - 长度为1~64位，可以包含大写字母（A~Z）、小写字母（a~z）、数字（0~9）、中划线、下划线和点。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 数据库用户密码。 - 长度为8~32位，必须是大写字母（A~Z）、小写字母（a~z）、数字（0~9）、特殊字符~!@#%^*-_&#x3D;+?的组合。 - 建议您输入高强度密码，以提高安全性，防止出现密码被暴力破解等安全风险。
    /// </summary>

    std::string getUserPwd() const;
    bool userPwdIsSet() const;
    void unsetuserPwd();
    void setUserPwd(const std::string& value);

    /// <summary>
    /// 新用户所在的数据库，默认为“admin”。 - 长度为1~64位，可以包含大写字母（A~Z）、小写字母（a~z）、数字（0~9）、下划线。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 新用户所拥有的角色。
    /// </summary>

    std::vector<RolesOption>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<RolesOption>& value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::string userPwd_;
    bool userPwdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::vector<RolesOption> roles_;
    bool rolesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateDatabaseUserRequestBody_H_
