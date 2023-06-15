
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointResourceResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointResourceResp_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointResourceResp
    : public ModelBase
{
public:
    CheckpointResourceResp();
    virtual ~CheckpointResourceResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CheckpointResourceResp members

    /// <summary>
    /// 资源附加信息
    /// </summary>

    std::string getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const std::string& value);

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
    /// 保护状态。available（可用），error（错误），protecting（备份中），restoring（恢复中），removing（删除中）。
    /// </summary>

    std::string getProtectStatus() const;
    bool protectStatusIsSet() const;
    void unsetprotectStatus();
    void setProtectStatus(const std::string& value);

    /// <summary>
    /// 资源已分配容量,单位为GB
    /// </summary>

    std::string getResourceSize() const;
    bool resourceSizeIsSet() const;
    void unsetresourceSize();
    void setResourceSize(const std::string& value);

    /// <summary>
    /// 待备份资源的类型: OS::Nova::Server, OS::Cinder::Volume, OS::Ironic::BareMetalServer, OS::Native::Server, OS::Sfs::Turbo, OS::Workspace::DesktopV2
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 副本大小
    /// </summary>

    std::string getBackupSize() const;
    bool backupSizeIsSet() const;
    void unsetbackupSize();
    void setBackupSize(const std::string& value);

    /// <summary>
    /// 副本数量
    /// </summary>

    std::string getBackupCount() const;
    bool backupCountIsSet() const;
    void unsetbackupCount();
    void setBackupCount(const std::string& value);


protected:
    std::string extraInfo_;
    bool extraInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string protectStatus_;
    bool protectStatusIsSet_;
    std::string resourceSize_;
    bool resourceSizeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string backupSize_;
    bool backupSizeIsSet_;
    std::string backupCount_;
    bool backupCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointResourceResp_H_
