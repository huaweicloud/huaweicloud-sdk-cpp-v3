
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoInfoV2_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoInfoV2_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepoInfoV2
    : public ModelBase
{
public:
    RepoInfoV2();
    virtual ~RepoInfoV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoInfoV2 members

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 创建者的用户名，在用户是租户的情况下，用户名和租户名相等
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 创建者的租户名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 仓库组名(克隆地址中域名后面仓库名前的一段 示例：git@repo.alpha.devcloud.inhuawei.com:Demo00228/testword.git  组名：Demo00228 )
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 使用 https 克隆仓库时所使用的 url
    /// </summary>

    std::string getHttpsUrl() const;
    bool httpsUrlIsSet() const;
    void unsethttpsUrl();
    void setHttpsUrl(const std::string& value);

    /// <summary>
    /// 用户的 iam user uuid
    /// </summary>

    std::string getIamUserUuid() const;
    bool iamUserUuidIsSet() const;
    void unsetiamUserUuid();
    void setIamUserUuid(const std::string& value);

    /// <summary>
    /// 当前用户是否是仓库的创建者，1：是，0：不是
    /// </summary>

    int32_t getIsOwner() const;
    bool isOwnerIsSet() const;
    void unsetisOwner();
    void setIsOwner(int32_t value);

    /// <summary>
    /// 仓库 LFS 容量，单位为M，大于 1024M 则单位为 G
    /// </summary>

    std::string getLfsSize() const;
    bool lfsSizeIsSet() const;
    void unsetlfsSize();
    void setLfsSize(const std::string& value);

    /// <summary>
    /// 项目是否被删除
    /// </summary>

    std::string getProjectIsDeleted() const;
    bool projectIsDeletedIsSet() const;
    void unsetprojectIsDeleted();
    void setProjectIsDeleted(const std::string& value);

    /// <summary>
    /// 项目ID，获取方式请参见[获取项目ID](codehub_api_0014.xml)。
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 仓库主键id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 仓库名
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// 仓库总容量 &#x3D; 仓库 LFS 容量 + git 库容量，单位为M，大于 1024M 则单位为 G
    /// </summary>

    std::string getRepositorySize() const;
    bool repositorySizeIsSet() const;
    void unsetrepositorySize();
    void setRepositorySize(const std::string& value);

    /// <summary>
    /// 仓库uuid(由CreateRepository接口返回)
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);

    /// <summary>
    /// 使用 ssh 方式克隆仓库时所使用的 url
    /// </summary>

    std::string getSshUrl() const;
    bool sshUrlIsSet() const;
    void unsetsshUrl();
    void setSshUrl(const std::string& value);

    /// <summary>
    /// 当前用户是否收藏该仓库
    /// </summary>

    bool isStar() const;
    bool starIsSet() const;
    void unsetstar();
    void setStar(bool value);

    /// <summary>
    /// 仓库状态， 0：仓库正常创建成功 1：仓库创建中 2：创建失败 3：仓库冻结 4：仓库已经关闭 
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 用户在仓库中的权限:20：只读成员 30：普通成员 40：管理员 
    /// </summary>

    int32_t getUserRole() const;
    bool userRoleIsSet() const;
    void unsetuserRole();
    void setUserRole(int32_t value);

    /// <summary>
    /// 是否可见：0私有仓库，20公有仓库
    /// </summary>

    int32_t getVisibilityLevel() const;
    bool visibilityLevelIsSet() const;
    void unsetvisibilityLevel();
    void setVisibilityLevel(int32_t value);

    /// <summary>
    /// web url 路径，访问它将跳转至仓库详情页
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);


protected:
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::string httpsUrl_;
    bool httpsUrlIsSet_;
    std::string iamUserUuid_;
    bool iamUserUuidIsSet_;
    int32_t isOwner_;
    bool isOwnerIsSet_;
    std::string lfsSize_;
    bool lfsSizeIsSet_;
    std::string projectIsDeleted_;
    bool projectIsDeletedIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    std::string repositorySize_;
    bool repositorySizeIsSet_;
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;
    std::string sshUrl_;
    bool sshUrlIsSet_;
    bool star_;
    bool starIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    int32_t userRole_;
    bool userRoleIsSet_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepoInfoV2_H_
