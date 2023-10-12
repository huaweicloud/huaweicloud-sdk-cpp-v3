
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_NotificationUsers_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_NotificationUsers_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 通知用户列表。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  NotificationUsers
    : public ModelBase
{
public:
    NotificationUsers();
    virtual ~NotificationUsers();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NotificationUsers members

    /// <summary>
    /// IAM用户组。
    /// </summary>

    std::string getUserGroup() const;
    bool userGroupIsSet() const;
    void unsetuserGroup();
    void setUserGroup(const std::string& value);

    /// <summary>
    /// IAM用户。
    /// </summary>

    std::vector<std::string>& getUserList();
    bool userListIsSet() const;
    void unsetuserList();
    void setUserList(const std::vector<std::string>& value);


protected:
    std::string userGroup_;
    bool userGroupIsSet_;
    std::vector<std::string> userList_;
    bool userListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_NotificationUsers_H_
