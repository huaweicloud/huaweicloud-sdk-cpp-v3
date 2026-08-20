
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTagFilter_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTagFilter_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单个标签筛选条件。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListTagFilter
    : public ModelBase
{
public:
    ListTagFilter();
    virtual ~ListTagFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTagFilter members

    /// <summary>
    /// **参数解释**：标签键。 **约束限制**：   - 必填；   - 长度 1~128；   - 首尾不可为空格；   - 仅支持字母、数字、空格及 &#x60;_ . : &#x3D; + - @&#x60;。 **取值范围**：符合标签键命名规范的字符串。 **默认取值**：不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释**：标签值列表，与 &#x60;key&#x60; 组合用于筛选作业。 **约束限制**：   - 非必填；   - 最多 10 个值；   - 单个值长度 0~255；   - 仅支持字母、数字、空格及 &#x60;_ . : / &#x3D; + - @&#x60;。 **取值范围**：   - 传具体值：匹配 &#x60;key&#x3D;value&#x60; 的作业；   - 不传、传空数组或空字符串：匹配带有该 &#x60;key&#x60; 的作业（不限 value）。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::vector<std::string> values_;
    bool valuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTagFilter_H_
