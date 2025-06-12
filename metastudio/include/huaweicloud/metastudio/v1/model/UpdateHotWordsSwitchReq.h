
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotWordsSwitchReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotWordsSwitchReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改热词功能开关请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateHotWordsSwitchReq
    : public ModelBase
{
public:
    UpdateHotWordsSwitchReq();
    virtual ~UpdateHotWordsSwitchReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHotWordsSwitchReq members

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 热词功能开关。
    /// </summary>

    bool isEnableHotWords() const;
    bool enableHotWordsIsSet() const;
    void unsetenableHotWords();
    void setEnableHotWords(bool value);


protected:
    std::string robotId_;
    bool robotIdIsSet_;
    bool enableHotWords_;
    bool enableHotWordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotWordsSwitchReq_H_
