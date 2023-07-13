
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_Filter_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_Filter_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 关键操作通知高级筛选条件。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  Filter
    : public ModelBase
{
public:
    Filter();
    virtual ~Filter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Filter members

    /// <summary>
    /// 多条件关系。 - AND 表示所有过滤条件满足后生效。 - OR 表示有任意一个条件满足时生效。
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// 是否打开高级筛选开关。
    /// </summary>

    bool isIsSupportFilter() const;
    bool isSupportFilterIsSet() const;
    void unsetisSupportFilter();
    void setIsSupportFilter(bool value);

    /// <summary>
    /// 高级过滤条件规则，示例如下：\&quot;key !&#x3D; value\&quot;，格式为：字段 规则 值。 -字段取值范围：api_version,code,trace_rating,trace_type,resource_id,resource_name。 -规则：!&#x3D; 或 &#x3D;。 - 值：api_version正则约束：^(a-zA-Z0-9_-.){1,64}$；code：最小长度1，最大长度256；trace_rating枚举值：\&quot;normal\&quot;, \&quot;warning\&quot;, \&quot;incident\&quot;；trace_type枚举值：\&quot;ConsoleAction\&quot;, \&quot;ApiCall\&quot;, \&quot;SystemAction\&quot;；resource_id：最小长度1，最大长度350；resource_name：最小长度1，最大长度256
    /// </summary>

    std::vector<std::string>& getRule();
    bool ruleIsSet() const;
    void unsetrule();
    void setRule(const std::vector<std::string>& value);


protected:
    std::string condition_;
    bool conditionIsSet_;
    bool isSupportFilter_;
    bool isSupportFilterIsSet_;
    std::vector<std::string> rule_;
    bool ruleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_Filter_H_
