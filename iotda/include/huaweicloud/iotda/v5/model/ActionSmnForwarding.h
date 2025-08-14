
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionSmnForwarding_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionSmnForwarding_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 发送给SMN消息结构
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ActionSmnForwarding
    : public ModelBase
{
public:
    ActionSmnForwarding();
    virtual ~ActionSmnForwarding();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionSmnForwarding members

    /// <summary>
    /// **参数说明**：SMN服务对应的region区域。
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// **参数说明**：SMN服务对应的projectId信息。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数说明**：SMN服务对应的主题名称。
    /// </summary>

    std::string getThemeName() const;
    bool themeNameIsSet() const;
    void unsetthemeName();
    void setThemeName(const std::string& value);

    /// <summary>
    /// **参数说明**：SMN服务对应的topic的主题URN。
    /// </summary>

    std::string getTopicUrn() const;
    bool topicUrnIsSet() const;
    void unsettopicUrn();
    void setTopicUrn(const std::string& value);

    /// <summary>
    /// **参数说明**：短信或邮件的内容。
    /// </summary>

    std::string getMessageContent() const;
    bool messageContentIsSet() const;
    void unsetmessageContent();
    void setMessageContent(const std::string& value);

    /// <summary>
    /// **参数说明**：SMN服务对应的模板名称。
    /// </summary>

    std::string getMessageTemplateName() const;
    bool messageTemplateNameIsSet() const;
    void unsetmessageTemplateName();
    void setMessageTemplateName(const std::string& value);

    /// <summary>
    /// **参数说明**：短信或邮件的主题。最大长度支持UTF-8编码后的521个字节。
    /// </summary>

    std::string getMessageTitle() const;
    bool messageTitleIsSet() const;
    void unsetmessageTitle();
    void setMessageTitle(const std::string& value);


protected:
    std::string regionName_;
    bool regionNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string themeName_;
    bool themeNameIsSet_;
    std::string topicUrn_;
    bool topicUrnIsSet_;
    std::string messageContent_;
    bool messageContentIsSet_;
    std::string messageTemplateName_;
    bool messageTemplateNameIsSet_;
    std::string messageTitle_;
    bool messageTitleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ActionSmnForwarding_H_
