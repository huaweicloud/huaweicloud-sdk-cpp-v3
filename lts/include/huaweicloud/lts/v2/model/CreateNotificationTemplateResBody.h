
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateNotificationTemplateResBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateNotificationTemplateResBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/SubTemplateResBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateNotificationTemplateResBody
    : public ModelBase
{
public:
    CreateNotificationTemplateResBody();
    virtual ~CreateNotificationTemplateResBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateNotificationTemplateResBody members

    /// <summary>
    /// **参数解释：**  消息模板名称。 **取值范围：**  不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：**  消息通知方式。 **取值范围：**  - sms - dingding - wechat - webhook - email - voice - feishu - welink
    /// </summary>

    std::vector<std::string>& getType();
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：**  消息模板描述。 **取值范围：**  不涉及。
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// **参数解释：**  消息模板来源。 **取值范围：**  不涉及。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：**  不同通知渠道下消息模板的详细信息。
    /// </summary>

    std::vector<SubTemplateResBody>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<SubTemplateResBody>& value);

    /// <summary>
    /// **参数解释：**  消息头语言，系统在发送消息时会默认添加消息头，中文如：“尊敬的用户...”；英文如：“Dear User...”。 **取值范围：**  - zh-cn - en-us
    /// </summary>

    std::string getLocale() const;
    bool localeIsSet() const;
    void unsetlocale();
    void setLocale(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> type_;
    bool typeIsSet_;
    std::string desc_;
    bool descIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::vector<SubTemplateResBody> templates_;
    bool templatesIsSet_;
    std::string locale_;
    bool localeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateNotificationTemplateResBody_H_
