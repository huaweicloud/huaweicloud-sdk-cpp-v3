
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateKeywordsAlarmRuleResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateKeywordsAlarmRuleResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateKeywordsAlarmRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateKeywordsAlarmRuleResponse();
    virtual ~CreateKeywordsAlarmRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateKeywordsAlarmRuleResponse members

    /// <summary>
    /// 告警规则id
    /// </summary>

    std::string getKeywordsAlarmRuleId() const;
    bool keywordsAlarmRuleIdIsSet() const;
    void unsetkeywordsAlarmRuleId();
    void setKeywordsAlarmRuleId(const std::string& value);


protected:
    std::string keywordsAlarmRuleId_;
    bool keywordsAlarmRuleIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateKeywordsAlarmRuleResponse_H_
