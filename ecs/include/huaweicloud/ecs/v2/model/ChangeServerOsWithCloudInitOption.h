
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitOption_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/ChangeSeversOsMetadata.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 重装操作系统body体。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerOsWithCloudInitOption
    : public ModelBase
{
public:
    ChangeServerOsWithCloudInitOption();
    virtual ~ChangeServerOsWithCloudInitOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChangeServerOsWithCloudInitOption members

    /// <summary>
    /// 云服务器管理员帐户的初始登录密码。  其中，Windows管理员帐户的用户名为Administrator。  建议密码复杂度如下：  - 长度为8-26位。 - 密码至少必须包含大写字母、小写字母、数字和特殊字符（!@$%^-_&#x3D;+[{}]:,./?）中的三种。  &gt; 说明： &gt;  - Windows云服务器的密码，不能包含用户名或用户名的逆序，不能包含用户名中超过两个连续字符的部分。 - 对于Linux弹性云服务器也可使用user_data字段实现密码注入，此时adminpass字段无效。 - adminpass和keyname不能同时有值。 - adminpass和keyname如果同时为空，此时，metadata中的user_data属性必须有值。 - 对于已安装Cloud-init的云服务器，使用adminpass字段切换操作系统时，系统如果提示您使用keypair方式切换操作系统，表示当前区域暂不支持使用密码方式。
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
    /// 用户ID。 说明 如果使用秘钥方式切换操作系统，则该字段为必选字段。
    /// </summary>

    std::string getUserid() const;
    bool useridIsSet() const;
    void unsetuserid();
    void setUserid(const std::string& value);

    /// <summary>
    /// 切换系统所使用的新镜像的ID，格式为UUID。
    /// </summary>

    std::string getImageid() const;
    bool imageidIsSet() const;
    void unsetimageid();
    void setImageid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangeSeversOsMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ChangeSeversOsMetadata& value);

    /// <summary>
    /// 取值为withStopServer ，支持开机状态下切换弹性云服务器操作系统。 mode取值为withStopServer时，对开机状态的弹性云服务器执行切换操作系统操作，系统自动对云服务器先执行关机，再切换操作系统。
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
    std::string imageid_;
    bool imageidIsSet_;
    ChangeSeversOsMetadata metadata_;
    bool metadataIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithCloudInitOption_H_
