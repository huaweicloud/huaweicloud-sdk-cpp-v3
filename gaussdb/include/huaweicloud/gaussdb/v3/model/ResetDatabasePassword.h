
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetDatabasePassword_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetDatabasePassword_H_


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
/// 数据库用户名密码信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ResetDatabasePassword
    : public ModelBase
{
public:
    ResetDatabasePassword();
    virtual ~ResetDatabasePassword();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetDatabasePassword members

    /// <summary>
    /// 数据库用户名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 主机地址。
    /// </summary>

    std::string getHost() const;
    bool hostIsSet() const;
    void unsethost();
    void setHost(const std::string& value);

    /// <summary>
    /// 数据库用户密码，非空，至少包含以下字符中的三种：大写字母、小写字母、数字和特殊符号~!@#$%^*-_&#x3D;+?,()&amp;组成，长度8~32个字符。建议您输入高强度密码，以提高安全性，防止出现密码被暴力破解等安全风险
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string host_;
    bool hostIsSet_;
    std::string password_;
    bool passwordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ResetDatabasePassword_H_
