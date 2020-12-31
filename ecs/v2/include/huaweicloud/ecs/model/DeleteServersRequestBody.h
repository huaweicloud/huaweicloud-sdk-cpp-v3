
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServersRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServersRequestBody_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/ServerId.h"
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  DeleteServersRequestBody
    : public ModelBase
{
public:
    DeleteServersRequestBody();
    virtual ~DeleteServersRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteServersRequestBody members

    /// <summary>
    /// 配置删除云服务器是否删除云服务器绑定的弹性IP。如果选择不删除，则系统仅做解绑定操作，保留弹性IP资源。 取值为true或false，默认为false。   - true：删除云服务器时会同时删除绑定在云服务器上的弹性IP。  - false：删除云服务器时，仅解绑定在云服务器上的弹性IP，不删除弹性IP
    /// </summary>

    bool isDeletePublicip() const;
    bool deletePublicipIsSet() const;
    void unsetdeletePublicip();
    void setDeletePublicip(bool value);

    /// <summary>
    /// 配置删除云服务器是否删除云服务器对应的数据盘，如果选择不删除，则系统仅做解绑定操作，保留云磁盘资源。 取值为false或true，默认为false。  - true：删除云服务器时会同时删除挂载在云服务器上的数据盘。 - false：删除云服务器时，仅卸载云服务器上挂载的数据盘，不删除该数据盘。
    /// </summary>

    bool isDeleteVolume() const;
    bool deleteVolumeIsSet() const;
    void unsetdeleteVolume();
    void setDeleteVolume(bool value);

    /// <summary>
    /// 所需要删除的云服务器列表。
    /// </summary>

    std::vector<ServerId>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerId>& value);


protected:
    bool deletePublicip_;
    bool deletePublicipIsSet_;
    bool deleteVolume_;
    bool deleteVolumeIsSet_;
    std::vector<ServerId> servers_;
    bool serversIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_DeleteServersRequestBody_H_
