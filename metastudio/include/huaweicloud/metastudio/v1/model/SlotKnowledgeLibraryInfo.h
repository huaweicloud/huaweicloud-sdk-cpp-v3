
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SlotKnowledgeLibraryInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SlotKnowledgeLibraryInfo_H_


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
/// 槽位关联的知识库信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SlotKnowledgeLibraryInfo
    : public ModelBase
{
public:
    SlotKnowledgeLibraryInfo();
    virtual ~SlotKnowledgeLibraryInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SlotKnowledgeLibraryInfo members

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 知识库ID。
    /// </summary>

    std::string getKnowledgeLibraryId() const;
    bool knowledgeLibraryIdIsSet() const;
    void unsetknowledgeLibraryId();
    void setKnowledgeLibraryId(const std::string& value);


protected:
    LanguageEnum language_;
    bool languageIsSet_;
    std::string knowledgeLibraryId_;
    bool knowledgeLibraryIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SlotKnowledgeLibraryInfo_H_
