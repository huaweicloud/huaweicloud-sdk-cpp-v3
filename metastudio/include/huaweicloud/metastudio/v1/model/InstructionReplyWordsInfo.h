
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionReplyWordsInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionReplyWordsInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 指令回复话术信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InstructionReplyWordsInfo
    : public ModelBase
{
public:
    InstructionReplyWordsInfo();
    virtual ~InstructionReplyWordsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstructionReplyWordsInfo members

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 回复话术，多个回复话术间用换行符\\n分隔。
    /// </summary>

    std::string getReplyWords() const;
    bool replyWordsIsSet() const;
    void unsetreplyWords();
    void setReplyWords(const std::string& value);


protected:
    LanguageEnum language_;
    bool languageIsSet_;
    std::string replyWords_;
    bool replyWordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InstructionReplyWordsInfo_H_
