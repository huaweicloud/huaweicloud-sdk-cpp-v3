
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CustomArgs_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CustomArgs_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 鉴权参数
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CustomArgs
    : public ModelBase
{
public:
    CustomArgs();
    virtual ~CustomArgs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomArgs members

    /// <summary>
    /// 参数类型，custom_var：自定义，nginx_preset_var：预置的变量。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 参数,长度支持1-256，由数字0-9、字符a-z、A-Z，及特殊字符._-*#%|+^@?&#x3D;组成。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 取值,长度支持1-256，由数字0-9、字符a-z、A-Z，及特殊字符._-*#%|+^@?&#x3D;组成。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
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

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CustomArgs_H_
