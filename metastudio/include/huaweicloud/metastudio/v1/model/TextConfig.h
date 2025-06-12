
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TextConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TextConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 台词脚本。 &gt; 最长10000个字符，不含SSML标签字符数。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TextConfig
    : public ModelBase
{
public:
    TextConfig();
    virtual ~TextConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TextConfig members

    /// <summary>
    /// **参数解释**： 台词脚本。支持两种模式，纯文本模式和标签模式。 - 纯文本模式：使用方法，如“大家好，我是人工智大家，是个虚拟主播”。 - 标签模式：SSML标签的详细定义请参考[文本驱动SSML定义](metastudio_02_0038.xml)。  **约束限制**： 不含SSML标签字符数最长10000个字符。 **取值范围**： 字符长度0-131072位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);


protected:
    std::string text_;
    bool textIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TextConfig_H_
