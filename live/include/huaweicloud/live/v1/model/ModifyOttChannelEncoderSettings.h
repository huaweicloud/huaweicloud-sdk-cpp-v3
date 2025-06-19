
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelEncoderSettings_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelEncoderSettings_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/ModifyOttChannelEncoderSettings_encoder_settings.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// OTT频道通用消息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyOttChannelEncoderSettings
    : public ModelBase
{
public:
    ModifyOttChannelEncoderSettings();
    virtual ~ModifyOttChannelEncoderSettings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyOttChannelEncoderSettings members

    /// <summary>
    /// 频道推流域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 组名或应用名
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 频道ID。频道唯一标识，为必填项
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 转码模板配置
    /// </summary>

    std::vector<ModifyOttChannelEncoderSettings_encoder_settings>& getEncoderSettings();
    bool encoderSettingsIsSet() const;
    void unsetencoderSettings();
    void setEncoderSettings(const std::vector<ModifyOttChannelEncoderSettings_encoder_settings>& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::vector<ModifyOttChannelEncoderSettings_encoder_settings> encoderSettings_;
    bool encoderSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelEncoderSettings_H_
