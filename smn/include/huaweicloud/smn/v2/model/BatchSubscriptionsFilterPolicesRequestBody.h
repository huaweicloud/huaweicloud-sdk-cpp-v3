
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchSubscriptionsFilterPolicesRequestBody_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchSubscriptionsFilterPolicesRequestBody_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/BatchSubscriptionsFilterPolicesRequestBody_polices.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// filter_polices字段，必填，一个筛选策略最多可具有 5 个属性策略。  name-属性名称：满足正则 ^(?!smn_)(?!.*?_$)(?!^_)(?!.*?__)[a-z0-9_]{1,32}$ （英文字母([a-z])、数字([0-9])、下划线(_)，下划线不得开始、结尾或连续出现），长度限制{1,32}，key不能是smn_开头 字符串匹配策略： string_equals：精准匹配字符串；类型：字符串数组，数组长度[1,10]，字符串长度限制[1,32]，不能重复，不能空值“ ”
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  BatchSubscriptionsFilterPolicesRequestBody
    : public ModelBase
{
public:
    BatchSubscriptionsFilterPolicesRequestBody();
    virtual ~BatchSubscriptionsFilterPolicesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchSubscriptionsFilterPolicesRequestBody members

    /// <summary>
    /// 批量处理订阅者策略列表。
    /// </summary>

    std::vector<BatchSubscriptionsFilterPolicesRequestBody_polices>& getPolices();
    bool policesIsSet() const;
    void unsetpolices();
    void setPolices(const std::vector<BatchSubscriptionsFilterPolicesRequestBody_polices>& value);


protected:
    std::vector<BatchSubscriptionsFilterPolicesRequestBody_polices> polices_;
    bool policesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchSubscriptionsFilterPolicesRequestBody_H_
