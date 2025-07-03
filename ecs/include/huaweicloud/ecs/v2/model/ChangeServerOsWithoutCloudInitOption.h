
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/ChangeSeversOsMetadataWithoutCloudInitOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ChangeServerOsWithoutCloudInitOption
    : public ModelBase
{
public:
    ChangeServerOsWithoutCloudInitOption();
    virtual ~ChangeServerOsWithoutCloudInitOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeServerOsWithoutCloudInitOption members

    /// <summary>
    /// 云服务器管理员帐户的初始登录密码。  其中，Windows管理员帐户的用户名为Administrator。  建议密码复杂度如下：  - 长度为8-26位。 - 密码至少必须包含大写字母、小写字母、数字和特殊字符（!@$%^-_&#x3D;+[{}]:,./?）中的三种。  &gt; 说明： &gt;  - 对于Windows弹性云服务器，密码不能包含用户名或用户名的逆序，不能包含用户名中超过两个连续字符的部分。 - adminpass和keyname不能同时为空。
    /// </summary>

    std::string getAdminpass() const;
    bool adminpassIsSet() const;
    void unsetadminpass();
    void setAdminpass(const std::string& value);

    /// <summary>
    /// 密钥名称。  密钥可以通过密钥创建接口进行创建（请参见[创建和导入SSH密钥](https://support.huaweicloud.com/api-dew/CreateKeypair.html)），或使用SSH密钥查询接口查询已有的密钥（请参见[查询SSH密钥列表](https://support.huaweicloud.com/api-dew/ListKeypairs.html) ）。
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
    /// 切换系统所使用的新镜像的ID，格式为UUID。  镜像的ID可以从控制台或者参考[《镜像服务API参考》](https://support.huaweicloud.com/api-ims/ims_03_0702.html)的“查询镜像列表”的章节获取。
    /// </summary>

    std::string getImageid() const;
    bool imageidIsSet() const;
    void unsetimageid();
    void setImageid(const std::string& value);

    /// <summary>
    /// 取值为withStopServer ，支持开机状态下切换弹性云服务器操作系统。  mode取值为withStopServer时，对开机状态的  弹性云服务器执行切换操作系统操作，系统自动对云服务器先执行关机，再切换操作系统。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChangeSeversOsMetadataWithoutCloudInitOption getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const ChangeSeversOsMetadataWithoutCloudInitOption& value);

    /// <summary>
    /// 下单订购后，是否自动从客户的账户中支付，而不需要客户手动去进行支付。
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);


protected:
    std::string adminpass_;
    bool adminpassIsSet_;
    std::string keyname_;
    bool keynameIsSet_;
    std::string userid_;
    bool useridIsSet_;
    std::string imageid_;
    bool imageidIsSet_;
    std::string mode_;
    bool modeIsSet_;
    ChangeSeversOsMetadataWithoutCloudInitOption metadata_;
    bool metadataIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ChangeServerOsWithoutCloudInitOption_H_
