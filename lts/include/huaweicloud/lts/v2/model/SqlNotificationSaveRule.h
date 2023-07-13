
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlNotificationSaveRule_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlNotificationSaveRule_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Topics.h>
#include <string>
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
class HUAWEICLOUD_LTS_V2_EXPORT  SqlNotificationSaveRule
    : public ModelBase
{
public:
    SqlNotificationSaveRule();
    virtual ~SqlNotificationSaveRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SqlNotificationSaveRule members

    /// <summary>
    /// 首选项对应的语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 首选项对应的时区信息
    /// </summary>

    std::string getTimezone() const;
    bool timezoneIsSet() const;
    void unsettimezone();
    void setTimezone(const std::string& value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 主题信息
    /// </summary>

    std::vector<Topics>& getTopics();
    bool topicsIsSet() const;
    void unsettopics();
    void setTopics(const std::vector<Topics>& value);

    /// <summary>
    /// 消息模板名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);


protected:
    std::string language_;
    bool languageIsSet_;
    std::string timezone_;
    bool timezoneIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::vector<Topics> topics_;
    bool topicsIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_SqlNotificationSaveRule_H_
