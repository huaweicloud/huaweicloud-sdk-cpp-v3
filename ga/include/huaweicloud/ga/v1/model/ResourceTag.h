
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ResourceTag_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ResourceTag_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ResourceTag
    : public ModelBase
{
public:
    ResourceTag();
    virtual ~ResourceTag();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceTag members

    /// <summary>
    /// 标签键，取值范围： - key不能为空，长度1~128个字符（中文也可以输入128个字符）。 - 可用 UTF-8 格式表示的字母（包含中文）、数字和空格，以及以下字符_ . : &#x3D; + - @。 - _sys_开头属于系统标签，租户不能输入。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值，取值范围： - 长度0~255个字符（中文也可以输入255个字符）。 - 可用 UTF-8 格式表示的字母（包含中文）、数字和空格，以及以下字符_ . : / &#x3D; + - @。 - 资源标签值可以为空（empty or null）。
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

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ResourceTag_H_
