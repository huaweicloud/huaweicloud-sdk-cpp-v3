
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceCreate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceCreate_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ResourceCreate
    : public ModelBase
{
public:
    ResourceCreate();
    virtual ~ResourceCreate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceCreate members

    /// <summary>
    /// 
    /// </summary>

    ResourceExtraInfo getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const ResourceExtraInfo& value);

    /// <summary>
    /// **参数解释：** 待备份资源ID，获取方法请参见[查询存储库绑定资源信息](ShowVault.xml)，[查询资源可保护性](ShowProtectable.xml) **约束限制：** 需要该资源暂未绑定到存储库中，且属于可备份的状态 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 待备份资源的类型, 云服务器: OS::Nova::Server, 云硬盘: OS::Cinder::Volume, 裸金属服务器: OS::Ironic::BareMetalServer, 线下本地服务器: OS::Native::Server, 弹性文件系统: OS::Sfs::Turbo, 云桌面：OS::Workspace::DesktopV2
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    ResourceExtraInfo extraInfo_;
    bool extraInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ResourceCreate_H_
