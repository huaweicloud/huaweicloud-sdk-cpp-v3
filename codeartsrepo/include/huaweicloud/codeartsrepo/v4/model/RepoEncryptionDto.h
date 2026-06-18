
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepoEncryptionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepoEncryptionDto_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RepoEncryptionDto
    : public ModelBase
{
public:
    RepoEncryptionDto();
    virtual ~RepoEncryptionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepoEncryptionDto members

    /// <summary>
    /// **参数解释：** 代码仓id。
    /// </summary>

    int32_t getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(int32_t value);

    /// <summary>
    /// **参数解释：** 代码仓名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓全路径。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getFullPath() const;
    bool fullPathIsSet() const;
    void unsetfullPath();
    void setFullPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓所有者id。
    /// </summary>

    int32_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(int32_t value);

    /// <summary>
    /// **参数解释：** 代码仓所有者iamId。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getOwnerIamId() const;
    bool ownerIamIdIsSet() const;
    void unsetownerIamId();
    void setOwnerIamId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓所有者租户id。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getOwnerTenantName() const;
    bool ownerTenantNameIsSet() const;
    void unsetownerTenantName();
    void setOwnerTenantName(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓所有者昵称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getOwnerNickName() const;
    bool ownerNickNameIsSet() const;
    void unsetownerNickName();
    void setOwnerNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓所有者名称。 **取值范围：** 字符串长度不少于1，不超过1000。
    /// </summary>

    std::string getOwnerName() const;
    bool ownerNameIsSet() const;
    void unsetownerName();
    void setOwnerName(const std::string& value);


protected:
    int32_t repoId_;
    bool repoIdIsSet_;
    std::string repoName_;
    bool repoNameIsSet_;
    std::string fullPath_;
    bool fullPathIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    int32_t ownerId_;
    bool ownerIdIsSet_;
    std::string ownerIamId_;
    bool ownerIamIdIsSet_;
    std::string ownerTenantName_;
    bool ownerTenantNameIsSet_;
    std::string ownerNickName_;
    bool ownerNickNameIsSet_;
    std::string ownerName_;
    bool ownerNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RepoEncryptionDto_H_
