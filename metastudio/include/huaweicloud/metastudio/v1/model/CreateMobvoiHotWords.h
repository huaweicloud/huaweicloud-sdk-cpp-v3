
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateMobvoiHotWords_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateMobvoiHotWords_H_


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
/// mobvoi类型热词
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateMobvoiHotWords
    : public ModelBase
{
public:
    CreateMobvoiHotWords();
    virtual ~CreateMobvoiHotWords();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMobvoiHotWords members

    /// <summary>
    /// 热词ID。
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);


protected:
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateMobvoiHotWords_H_
