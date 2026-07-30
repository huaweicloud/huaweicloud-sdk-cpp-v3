
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceCreateRequest_tags_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceCreateRequest_tags_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceCreateRequest_tags
    : public ModelBase
{
public:
    ServiceCreateRequest_tags();
    virtual ~ServiceCreateRequest_tags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceCreateRequest_tags members

    /// <summary>
    /// **参数解释：** 标签键字段。 **约束限制：** 不涉及。 **取值范围：** 长度为1~128，标签的键可以包含任意语种字母、数字、空格，以及_ . : &#x3D; + - @特殊字符，但首尾不能含有空格，不能以_sys_开头。 **默认取值：** 不涉及。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 标签value值。 **约束限制：** 最大长度为256。 **取值范围：** 任意数量的字母、数字、空格、下划线、点、冒号、斜杠、等号、加号、减号、@等字符开始和结束的字符串。 **默认取值：** 不涉及。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceCreateRequest_tags_H_
