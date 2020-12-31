
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersOption_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/NovaServerBlockDeviceMapping.h"
#include "huaweicloud/ecs/model/NovaServerSecurityGroup.h"
#include <string>
#include "huaweicloud/ecs/model/NovaServerNetwork.h"
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
///  弹性云服务器信息
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  NovaCreateServersOption
    : public ModelBase
{
public:
    NovaCreateServersOption();
    virtual ~NovaCreateServersOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaCreateServersOption members

    /// <summary>
    /// 镜像ID或者镜像资源的URL。  - 镜像ID示例：3b8d6fef-af77-42ab-b8b7-5a7f0f0af8f2 - 镜像URL示例：http://glance.openstack.example.com/images/3b8d6fef-af77-42ab-b8b7-5a7f0f0af8f2 - 指定卷作为系统卷创弹性云服务器时，不需填写该参数；非卷创建弹性云服务器时需填写有效的UUID参数，否则API将返回400错误。  &gt; 说明： &gt; - 对于部分规格的弹性云服务器，不能支持公有云平台提供的所有公共镜像。具体规格的镜像支持列表，请登录管理控制台，以“创建弹性云服务器”页面系统自动过滤的镜像信息为准，并在镜像服务页面查询镜像ID。 &gt; - 如果创建失败，请尝试修改参数配置。
    /// </summary>

    std::string getImageRef() const;
    bool imageRefIsSet() const;
    void unsetimageRef();
    void setImageRef(const std::string& value);

    /// <summary>
    /// 规格ID或URL。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 弹性云服务器名称，长度大于0小于256字节。  &gt; 说明： &gt;  &gt; 云服务器内部主机名(hostname)命名规则遵循 [RFC 952](https://tools.ietf.org/html/rfc952)和[RFC 1123](https://tools.ietf.org/html/rfc1123)命名规范，建议使用a-zA-z或0-9以及中划线\&quot;-\&quot;组成的名称命名，\&quot;_\&quot;将在弹性云服务器内部默认转化为\&quot;-\&quot;。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户自定义字段键值对。  &gt; - key的长度大于0小于256字节 &gt; - value的长度大于等于0小于256字节   系统预留字段  1. admin_pass：弹性云服务器密码        Windows弹性云服务器Administrator用户的密码。     &gt; 说明：     &gt; 创建密码方式鉴权的Windows弹性云服务器时为必选字段。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 如果需要使用密码方式登录云服务器，可使用adminPass字段指定云服务器管理员帐户初始登录密码。其中，Linux管理员帐户为root，Windows管理员帐户为Administrator。
    /// </summary>

    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);

    /// <summary>
    /// 扩展属性，指定弹性云服务器存储设备的v2接口。是存储资源的新版本接口，指定卷场景不能批创弹性云服务器。  裸金属服务器场景不支持。
    /// </summary>

    std::vector<NovaServerBlockDeviceMapping>& getBlockDeviceMappingV2();
    bool blockDeviceMappingV2IsSet() const;
    void unsetblockDeviceMappingV2();
    void setBlockDeviceMappingV2(const std::vector<NovaServerBlockDeviceMapping>& value);

    /// <summary>
    /// 扩展属性，开启后在弹性云服务器创建时挂载config_drive向弹性云服务器内部传递信息。  当前不支持该功能。
    /// </summary>

    std::string getConfigDrive() const;
    bool configDriveIsSet() const;
    void unsetconfigDrive();
    void setConfigDrive(const std::string& value);

    /// <summary>
    /// 扩展属性，指定弹性云服务器的安全组，默认为default。  指定network创建弹性云服务器时该字段有效。对于已存在端口，安全组请求无效。
    /// </summary>

    std::vector<NovaServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<NovaServerSecurityGroup>& value);

    /// <summary>
    /// 扩展属性，指定弹性云服务器的网卡信息。有多个租户网络时必须指定。 
    /// </summary>

    std::vector<NovaServerNetwork>& getNetworks();
    bool networksIsSet() const;
    void unsetnetworks();
    void setNetworks(const std::vector<NovaServerNetwork>& value);

    /// <summary>
    /// 扩展属性，指定keypair的名称。
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 扩展属性，字符串长度小于65535，且必须是base64加密的。
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 扩展属性，指定弹性云服务器所在的AZ。  创建弹性云服务器时需要填入该参数。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 扩展属性，是否支持返回批量创建弹性云服务器的reservation_id。通过返回的reservation_id，可以过滤查询到本次创建的弹性云服务器。  - true，返回reservation_id。 - false，返回弹性云服务器信息。  &gt; 说明： &gt;  &gt; 批量创建弹性云服务器时，支持使用该字段。
    /// </summary>

    bool isReturnReservationId() const;
    bool returnReservationIdIsSet() const;
    void unsetreturnReservationId();
    void setReturnReservationId(bool value);

    /// <summary>
    /// 扩展属性，表示创建弹性云服务器最小数量。  默认值为1。  &gt; 说明： &gt;  &gt; 指定镜像创建弹性云服务器时，支持使用该字段。
    /// </summary>

    int32_t getMinCount() const;
    bool minCountIsSet() const;
    void unsetminCount();
    void setMinCount(int32_t value);

    /// <summary>
    /// 表示创建弹性云服务器最大数量。  默认值与min_count的取值一致。  约束：  参数max_count的取值必须大于参数min_count的取值。  当min_count、max_count同时设置时，创弹性云服务器的数量取决于服务器的资源情况。根据资源情况，在min_count至max_count的取值范围内创建最大数量的弹性云服务器。  - 说明： -  - 指定镜像创建弹性云服务器时，支持使用该字段。
    /// </summary>

    int32_t getMaxCount() const;
    bool maxCountIsSet() const;
    void unsetmaxCount();
    void setMaxCount(int32_t value);

    /// <summary>
    /// diskConfig的方式，取值为AUTO、MANUAL。  - MANUAL，镜像空间不会扩展。 - AUTO，系统盘镜像空间会自动扩展为与flavor大小一致。  当前不支持该功能。
    /// </summary>

    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);

    /// <summary>
    /// 扩展属性，表示弹性云服务器描述信息，默认为空字符串。  - 长度最多允许85个字符。 - 不能包含“&lt;” 和 “&gt;”等特殊符号。  &gt; 说明： &gt;  &gt; - V2接口不支持该字段。 &gt; - V2.1接口支持该字段，此时，需在请求Header中增加一组Key-Value值。其中，Key固定为“X-OpenStack-Nova-API-Version” ，Value为微版本号，当Value的值为2.19时，支持使用该字段。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string imageRef_;
    bool imageRefIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string adminPass_;
    bool adminPassIsSet_;
    std::vector<NovaServerBlockDeviceMapping> blockDeviceMappingV2_;
    bool blockDeviceMappingV2IsSet_;
    std::string configDrive_;
    bool configDriveIsSet_;
    std::vector<NovaServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<NovaServerNetwork> networks_;
    bool networksIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    bool returnReservationId_;
    bool returnReservationIdIsSet_;
    int32_t minCount_;
    bool minCountIsSet_;
    int32_t maxCount_;
    bool maxCountIsSet_;
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaCreateServersOption_H_
