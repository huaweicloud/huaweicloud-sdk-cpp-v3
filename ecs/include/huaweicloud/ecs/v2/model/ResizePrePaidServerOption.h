
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizePrePaidServerOption_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizePrePaidServerOption_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ResizeServerExtendParam.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ResizePrePaidServerOption
    : public ModelBase
{
public:
    ResizePrePaidServerOption();
    virtual ~ResizePrePaidServerOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResizePrePaidServerOption members

    /// <summary>
    /// 变更后的云服务器规格ID。  可通过[查询云服务器规格变更支持列表](https://support.huaweicloud.com/api-ecs/ecs_02_0402.html)接口查询允许变更的规格列表。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 新专属主机ID（仅适用于专属主机上的弹性云服务器）。
    /// </summary>

    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResizeServerExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const ResizeServerExtendParam& value);

    /// <summary>
    /// 取值为withStopServer ，支持开机状态下变更规格。  mode取值为withStopServer时，对开机状态的云服务器执行变更规格操作，系统自动对云服务器先执行关机，再变更规格，变更成功后再执行开机。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;
    ResizeServerExtendParam extendparam_;
    bool extendparamIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ResizePrePaidServerOption_H_
