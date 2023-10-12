
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetDatabaseUserPrivilegeReqV3_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetDatabaseUserPrivilegeReqV3_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  SetDatabaseUserPrivilegeReqV3
    : public ModelBase
{
public:
    SetDatabaseUserPrivilegeReqV3();
    virtual ~SetDatabaseUserPrivilegeReqV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetDatabaseUserPrivilegeReqV3 members

    /// <summary>
    /// 是否设置所有用户。
    /// </summary>

    bool isAllUsers() const;
    bool allUsersIsSet() const;
    void unsetallUsers();
    void setAllUsers(bool value);

    /// <summary>
    /// 数据库用户名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 是否为只读权限。
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);


protected:
    bool allUsers_;
    bool allUsersIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    bool readonly_;
    bool readonlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetDatabaseUserPrivilegeReqV3_H_
