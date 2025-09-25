
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoInfo_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoInfo_H_


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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  RepoInfo
    : public ModelBase
{
public:
    RepoInfo();
    virtual ~RepoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoInfo members

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);

    /// <summary>
    /// 仓库组名(克隆地址中域名后面仓库名前的一段 示例：git@repo.alpha.devcloud.inhuawei.com:Demo00228/testword.git  组名：Demo00228)
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// https url
    /// </summary>

    std::string getHttpUrl() const;
    bool httpUrlIsSet() const;
    void unsethttpUrl();
    void setHttpUrl(const std::string& value);

    /// <summary>
    /// 仓库uuid(由CreateRepository接口返回)
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 仓库名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目ID，获取方式请参见[获取项目ID](codehub_api_0014.xml)。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 项目是否被删除
    /// </summary>

    std::string getProjectIsDelete() const;
    bool projectIsDeleteIsSet() const;
    void unsetprojectIsDelete();
    void setProjectIsDelete(const std::string& value);

    /// <summary>
    /// 仓库主键id
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// ssh url
    /// </summary>

    std::string getSshUrl() const;
    bool sshUrlIsSet() const;
    void unsetsshUrl();
    void setSshUrl(const std::string& value);

    /// <summary>
    /// 是否可见：0私有仓库，20公有仓库
    /// </summary>

    int32_t getVisibilityLevel() const;
    bool visibilityLevelIsSet() const;
    void unsetvisibilityLevel();
    void setVisibilityLevel(int32_t value);

    /// <summary>
    /// web url 访问路径
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);


protected:
    std::string createAt_;
    bool createAtIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string httpUrl_;
    bool httpUrlIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectIsDelete_;
    bool projectIsDeleteIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;
    std::string sshUrl_;
    bool sshUrlIsSet_;
    int32_t visibilityLevel_;
    bool visibilityLevelIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_RepoInfo_H_
