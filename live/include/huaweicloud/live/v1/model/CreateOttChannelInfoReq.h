
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateOttChannelInfoReq_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateOttChannelInfoReq_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/InputStreamInfo.h>
#include <huaweicloud/live/v1/model/ModifyOttChannelEncoderSettings_encoder_settings.h>
#include <huaweicloud/live/v1/model/EndpointItem.h>
#include <huaweicloud/live/v1/model/EncoderSettingsExpand.h>
#include <vector>
#include <huaweicloud/live/v1/model/CreateOttChannelInfoReq_record_settings.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// OTT频道创建消息体
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateOttChannelInfoReq
    : public ModelBase
{
public:
    CreateOttChannelInfoReq();
    virtual ~CreateOttChannelInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateOttChannelInfoReq members

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
    /// 频道ID。频道唯一标识，为必填项。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 频道名。可选配置
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 频道状态 - ON：频道下发成功后，自动启动拉流、转码、录制等功能 - OFF：仅保存频道信息，不启动频道
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 频道模式 ADD_CDN：一站式服务，源站和CDN绑在一起（默认） ONLY_OS：独立源站服务，CDN和源站解耦
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 当mode是ONLY_OS时，该字段生效，表示频道所在Region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InputStreamInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const InputStreamInfo& value);

    /// <summary>
    /// 转码模板配置
    /// </summary>

    std::vector<ModifyOttChannelEncoderSettings_encoder_settings>& getEncoderSettings();
    bool encoderSettingsIsSet() const;
    void unsetencoderSettings();
    void setEncoderSettings(const std::vector<ModifyOttChannelEncoderSettings_encoder_settings>& value);

    /// <summary>
    /// 
    /// </summary>

    CreateOttChannelInfoReq_record_settings getRecordSettings() const;
    bool recordSettingsIsSet() const;
    void unsetrecordSettings();
    void setRecordSettings(const CreateOttChannelInfoReq_record_settings& value);

    /// <summary>
    /// 频道出流信息
    /// </summary>

    std::vector<EndpointItem>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<EndpointItem>& value);

    /// <summary>
    /// 
    /// </summary>

    EncoderSettingsExpand getEncoderSettingsExpand() const;
    bool encoderSettingsExpandIsSet() const;
    void unsetencoderSettingsExpand();
    void setEncoderSettingsExpand(const EncoderSettingsExpand& value);


protected:
    std::string domain_;
    bool domainIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string region_;
    bool regionIsSet_;
    InputStreamInfo input_;
    bool inputIsSet_;
    std::vector<ModifyOttChannelEncoderSettings_encoder_settings> encoderSettings_;
    bool encoderSettingsIsSet_;
    CreateOttChannelInfoReq_record_settings recordSettings_;
    bool recordSettingsIsSet_;
    std::vector<EndpointItem> endpoints_;
    bool endpointsIsSet_;
    EncoderSettingsExpand encoderSettingsExpand_;
    bool encoderSettingsExpandIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateOttChannelInfoReq_H_
