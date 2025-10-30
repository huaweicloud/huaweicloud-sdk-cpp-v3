
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_WatermarkRule_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_WatermarkRule_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/WatermarkLocation.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  WatermarkRule
    : public ModelBase
{
public:
    WatermarkRule();
    virtual ~WatermarkRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WatermarkRule members

    /// <summary>
    /// 水印规则名称，如果不填会使用默认名称。默认名称的构造规则为“域名:应用名:流名”，示例“example.com:live:stream”。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 水印模板ID，只包含数字字母中划线，创建模板时生成
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// APP名。须知：云直播场景是可选配置，媒体直播场景为必选配置。
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 流名OTT场景下，可以不填
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    WatermarkLocation getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const WatermarkLocation& value);

    /// <summary>
    /// OTT场景使用，填对应频道的频ID
    /// </summary>

    std::string getChannelId() const;
    bool channelIdIsSet() const;
    void unsetchannelId();
    void setChannelId(const std::string& value);

    /// <summary>
    /// OTT场景时，填频道对应的转码模板名称
    /// </summary>

    std::string getTranscodeTemplateName() const;
    bool transcodeTemplateNameIsSet() const;
    void unsettranscodeTemplateName();
    void setTranscodeTemplateName(const std::string& value);


protected:
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    WatermarkLocation location_;
    bool locationIsSet_;
    std::string channelId_;
    bool channelIdIsSet_;
    std::string transcodeTemplateName_;
    bool transcodeTemplateNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_WatermarkRule_H_
