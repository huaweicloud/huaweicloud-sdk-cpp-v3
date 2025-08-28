
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleBusinessReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleBusinessReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>
#include <vector>
#include <huaweicloud/metastudio/v1/model/RoleKnowledgeLibraryReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 角色业务配置请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  RoleBusinessReq
    : public ModelBase
{
public:
    RoleBusinessReq();
    virtual ~RoleBusinessReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RoleBusinessReq members

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 提示词。
    /// </summary>

    std::string getPrompt() const;
    bool promptIsSet() const;
    void unsetprompt();
    void setPrompt(const std::string& value);

    /// <summary>
    /// 知识库列表
    /// </summary>

    std::vector<RoleKnowledgeLibraryReq>& getKnowledgeLibraryList();
    bool knowledgeLibraryListIsSet() const;
    void unsetknowledgeLibraryList();
    void setKnowledgeLibraryList(const std::vector<RoleKnowledgeLibraryReq>& value);


protected:
    LanguageEnum language_;
    bool languageIsSet_;
    std::string prompt_;
    bool promptIsSet_;
    std::vector<RoleKnowledgeLibraryReq> knowledgeLibraryList_;
    bool knowledgeLibraryListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_RoleBusinessReq_H_
