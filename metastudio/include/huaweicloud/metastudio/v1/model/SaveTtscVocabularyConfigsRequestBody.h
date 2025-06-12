
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyConfigsRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyConfigsRequestBody_H_


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
/// 保存租户级tts自定义读法配置请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SaveTtscVocabularyConfigsRequestBody
    : public ModelBase
{
public:
    SaveTtscVocabularyConfigsRequestBody();
    virtual ~SaveTtscVocabularyConfigsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SaveTtscVocabularyConfigsRequestBody members

    /// <summary>
    /// 支持配置的自定义读法类型。当前读法类型会映射为SSML标签，详见[文本驱动SSML定义](metastudio_02_0038.xml)。  包含如下选项： * CHINESE_G2P：拼音 * PHONETIC_SYMBOL：音标 * CONTINUUM：连读 * ALIAS：别名 * SAY_AS：数字/英文的读法。不同value值有不同的读法，详情如下所示。   数字的读法包括：   - date：读日期   - number：读数字   - figure：读数值   - telephone：读电话    英文的读法包括：   - spell：读字母   - english：读单词
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 原始词。
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 自定义读法。其中，音标的读法请参考[词典](https://www.youdao.com/)。
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SaveTtscVocabularyConfigsRequestBody_H_
