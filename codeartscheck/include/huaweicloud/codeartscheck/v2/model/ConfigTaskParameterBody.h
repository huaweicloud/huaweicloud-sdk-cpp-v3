
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTaskParameterBody_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTaskParameterBody_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/TaskCheckSettingsItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务配置检查参数请求信息
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ConfigTaskParameterBody
    : public ModelBase
{
public:
    ConfigTaskParameterBody();
    virtual ~ConfigTaskParameterBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigTaskParameterBody members

    /// <summary>
    /// 检查工具ID
    /// </summary>

    int32_t getCheckId() const;
    bool checkIdIsSet() const;
    void unsetcheckId();
    void setCheckId(int32_t value);

    /// <summary>
    /// 规则集ID
    /// </summary>

    std::string getRulesetId() const;
    bool rulesetIdIsSet() const;
    void unsetrulesetId();
    void setRulesetId(const std::string& value);

    /// <summary>
    /// 规则集语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// off：关闭，on：开启
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 检查参数信息
    /// </summary>

    std::vector<TaskCheckSettingsItem>& getTaskCheckSettings();
    bool taskCheckSettingsIsSet() const;
    void unsettaskCheckSettings();
    void setTaskCheckSettings(const std::vector<TaskCheckSettingsItem>& value);


protected:
    int32_t checkId_;
    bool checkIdIsSet_;
    std::string rulesetId_;
    bool rulesetIdIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<TaskCheckSettingsItem> taskCheckSettings_;
    bool taskCheckSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTaskParameterBody_H_
