
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitOption_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/ReinstallSeverMetadata.h"
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 重装操作系统body。
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  ReinstallServerWithCloudInitOption
    : public ModelBase
{
public:
    ReinstallServerWithCloudInitOption();
    virtual ~ReinstallServerWithCloudInitOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReinstallServerWithCloudInitOption members

    /// <summary>
    /// 云服务器管理员帐户的初始登录密码。 其中，Windows管理员帐户的用户名为Administrator。 建议密码复杂度如下：  - 长度为8-26位。 - 密码至少必须包含大写字母、小写字母、数字和特殊字符（!@$%^-_&#x3D;+[{}]:,./?）中的三种。   &gt; 说明：  - 对于Windows弹性云服务器，密码不能包含用户名或用户名的逆序，不能包含用户名中超过两个连续字符的部分。 - 对于Linux弹性云服务器也可使用user_data字段实现密码注入，此时adminpass字段无效。 - adminpass和keyname不能同时有值。 - adminpass和keyname如果同时为空，此时，metadata中的user_data属性必须有值。
    /// </summary>

    std::string getAdminpass() const;
    bool adminpassIsSet() const;
    void unsetadminpass();
    void setAdminpass(const std::string& value);

    /// <summary>
    /// 密钥名称。
    /// </summary>

    std::string getKeyname() const;
    bool keynameIsSet() const;
    void unsetkeyname();
    void setKeyname(const std::string& value);

    /// <summary>
    /// 用户ID。当传入keyname参数时，此参数为必选。
    /// </summary>

    std::string getUserid() const;
    bool useridIsSet() const;
    void unsetuserid();
    void setUserid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReinstallSeverMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ReinstallSeverMetadata& value);

    /// <summary>
    /// 取值为withStopServer ，支持开机状态下重装弹性云服务器。 mode取值为withStopServer时，对开机状态的弹性云服务器执行重装操作，系统自动对云服务器先执行关机，再重装操作系统。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string adminpass_;
    bool adminpassIsSet_;
    std::string keyname_;
    bool keynameIsSet_;
    std::string userid_;
    bool useridIsSet_;
    ReinstallSeverMetadata metadata_;
    bool metadataIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ReinstallServerWithCloudInitOption_H_
