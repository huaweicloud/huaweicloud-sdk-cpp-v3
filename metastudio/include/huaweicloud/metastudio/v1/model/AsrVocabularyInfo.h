
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>
#include <huaweicloud/metastudio/v1/model/AsrVocabularyTypeEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 热词表基本信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AsrVocabularyInfo
    : public ModelBase
{
public:
    AsrVocabularyInfo();
    virtual ~AsrVocabularyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AsrVocabularyInfo members

    /// <summary>
    /// 热词表ID。
    /// </summary>

    std::string getAsrVocabularyId() const;
    bool asrVocabularyIdIsSet() const;
    void unsetasrVocabularyId();
    void setAsrVocabularyId(const std::string& value);

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
    /// 词表内容
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string asrVocabularyId_;
    bool asrVocabularyIdIsSet_;
    AsrVocabularyTypeEnum vocabularyType_;
    bool vocabularyTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string content_;
    bool contentIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AsrVocabularyInfo_H_
