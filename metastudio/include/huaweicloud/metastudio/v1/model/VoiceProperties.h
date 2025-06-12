
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceProperties_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceProperties_H_


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
/// 声音配置信息，为Flexus版声音的配置项，标准版声音不支持此配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VoiceProperties
    : public ModelBase
{
public:
    VoiceProperties();
    virtual ~VoiceProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VoiceProperties members

    /// <summary>
    /// 任务标签，为Flexus版声音的配置。   * ECOMMERCE: 电商   * NEWS: 新闻   * MARKETING: 营销
    /// </summary>

    std::string getJobTag() const;
    bool jobTagIsSet() const;
    void unsetjobTag();
    void setJobTag(const std::string& value);

    /// <summary>
    /// 语音性别，是男性声音还是女性声音，为Flexus版声音的配置。 * FEMALE: 女性 * MALE: 男性
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 训练语言，当前仅支持中文，为Flexus版声音的配置。 * CN: 中文 * EN: 英文
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::string jobTag_;
    bool jobTagIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceProperties_H_
