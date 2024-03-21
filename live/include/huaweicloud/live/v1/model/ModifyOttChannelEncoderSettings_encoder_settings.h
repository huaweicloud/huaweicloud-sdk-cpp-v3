
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelEncoderSettings_encoder_settings_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelEncoderSettings_encoder_settings_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 转码模板配置项
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyOttChannelEncoderSettings_encoder_settings
    : public ModelBase
{
public:
    ModifyOttChannelEncoderSettings_encoder_settings();
    virtual ~ModifyOttChannelEncoderSettings_encoder_settings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyOttChannelEncoderSettings_encoder_settings members

    /// <summary>
    /// 转码模板ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelEncoderSettings_encoder_settings_H_
