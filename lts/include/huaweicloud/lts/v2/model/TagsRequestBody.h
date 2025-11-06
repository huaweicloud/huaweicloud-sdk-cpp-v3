
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_TagsRequestBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_TagsRequestBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 标签字段信息
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  TagsRequestBody
    : public ModelBase
{
public:
    TagsRequestBody();
    virtual ~TagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagsRequestBody members

    /// <summary>
    /// **参数解释：** 标签键。 **约束限制：** - 标签键名称不可重复。 - 标签是以键值对（key-value）的形式表示，key和value为一一对应关系。 **取值范围：** 标签键可以包含任意语种的字母、数字和空格，以及_.:&#x3D;+-@字符，但首尾不能包含空格，且不能以_sys_开头；长度不能超过128个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签值。 **约束限制：** 标签是以键值对（key-value）的形式表示，key和value为一一对应关系。 **取值范围：** - 标签值可以包含任意语种的字母、数字和空格，以及_.:&#x3D;+-@字符。 - 标签值长度不能超过255个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_TagsRequestBody_H_
