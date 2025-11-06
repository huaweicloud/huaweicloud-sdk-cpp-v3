
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiscussionTemplateDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiscussionTemplateDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 检视意见模板返回体
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DiscussionTemplateDto
    : public ModelBase
{
public:
    DiscussionTemplateDto();
    virtual ~DiscussionTemplateDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiscussionTemplateDto members

    /// <summary>
    /// **参数解释：** 检视意见模板主键id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 模板名称。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// **参数解释：** 描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释：** 默认指派人。
    /// </summary>

    int32_t getAssigneeId() const;
    bool assigneeIdIsSet() const;
    void unsetassigneeId();
    void setAssigneeId(int32_t value);

    /// <summary>
    /// **参数解释：** 意见分类key。
    /// </summary>

    std::string getCategories() const;
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 意见分类英文。
    /// </summary>

    std::string getCategoriesEn() const;
    bool categoriesEnIsSet() const;
    void unsetcategoriesEn();
    void setCategoriesEn(const std::string& value);

    /// <summary>
    /// **参数解释：** 意见分类中文。
    /// </summary>

    std::string getCategoriesCn() const;
    bool categoriesCnIsSet() const;
    void unsetcategoriesCn();
    void setCategoriesCn(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见模块。
    /// </summary>

    std::vector<std::string>& getModules();
    bool modulesIsSet() const;
    void unsetmodules();
    void setModules(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 严重程度key。
    /// </summary>

    std::string getReviewSeverity() const;
    bool reviewSeverityIsSet() const;
    void unsetreviewSeverity();
    void setReviewSeverity(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否设置为默认模板。
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);

    /// <summary>
    /// **参数解释：** 模板作者id。
    /// </summary>

    int32_t getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(int32_t value);

    /// <summary>
    /// **参数解释：** 创建时间。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const UserBasicDto& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getAssignee() const;
    bool assigneeIsSet() const;
    void unsetassignee();
    void setAssignee(const UserBasicDto& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t assigneeId_;
    bool assigneeIdIsSet_;
    std::string categories_;
    bool categoriesIsSet_;
    std::string categoriesEn_;
    bool categoriesEnIsSet_;
    std::string categoriesCn_;
    bool categoriesCnIsSet_;
    std::vector<std::string> modules_;
    bool modulesIsSet_;
    std::string reviewSeverity_;
    bool reviewSeverityIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;
    int32_t creatorId_;
    bool creatorIdIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    UserBasicDto creator_;
    bool creatorIsSet_;
    UserBasicDto assignee_;
    bool assigneeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DiscussionTemplateDto_H_
