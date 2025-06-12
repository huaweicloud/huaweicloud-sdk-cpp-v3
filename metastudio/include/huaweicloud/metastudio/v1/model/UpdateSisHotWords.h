
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateSisHotWords_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateSisHotWords_H_


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
/// sis类型热词
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateSisHotWords
    : public ModelBase
{
public:
    UpdateSisHotWords();
    virtual ~UpdateSisHotWords();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSisHotWords members

    /// <summary>
    /// 热词ID。
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// SIS服务所在区域projectId
    /// </summary>

    std::string getSisProjectId() const;
    bool sisProjectIdIsSet() const;
    void unsetsisProjectId();
    void setSisProjectId(const std::string& value);

    /// <summary>
    /// 对接SIS服务的区域。 &gt; 0：北京四；3：上海一；
    /// </summary>

    int32_t getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(int32_t value);

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
    std::string sisProjectId_;
    bool sisProjectIdIsSet_;
    int32_t region_;
    bool regionIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateSisHotWords_H_
