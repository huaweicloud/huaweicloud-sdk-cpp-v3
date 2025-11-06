
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantRepositoryDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantRepositoryDto_H_


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
/// 租户下仓库列表
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  TenantRepositoryDto
    : public ModelBase
{
public:
    TenantRepositoryDto();
    virtual ~TenantRepositoryDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TenantRepositoryDto members

    /// <summary>
    /// **参数解释：** 仓库所有者。 **取值范围：** 字符串长度不少于1，不超过128。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库容量,单位:MB,保留2位小数。 **取值范围：** 不涉及。
    /// </summary>

    double getCapacity() const;
    bool capacityIsSet() const;
    void unsetcapacity();
    void setCapacity(double value);

    /// <summary>
    /// **参数解释：** 仓库状态。 **取值范围：** - 0，正常。 - 3，冻结。 - 4，关闭。 - 5，清理中。 - 7，删除中。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释：** 内容审核结果。 **取值范围：** true，审核通过。 false，审核未通过。
    /// </summary>

    bool isModerationResult() const;
    bool moderationResultIsSet() const;
    void unsetmoderationResult();
    void setModerationResult(bool value);

    /// <summary>
    /// **参数解释：** 创建时间。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 成员数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getMemberNumber() const;
    bool memberNumberIsSet() const;
    void unsetmemberNumber();
    void setMemberNumber(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库Id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRepositoryName() const;
    bool repositoryNameIsSet() const;
    void unsetrepositoryName();
    void setRepositoryName(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目Id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string owner_;
    bool ownerIsSet_;
    double capacity_;
    bool capacityIsSet_;
    int32_t status_;
    bool statusIsSet_;
    bool moderationResult_;
    bool moderationResultIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    int32_t memberNumber_;
    bool memberNumberIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string repositoryName_;
    bool repositoryNameIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_TenantRepositoryDto_H_
