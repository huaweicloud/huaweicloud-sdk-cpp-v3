
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ControlDigitalHumanLiveReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ControlDigitalHumanLiveReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 控制命令。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ControlDigitalHumanLiveReq
    : public ModelBase
{
public:
    ControlDigitalHumanLiveReq();
    virtual ~ControlDigitalHumanLiveReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ControlDigitalHumanLiveReq members

    /// <summary>
    /// 命令名称。 - BODY_POS_RESET：视觉驱动复位 - HIPS_POS_ADJUST：模型位移调整 - EYE_POS：眼神锁定/解锁 - SKELETON_ROTATION_ADJUST：骨骼旋转 - LOCK_SKELETONS：骨骼锁定 - UNLOCK_SKELETONS：骨骼解锁
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// 命令参数。
    /// </summary>

    Object getParams() const;
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const Object& value);


protected:
    std::string command_;
    bool commandIsSet_;
    Object params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ControlDigitalHumanLiveReq_H_
