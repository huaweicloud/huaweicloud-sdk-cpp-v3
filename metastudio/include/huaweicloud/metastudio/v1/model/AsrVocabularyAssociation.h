
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyAssociation_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyAssociation_H_


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
/// 热词表关联信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AsrVocabularyAssociation
    : public ModelBase
{
public:
    AsrVocabularyAssociation();
    virtual ~AsrVocabularyAssociation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AsrVocabularyAssociation members

    /// <summary>
    /// 热词记录ID
    /// </summary>

    std::string getHotWordsId() const;
    bool hotWordsIdIsSet() const;
    void unsethotWordsId();
    void setHotWordsId(const std::string& value);

    /// <summary>
    /// 热词表ID
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);


protected:
    std::string hotWordsId_;
    bool hotWordsIdIsSet_;
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyAssociation_H_
