
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRemoteDbRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRemoteDbRequestBody_H_


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
/// 查询远程SQL Server数据库请求参数。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListRemoteDbRequestBody
    : public ModelBase
{
public:
    ListRemoteDbRequestBody();
    virtual ~ListRemoteDbRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRemoteDbRequestBody members

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

    std::string getServerPort() const;
    bool serverPortIsSet() const;
    void unsetserverPort();
    void setServerPort(const std::string& value);

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

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。默认为10，不能为负数，最小值为1，最大值为100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string serverIp_;
    bool serverIpIsSet_;
    std::string serverPort_;
    bool serverPortIsSet_;
    std::string loginUserName_;
    bool loginUserNameIsSet_;
    std::string loginUserPassword_;
    bool loginUserPasswordIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListRemoteDbRequestBody_H_
