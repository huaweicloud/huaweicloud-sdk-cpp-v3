
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListKeywordsAlarmRulesResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListKeywordsAlarmRulesResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/KeywordsAlarmRuleRespList.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  ListKeywordsAlarmRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListKeywordsAlarmRulesResponse();
    virtual ~ListKeywordsAlarmRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListKeywordsAlarmRulesResponse members

    /// <summary>
    /// 项目id
    /// </summary>

    std::vector<KeywordsAlarmRuleRespList>& getKeywordsAlarmRules();
    bool keywordsAlarmRulesIsSet() const;
    void unsetkeywordsAlarmRules();
    void setKeywordsAlarmRules(const std::vector<KeywordsAlarmRuleRespList>& value);


protected:
    std::vector<KeywordsAlarmRuleRespList> keywordsAlarmRules_;
    bool keywordsAlarmRulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListKeywordsAlarmRulesResponse_H_
