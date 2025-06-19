
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelInputReq_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelInputReq_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/InputStreamInfo.h>
#include <huaweicloud/live/v1/model/EncoderSettingsExpand.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// OTT频道修改入流消息体
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ModifyOttChannelInputReq
    : public ModelBase
{
public:
    ModifyOttChannelInputReq();
    virtual ~ModifyOttChannelInputReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyOttChannelInputReq members

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
    /// 
    /// </summary>

    InputStreamInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const InputStreamInfo& value);

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
    InputStreamInfo input_;
    bool inputIsSet_;
    EncoderSettingsExpand encoderSettingsExpand_;
    bool encoderSettingsExpandIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ModifyOttChannelInputReq_H_
