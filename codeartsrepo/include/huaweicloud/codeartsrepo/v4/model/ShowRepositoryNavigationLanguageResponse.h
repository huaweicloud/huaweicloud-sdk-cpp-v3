
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryNavigationLanguageResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryNavigationLanguageResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/LanguageDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRepositoryNavigationLanguageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepositoryNavigationLanguageResponse();
    virtual ~ShowRepositoryNavigationLanguageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryNavigationLanguageResponse members

    /// <summary>
    /// **参数解释：** 结果标识。 **约束限制：** 不涉及。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释：** 结果消息。 **约束限制：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 语言列表。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<LanguageDto>& getLanguageList();
    bool languageListIsSet() const;
    void unsetlanguageList();
    void setLanguageList(const std::vector<LanguageDto>& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<LanguageDto> languageList_;
    bool languageListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryNavigationLanguageResponse_H_
