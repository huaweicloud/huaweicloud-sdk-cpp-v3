
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceResp_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/ResourceExtraInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源详情
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ResourceResp
    : public ModelBase
{
public:
    ResourceResp();
    virtual ~ResourceResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceResp members

    /// <summary>
    /// 
    /// </summary>

    ResourceExtraInfo getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const ResourceExtraInfo& value);

    /// <summary>
    /// 待备份资源id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 待备份资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 保护状态
    /// </summary>

    std::string getProtectStatus() const;
    bool protectStatusIsSet() const;
    void unsetprotectStatus();
    void setProtectStatus(const std::string& value);

    /// <summary>
    /// 资源已分配容量,单位为GB
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 待备份资源的类型, 云服务器: OS::Nova::Server, 云硬盘: OS::Cinder::Volume, 裸金属服务器: OS::Ironic::BareMetalServer, 线下本地服务器: OS::Native::Server, 弹性文件系统: OS::Sfs::Turbo, 云桌面：OS::Workspace::DesktopV2
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 副本大小
    /// </summary>

    int32_t getBackupSize() const;
    bool backupSizeIsSet() const;
    void unsetbackupSize();
    void setBackupSize(int32_t value);

    /// <summary>
    /// 副本数量
    /// </summary>

    int32_t getBackupCount() const;
    bool backupCountIsSet() const;
    void unsetbackupCount();
    void setBackupCount(int32_t value);

    /// <summary>
    /// 是否跟随存储库自动备份策略进行备份
    /// </summary>

    bool isAutoProtect() const;
    bool autoProtectIsSet() const;
    void unsetautoProtect();
    void setAutoProtect(bool value);


protected:
    ResourceExtraInfo extraInfo_;
    bool extraInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string protectStatus_;
    bool protectStatusIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t backupSize_;
    bool backupSizeIsSet_;
    int32_t backupCount_;
    bool backupCountIsSet_;
    bool autoProtect_;
    bool autoProtectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceResp_H_
