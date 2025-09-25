
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_TemplateRepository_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_TemplateRepository_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  TemplateRepository
    : public ModelBase
{
public:
    TemplateRepository();
    virtual ~TemplateRepository();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateRepository members

    /// <summary>
    /// 模板唯一标识
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 模板名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 模板关联仓库名称
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 模板标签
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 模板描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 模板简介
    /// </summary>

    std::string getBriefIntroduction() const;
    bool briefIntroductionIsSet() const;
    void unsetbriefIntroduction();
    void setBriefIntroduction(const std::string& value);

    /// <summary>
    /// 是否自动创建流水线
    /// </summary>

    int32_t getAutoPendingPipelines() const;
    bool autoPendingPipelinesIsSet() const;
    void unsetautoPendingPipelines();
    void setAutoPendingPipelines(int32_t value);

    /// <summary>
    /// 模板语言分类
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 模板创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 模板引用次数
    /// </summary>

    int32_t getUsedTimes() const;
    bool usedTimesIsSet() const;
    void unsetusedTimes();
    void setUsedTimes(int32_t value);

    /// <summary>
    /// 模板被点赞次数
    /// </summary>

    int32_t getLikedTimes() const;
    bool likedTimesIsSet() const;
    void unsetlikedTimes();
    void setLikedTimes(int32_t value);

    /// <summary>
    /// 模板创建人
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 模板https链接
    /// </summary>

    std::string getHttpsUrl() const;
    bool httpsUrlIsSet() const;
    void unsethttpsUrl();
    void setHttpsUrl(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string briefIntroduction_;
    bool briefIntroductionIsSet_;
    int32_t autoPendingPipelines_;
    bool autoPendingPipelinesIsSet_;
    std::string language_;
    bool languageIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_TemplateRepository_H_
