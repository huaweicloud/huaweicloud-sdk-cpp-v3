
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LanguageDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LanguageDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  LanguageDto
    : public ModelBase
{
public:
    LanguageDto();
    virtual ~LanguageDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LanguageDto members

    /// <summary>
    /// **参数解释：** 语言名称。 **约束限制：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件后缀名。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<std::string>& getExtensionList();
    bool extensionListIsSet() const;
    void unsetextensionList();
    void setExtensionList(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> extensionList_;
    bool extensionListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LanguageDto_H_
