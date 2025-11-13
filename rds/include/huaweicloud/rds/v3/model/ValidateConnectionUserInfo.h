
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ValidateConnectionUserInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ValidateConnectionUserInfo_H_


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
/// 连接测试用户登录信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ValidateConnectionUserInfo
    : public ModelBase
{
public:
    ValidateConnectionUserInfo();
    virtual ~ValidateConnectionUserInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ValidateConnectionUserInfo members

    /// <summary>
    /// 服务器ip。
    /// </summary>

    std::string getServerIp() const;
    bool serverIpIsSet() const;
    void unsetserverIp();
    void setServerIp(const std::string& value);

    /// <summary>
    /// 端口号。
    /// </summary>

    int32_t getServerPort() const;
    bool serverPortIsSet() const;
    void unsetserverPort();
    void setServerPort(int32_t value);

    /// <summary>
    /// 登录名。
    /// </summary>

    std::string getLoginUserName() const;
    bool loginUserNameIsSet() const;
    void unsetloginUserName();
    void setLoginUserName(const std::string& value);

    /// <summary>
    /// 登录密码。要求密码长度在5~64位之间。
    /// </summary>

    std::string getLoginUserPassword() const;
    bool loginUserPasswordIsSet() const;
    void unsetloginUserPassword();
    void setLoginUserPassword(const std::string& value);


protected:
    std::string serverIp_;
    bool serverIpIsSet_;
    int32_t serverPort_;
    bool serverPortIsSet_;
    std::string loginUserName_;
    bool loginUserNameIsSet_;
    std::string loginUserPassword_;
    bool loginUserPasswordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ValidateConnectionUserInfo_H_
