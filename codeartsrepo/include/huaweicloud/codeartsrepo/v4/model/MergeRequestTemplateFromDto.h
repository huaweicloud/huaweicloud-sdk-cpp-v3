
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestTemplateFromDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestTemplateFromDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并请求模板来源
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  MergeRequestTemplateFromDto
    : public ModelBase
{
public:
    MergeRequestTemplateFromDto();
    virtual ~MergeRequestTemplateFromDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestTemplateFromDto members

    /// <summary>
    /// **参数解释：** 设置来源的url链接，点击可跳转到项目、代码组或仓库的和并请求模板设置。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** repository: 设置来自于仓库 group: 设置继承自代码组 project: 设置继承自项目
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库id，不来源于仓库时为null。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 代码组id，不来源于代码组时为null。
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);

    /// <summary>
    /// **参数解释：** 项目id，不来源于项目时为null。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string path_;
    bool pathIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t groupId_;
    bool groupIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeRequestTemplateFromDto_H_
