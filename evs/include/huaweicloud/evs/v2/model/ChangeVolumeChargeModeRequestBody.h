
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ChangeVolumeChargeModeRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ChangeVolumeChargeModeRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/Bss_param2.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ChangeVolumeChargeModeRequestBody
    : public ModelBase
{
public:
    ChangeVolumeChargeModeRequestBody();
    virtual ~ChangeVolumeChargeModeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeVolumeChargeModeRequestBody members

    /// <summary>
    /// 要修改计费模式的云硬盘id列表，可以填写多个
    /// </summary>

    std::vector<std::string>& getVolumeIds();
    bool volumeIdsIsSet() const;
    void unsetvolumeIds();
    void setVolumeIds(const std::vector<std::string>& value);

    /// <summary>
    /// 云硬盘所挂载的虚拟机id, 如果volume_ids中没有多挂载的共享云硬盘，则此参数可无需填写。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Bss_param2 getBssParam() const;
    bool bssParamIsSet() const;
    void unsetbssParam();
    void setBssParam(const Bss_param2& value);


protected:
    std::vector<std::string> volumeIds_;
    bool volumeIdsIsSet_;
    std::string serverId_;
    bool serverIdIsSet_;
    Bss_param2 bssParam_;
    bool bssParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ChangeVolumeChargeModeRequestBody_H_
