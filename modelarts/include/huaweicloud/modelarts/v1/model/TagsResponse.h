
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TagsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** Tms的标签结构体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TagsResponse
    : public ModelBase
{
public:
    TagsResponse();
    virtual ~TagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagsResponse members

    /// <summary>
    /// **参数解释：** 标签键字段。 **约束限制：** 不涉及。 **取值范围：** 长度为1~128，标签的键可以包含任意语种字母、数字、空格，以及_ . : &#x3D; + - @特殊字符，但首尾不能含有空格，不能以_sys_开头。 **默认取值：** 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签值字段。 **取值范围：** 长度为255，包括字母、数字、下划线、点、斜杠、等号、加号、减号和@符号。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TagsResponse_H_
