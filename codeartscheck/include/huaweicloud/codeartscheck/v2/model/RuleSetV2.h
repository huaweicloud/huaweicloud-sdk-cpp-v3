
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleSetV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleSetV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  RuleSetV2
    : public ModelBase
{
public:
    RuleSetV2();
    virtual ~RuleSetV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RuleSetV2 members

    /// <summary>
    /// 规则集id，需要从web界面获取
    /// </summary>

    std::string getRulesetId() const;
    bool rulesetIdIsSet() const;
    void unsetrulesetId();
    void setRulesetId(const std::string& value);

    /// <summary>
    /// 检查语言，支持cpp,java,js,python,php,css,html,go,typescript
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::string rulesetId_;
    bool rulesetIdIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_RuleSetV2_H_
