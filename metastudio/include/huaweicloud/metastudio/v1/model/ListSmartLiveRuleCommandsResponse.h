
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveRuleCommandsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveRuleCommandsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/RuleCommand.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListSmartLiveRuleCommandsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSmartLiveRuleCommandsResponse();
    virtual ~ListSmartLiveRuleCommandsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSmartLiveRuleCommandsResponse members

    /// <summary>
    /// 数字人直播任务互动规则未确认命令总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 数字人互动规则命令列表。
    /// </summary>

    std::vector<RuleCommand>& getRuleCommands();
    bool ruleCommandsIsSet() const;
    void unsetruleCommands();
    void setRuleCommands(const std::vector<RuleCommand>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<RuleCommand> ruleCommands_;
    bool ruleCommandsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListSmartLiveRuleCommandsResponse_H_
