
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryMergeRequestTemplateDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryMergeRequestTemplateDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/UserBasicDto.h>
#include <huaweicloud/codehub/v4/model/MergeRequestTemplateDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 仓库合并请求模板返回体
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryMergeRequestTemplateDto
    : public ModelBase
{
public:
    RepositoryMergeRequestTemplateDto();
    virtual ~RepositoryMergeRequestTemplateDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryMergeRequestTemplateDto members

    /// <summary>
    /// **参数解释：** 合并请求模板主键id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库id。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

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
    /// **参数解释：** 模板名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求标题（不自动提取合并请求标题时生效）
    /// </summary>

    std::string getMergeRequestTitle() const;
    bool mergeRequestTitleIsSet() const;
    void unsetmergeRequestTitle();
    void setMergeRequestTitle(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否设置为默认模板
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);

    /// <summary>
    /// **参数解释：** 是否在标题中添加[WIP]
    /// </summary>

    bool isIsWip() const;
    bool isWipIsSet() const;
    void unsetisWip();
    void setIsWip(bool value);

    /// <summary>
    /// **参数解释：** 自动提取合并请求标题 0：不提取 1：提取提交信息 2：提取e2e单标题
    /// </summary>

    int32_t getAutoExtractMrTitle() const;
    bool autoExtractMrTitleIsSet() const;
    void unsetautoExtractMrTitle();
    void setAutoExtractMrTitle(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const UserBasicDto& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::string mergeRequestTitle_;
    bool mergeRequestTitleIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;
    bool isWip_;
    bool isWipIsSet_;
    int32_t autoExtractMrTitle_;
    bool autoExtractMrTitleIsSet_;
    UserBasicDto creator_;
    bool creatorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryMergeRequestTemplateDto_H_
