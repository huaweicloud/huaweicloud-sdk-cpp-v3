
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_HttpDetectRequestBody_extension_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_HttpDetectRequestBody_extension_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Http/Https协议可以指定多个K/V对，在发送Http/Https协议消息时会携带这些K/V对作为请求header。extension字段允许为空，header字段允许为空。
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  HttpDetectRequestBody_extension
    : public ModelBase
{
public:
    HttpDetectRequestBody_extension();
    virtual ~HttpDetectRequestBody_extension();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpDetectRequestBody_extension members

    /// <summary>
    /// header应满足如下要求： 1. key值限定为：包含英文字母([A-Za-z])、数字([0-9])、中划线(-)hyphens，中划线不得作为结尾，不得连续出现。 2. K/V不得超过10个 3. key需要以\&quot;x-\&quot;开头，不能以\&quot;x-smn\&quot;开头，正确示例：x-abc-cba,  x-abc 4. 所有K/V长度总和不得超过1024个字符 5. key不区分大小写 6. key值不可重复 7. value值限定为ASCII码，不支持中文或其他Unicode，支持空格
    /// </summary>

    std::map<std::string, std::string>& getHeader();
    bool headerIsSet() const;
    void unsetheader();
    void setHeader(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> header_;
    bool headerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_HttpDetectRequestBody_extension_H_
