
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_Map_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_Map_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  Map
    : public ModelBase
{
public:
    Map();
    virtual ~Map();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Map members

    /// <summary>
    /// 标签键。长度1~128个字符, 可用 UTF-8 格式表示的字母(包含中文)、数字和空格，以及以下字符： _ . : &#x3D; + - @
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 标签值。长度0~255个字符,  可用 UTF-8 格式表示的字母(包含中文)、数字和空格，以及以下字符： _ . : / &#x3D; + - @
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

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_Map_H_
