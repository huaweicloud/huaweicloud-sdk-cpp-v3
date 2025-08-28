
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeLibraryReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeLibraryReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/KnowledgeTypeEnum.h>
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
/// 创建知识库请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateKnowledgeLibraryReq
    : public ModelBase
{
public:
    CreateKnowledgeLibraryReq();
    virtual ~CreateKnowledgeLibraryReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateKnowledgeLibraryReq members

    /// <summary>
    /// 知识库名称。
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

    KnowledgeTypeEnum getKnowledgeType() const;
    bool knowledgeTypeIsSet() const;
    void unsetknowledgeType();
    void setKnowledgeType(const KnowledgeTypeEnum& value);

    /// <summary>
    /// 知识库召回数
    /// </summary>

    int32_t getTopk() const;
    bool topkIsSet() const;
    void unsettopk();
    void setTopk(int32_t value);

    /// <summary>
    /// 知识库召回得分
    /// </summary>

    double getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(double value);


protected:
    std::string name_;
    bool nameIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    KnowledgeTypeEnum knowledgeType_;
    bool knowledgeTypeIsSet_;
    int32_t topk_;
    bool topkIsSet_;
    double score_;
    bool scoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateKnowledgeLibraryReq_H_
