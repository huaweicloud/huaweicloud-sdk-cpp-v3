
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerResult_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerResult_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/Link.h>
#include <huaweicloud/ecs/v2/model/SimpleFlavor.h>
#include <string>
#include <map>
#include <huaweicloud/ecs/v2/model/UpdateServerAddress.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务器详情。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerResult
    : public ModelBase
{
public:
    UpdateServerResult();
    virtual ~UpdateServerResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateServerResult members

    /// <summary>
    /// 项目ID。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 镜像ID。
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getAccessIPv4() const;
    bool accessIPv4IsSet() const;
    void unsetaccessIPv4();
    void setAccessIPv4(const std::string& value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    std::string getAccessIPv6() const;
    bool accessIPv6IsSet() const;
    void unsetaccessIPv6();
    void setAccessIPv6(const std::string& value);

    /// <summary>
    /// 云服务器元数据。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 弹性云服务器的网络属性。
    /// </summary>

    std::map<std::string, std::vector<UpdateServerAddress>>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::map<std::string, std::vector<UpdateServerAddress>>& value);

    /// <summary>
    /// 弹性云服务器创建时间。  时间格式例如：2019-05-22T03:19:19Z
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 弹性云服务器所在主机的主机ID。
    /// </summary>

    std::string getHostId() const;
    bool hostIdIsSet() const;
    void unsethostId();
    void setHostId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SimpleFlavor getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const SimpleFlavor& value);

    /// <summary>
    /// 扩展属性， diskConfig的类型。  - MANUAL，镜像空间不会扩展。 - AUTO，系统盘镜像空间会自动扩展为与flavor大小一致。
    /// </summary>

    std::string getOSDCFdiskConfig() const;
    bool oSDCFdiskConfigIsSet() const;
    void unsetoSDCFdiskConfig();
    void setOSDCFdiskConfig(const std::string& value);

    /// <summary>
    /// 创建弹性云服务器的用户ID，格式为UUID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 弹性云服务器名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 弹性云服务器进度。
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 云服务器相关标记快捷链接信息。
    /// </summary>

    std::vector<Link>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Link>& value);

    /// <summary>
    /// 弹性云服务器ID，格式为UUID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 弹性云服务器更新时间。  时间格式例如：2019-05-22T03:30:52Z
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 弹性云服务器是否为锁定状态。  - true：锁定 - false：未锁定
    /// </summary>

    bool isLocked() const;
    bool lockedIsSet() const;
    void unsetlocked();
    void setLocked(bool value);

    /// <summary>
    /// 弹性云服务器的描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 云服务器的标签列表。  微版本2.26后支持，如果不使用微版本查询，响应中无tags字段。  系统近期对标签功能进行了升级，升级后，返回的tag值遵循如下规则：  - key与value使用“&#x3D;”连接，如“key&#x3D;value”。 - 如果value为空字符串，则仅返回key。 - key与value使用“&#x3D;”连接，如“key&#x3D;value”。 - 如果value为空字符串，则仅返回key。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 弹性云服务器状态。  取值范围：  ACTIVE、BUILD、DELETED、ERROR、HARD_REBOOT、MIGRATING、PAUSED、REBOOT、REBUILD、RESIZE、REVERT_RESIZE、SHUTOFF、SHELVED、SHELVED_OFFLOADED、SOFT_DELETED、SUSPENDED、VERIFY_RESIZE  弹性云服务器状态说明请参考[云服务器状态](https://support.huaweicloud.com/api-ecs/ecs_08_0002.html)
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 弹性云服务器的主机名。
    /// </summary>

    std::string getOSEXTSRVATTRhostname() const;
    bool oSEXTSRVATTRhostnameIsSet() const;
    void unsetoSEXTSRVATTRhostname();
    void setOSEXTSRVATTRhostname(const std::string& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string image_;
    bool imageIsSet_;
    std::string accessIPv4_;
    bool accessIPv4IsSet_;
    std::string accessIPv6_;
    bool accessIPv6IsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::map<std::string, std::vector<UpdateServerAddress>> addresses_;
    bool addressesIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string hostId_;
    bool hostIdIsSet_;
    SimpleFlavor flavor_;
    bool flavorIsSet_;
    std::string oSDCFdiskConfig_;
    bool oSDCFdiskConfigIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::vector<Link> links_;
    bool linksIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    bool locked_;
    bool lockedIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string oSEXTSRVATTRhostname_;
    bool oSEXTSRVATTRhostnameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerResult_H_
