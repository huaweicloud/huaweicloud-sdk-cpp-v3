
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowNotificationTemplateResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowNotificationTemplateResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/CreateNotificationTemplateResBody.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ShowNotificationTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowNotificationTemplateResponse();
    virtual ~ShowNotificationTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowNotificationTemplateResponse members

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

    /// <summary>
    /// 创建时间，为毫秒时间戳
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间，为毫秒时间戳
    /// </summary>

    int64_t getModifyTime() const;
    bool modifyTimeIsSet() const;
    void unsetmodifyTime();
    void setModifyTime(int64_t value);

    /// <summary>
    /// 项目ID，获取方式请参见：获取账号ID、项目ID、日志组ID、日志流ID（https://support.huaweicloud.com/api-lts/lts_api_0006.html）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


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
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t modifyTime_;
    bool modifyTimeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ShowNotificationTemplateResponse_H_
