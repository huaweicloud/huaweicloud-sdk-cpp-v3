
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateRepoRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateRepoRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  CreateRepoRequest
    : public ModelBase
{
public:
    CreateRepoRequest();
    virtual ~CreateRepoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRepoRequest members

    /// <summary>
    /// 是否导入项目成员，取值范围：0-&gt;不导入项目成员，1-&gt;导入项目成员
    /// </summary>

    int32_t getImportMembers() const;
    bool importMembersIsSet() const;
    void unsetimportMembers();
    void setImportMembers(int32_t value);

    /// <summary>
    /// 仓库名称，取值范围：可以输入英文大小写字母、数字、连字符、下划线，且必须以字母开头
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 指定项目ID，获取方式请参见[获取项目ID](codehub_api_0014.xml)。
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 复制模板的ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 仓库状态，取值范围：0-&gt;私有，20-&gt;公开只读
    /// </summary>

    int32_t getVisibilityLevel() const;
    bool visibilityLevelIsSet() const;
    void unsetvisibilityLevel();
    void setVisibilityLevel(int32_t value);

    /// <summary>
    /// 模板仓库的https地址的base64加密
    /// </summary>

    std::string getImportUrl() const;
    bool importUrlIsSet() const;
    void unsetimportUrl();
    void setImportUrl(const std::string& value);

    /// <summary>
    /// 仓库描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 根据编程语言生成.gitignore文件
    /// </summary>

    std::string getGitignoreId() const;
    bool gitignoreIdIsSet() const;
    void unsetgitignoreId();
    void setGitignoreId(const std::string& value);

    /// <summary>
    /// 许可证id
    /// </summary>

    int32_t getLicenseId() const;
    bool licenseIdIsSet() const;
    void unsetlicenseId();
    void setLicenseId(int32_t value);

    /// <summary>
    /// 是否允许生成README文件
    /// </summary>

    int32_t getEnableReadme() const;
    bool enableReadmeIsSet() const;
    void unsetenableReadme();
    void setEnableReadme(int32_t value);

    /// <summary>
    /// 调用者
    /// </summary>

    std::string getCaller() const;
    bool callerIsSet() const;
    void unsetcaller();
    void setCaller(const std::string& value);


protected:
    int32_t importMembers_;
    bool importMembersIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    int32_t visibilityLevel_;
    bool visibilityLevelIsSet_;
    std::string importUrl_;
    bool importUrlIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string gitignoreId_;
    bool gitignoreIdIsSet_;
    int32_t licenseId_;
    bool licenseIdIsSet_;
    int32_t enableReadme_;
    bool enableReadmeIsSet_;
    std::string caller_;
    bool callerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_CreateRepoRequest_H_
