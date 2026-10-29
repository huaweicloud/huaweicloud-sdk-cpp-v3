
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_OpResourceResp_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_OpResourceResp_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/OpResourceExtraInfoResp.h>
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
class HUAWEICLOUD_CBR_V1_EXPORT  OpResourceResp
    : public ModelBase
{
public:
    OpResourceResp();
    virtual ~OpResourceResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpResourceResp members

    /// <summary>
    /// 
    /// </summary>

    OpResourceExtraInfoResp getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const OpResourceExtraInfoResp& value);

    /// <summary>
    /// **参数解释：** 待备份资源ID，用于标识需要备份的资源。 [获取方法请参见\&quot;[查询存储库绑定资源信息](https://support.huaweicloud.com/api-cbr/ShowVault.html)\&quot;，\&quot;[查询资源可保护性](https://support.huaweicloud.com/api-cbr/ShowProtectable.html)\&quot;。](tag:hws) [获取方法请参见\&quot;[查询存储库绑定资源信息](https://support.huaweicloud.com/intl/zh-cn/api-cbr/ShowVault.html)\&quot;，\&quot;[查询资源可保护性](https://support.huaweicloud.com/intl/zh-cn/api-cbr/ShowProtectable.html)\&quot;。](tag:hws_hk) **取值范围：** 格式为UUID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 待备份资源名称，用于标识待备份的资源名称。 **取值范围：** 长度为0~255个字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 待备份资源的类型，用于指定待备份的资源类型，不同类型对应不同的云服务资源。 **取值范围：** [OS::Nova::Server：云服务器； OS::Cinder::Volume：云硬盘；OS::Ironic::BareMetalServer：裸金属服务器；OS::Sfs::Turbo：SFS Turbo文件系统；OS::Workspace::DesktopV2：云桌面。](tag:hws,hws_hk) [OS::Nova::Server：云服务器；OS::Cinder::Volume：云硬盘；OS::Sfs::Turbo：SFS Turbo文件系统。](tag:hk_g42,sbc,dt) [OS::Nova::Server：云服务器；OS::Cinder::Volume：云硬盘；OS::Ironic::BareMetalServer：裸金属服务器；OS::Sfs::Turbo：SFS Turbo文件系统。](tag:fcs_vm,ctc,ocb,tm) [OS::Nova::Server：云服务器；OS::Cinder::Volume：云硬盘。](tag:tlf,cmcc,hcso_dt) [OS::Nova::Server：云服务器；OS::Cinder::Volume：云硬盘；OS::Sfs::Turbo：SFS Turbo文件系统；OS::Workspace::DesktopV2：云桌面。](tag:g42)
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    OpResourceExtraInfoResp extraInfo_;
    bool extraInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_OpResourceResp_H_
