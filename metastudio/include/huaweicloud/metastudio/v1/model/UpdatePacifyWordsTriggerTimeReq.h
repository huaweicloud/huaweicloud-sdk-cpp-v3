
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsTriggerTimeReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsTriggerTimeReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改安抚话术等待触发时长。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdatePacifyWordsTriggerTimeReq
    : public ModelBase
{
public:
    UpdatePacifyWordsTriggerTimeReq();
    virtual ~UpdatePacifyWordsTriggerTimeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePacifyWordsTriggerTimeReq members

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 安抚话术等待触发时长，单位毫秒
    /// </summary>

    int32_t getTriggerTime() const;
    bool triggerTimeIsSet() const;
    void unsettriggerTime();
    void setTriggerTime(int32_t value);


protected:
    std::string robotId_;
    bool robotIdIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    int32_t triggerTime_;
    bool triggerTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsTriggerTimeReq_H_
