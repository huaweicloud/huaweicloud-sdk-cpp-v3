
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateAsrVocabularyReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateAsrVocabularyReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>
#include <huaweicloud/metastudio/v1/model/MobvoiVocabulary.h>
#include <huaweicloud/metastudio/v1/model/AsrVocabularyTypeEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改热词表请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateAsrVocabularyReq
    : public ModelBase
{
public:
    UpdateAsrVocabularyReq();
    virtual ~UpdateAsrVocabularyReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAsrVocabularyReq members

    /// <summary>
    /// 
    /// </summary>

    AsrVocabularyTypeEnum getVocabularyType() const;
    bool vocabularyTypeIsSet() const;
    void unsetvocabularyType();
    void setVocabularyType(const AsrVocabularyTypeEnum& value);

    /// <summary>
    /// 奇妙问热词表名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 
    /// </summary>

    MobvoiVocabulary getMobvoiVocabulary() const;
    bool mobvoiVocabularyIsSet() const;
    void unsetmobvoiVocabulary();
    void setMobvoiVocabulary(const MobvoiVocabulary& value);


protected:
    AsrVocabularyTypeEnum vocabularyType_;
    bool vocabularyTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    MobvoiVocabulary mobvoiVocabulary_;
    bool mobvoiVocabularyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateAsrVocabularyReq_H_
