
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseDatabaseUserPWinfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseDatabaseUserPWinfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改数据库账号密码。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ClickHouseDatabaseUserPWinfo
    : public ModelBase
{
public:
    ClickHouseDatabaseUserPWinfo();
    virtual ~ClickHouseDatabaseUserPWinfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClickHouseDatabaseUserPWinfo members

    /// <summary>
    /// 数据库账号名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 数据库账号密码。 - 8-32个字符 - 至少包含以下字符中的三种：大写字母、小写字母、数字和特殊字符~！@#%^*-_&#x3D;+?, - 不能与用户名或倒序的用户名相同
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::string password_;
    bool passwordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ClickHouseDatabaseUserPWinfo_H_
