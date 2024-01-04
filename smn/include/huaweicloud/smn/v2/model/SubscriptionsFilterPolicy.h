
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionsFilterPolicy_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionsFilterPolicy_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 过滤策略。
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  SubscriptionsFilterPolicy
    : public ModelBase
{
public:
    SubscriptionsFilterPolicy();
    virtual ~SubscriptionsFilterPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubscriptionsFilterPolicy members

    /// <summary>
    /// 过滤策略名称。 包含小写英文字母([a-z])、数字([0-9])、下划线(_)，下划线不得开始、结尾或连续出现），长度限制{1,32}，不能是smn_开头。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 字符串精确匹配数组。数组长度[1, 10]，数组内容不能重复，值不能为null或者空字符串“ ”，长度限制[1,32]，中英文、数字、下划线
    /// </summary>

    std::vector<std::string>& getStringEquals();
    bool stringEqualsIsSet() const;
    void unsetstringEquals();
    void setStringEquals(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> stringEquals_;
    bool stringEqualsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_SubscriptionsFilterPolicy_H_
