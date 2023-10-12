
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MixInfo_layout_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MixInfo_layout_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/mpc/v1/model/PaneSetting.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  MixInfo_layout
    : public ModelBase
{
public:
    MixInfo_layout();
    virtual ~MixInfo_layout();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MixInfo_layout members

    /// <summary>
    /// 原视频在合成视频中的位置布局配置
    /// </summary>

    std::vector<PaneSetting>& getPanes();
    bool panesIsSet() const;
    void unsetpanes();
    void setPanes(const std::vector<PaneSetting>& value);


protected:
    std::vector<PaneSetting> panes_;
    bool panesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MixInfo_layout_H_
