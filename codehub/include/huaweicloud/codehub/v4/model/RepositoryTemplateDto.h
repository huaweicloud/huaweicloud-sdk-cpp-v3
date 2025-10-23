
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryTemplateDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryTemplateDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 模板仓列表
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryTemplateDto
    : public ModelBase
{
public:
    RepositoryTemplateDto();
    virtual ~RepositoryTemplateDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryTemplateDto members

    /// <summary>
    /// **参数解释：** 仓库Id。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 模板仓标题。 **取值范围：** 字符串长度1-50。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否是系统模板。 **取值范围：** - true，系统模板。 - false，个人模板。
    /// </summary>

    bool isSystem() const;
    bool systemIsSet() const;
    void unsetsystem();
    void setSystem(bool value);

    /// <summary>
    /// **参数解释：** 标签列表。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 仓库描述信息。 **取值范围：** 字符串长度0-2000。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 编程语言。 **取值范围：** 字符串长度0-32。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板仓的仓库名称。 **取值范围：** 字符串长度0-255。
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板仓的简介。 **取值范围：** 字符串长度0-32。
    /// </summary>

    std::string getBriefIntroduction() const;
    bool briefIntroductionIsSet() const;
    void unsetbriefIntroduction();
    void setBriefIntroduction(const std::string& value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 模板仓被使用的次数。
    /// </summary>

    int32_t getUsedTimes() const;
    bool usedTimesIsSet() const;
    void unsetusedTimes();
    void setUsedTimes(int32_t value);

    /// <summary>
    /// **参数解释：** 模板仓被点赞的次数。
    /// </summary>

    int32_t getLikedTimes() const;
    bool likedTimesIsSet() const;
    void unsetlikedTimes();
    void setLikedTimes(int32_t value);

    /// <summary>
    /// **参数解释：** 作者。 **取值范围：** 字符串长度0-128。
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓https协议的git地址。 **取值范围：** 字符串最大长度512。
    /// </summary>

    std::string getHttpsUrl() const;
    bool httpsUrlIsSet() const;
    void unsethttpsUrl();
    void setHttpsUrl(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool system_;
    bool systemIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    std::string briefIntroduction_;
    bool briefIntroductionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    int32_t usedTimes_;
    bool usedTimesIsSet_;
    int32_t likedTimes_;
    bool likedTimesIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string httpsUrl_;
    bool httpsUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryTemplateDto_H_
