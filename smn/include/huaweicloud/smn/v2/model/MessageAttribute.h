
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_MessageAttribute_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_MessageAttribute_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 消息属性
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  MessageAttribute
    : public ModelBase
{
public:
    MessageAttribute();
    virtual ~MessageAttribute();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MessageAttribute members

    /// <summary>
    /// 属性名称。属性名称只能包含小写英文字母([a-z])、数字([0-9])、下划线(_)，下划线不能出现在开始或结尾，下划线不能连续出现，长度为1到32个字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 属性类型 STRING：字符串（String）类型 STRING_ARRAY：字符串数组（String.Array）类型 PROTOCOL：协议类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 属性值。 当属性类型为“STRING”时，属性值只能包含中英文、数字、下划线，长度为1到32个字符。 当属性类型为“STRING_ARRAY”时，属性值为字符串数组，数组长度为1到10，数组中的元素内容不能重复，数组中的每个字符串都只能包含中英文、数字、下划线，且长度为1到32个字符。 当属性类型为“PROTOCOL”时，属性值为支持协议类型的字符串数组。
    /// </summary>

    Object getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    Object value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_MessageAttribute_H_
