
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegeProjectInfoV5_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegeProjectInfoV5_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsartifact/v2/model/PrivilegeProjectInfoV5.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  PrivilegeProjectInfoV5
    : public ModelBase
{
public:
    PrivilegeProjectInfoV5();
    virtual ~PrivilegeProjectInfoV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrivilegeProjectInfoV5 members

    /// <summary>
    /// **参数解释**：  项目的序号。 **取值范围**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目的名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目的状态（该参数无返回值，请忽略）。 **取值范围**： 该参数无返回值，请忽略。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目的创建时间。 **取值范围**： 格式为yyyy-MM-dd HH:mm:ss。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 仓库数量。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getRepositoryNum() const;
    bool repositoryNumIsSet() const;
    void unsetrepositoryNum();
    void setRepositoryNum(int32_t value);

    /// <summary>
    /// **参数解释**： 项目总数（该参数无返回值，请忽略）。 **取值范围**： 该参数无返回值，请忽略。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 仓库ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目所属的区域。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目的序号列表（该参数无返回值，请忽略）。 **取值范围**： 该参数无返回值，请忽略。
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 项目总数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotalRecords() const;
    bool totalRecordsIsSet() const;
    void unsettotalRecords();
    void setTotalRecords(int32_t value);

    /// <summary>
    /// **参数解释**： 请求参数中的仓库ID是否关联到本项目。 **取值范围**： - true：关联到本项目。 - false：未关联到本项目。
    /// </summary>

    bool isAssociated() const;
    bool associatedIsSet() const;
    void unsetassociated();
    void setAssociated(bool value);

    /// <summary>
    /// **参数解释**： 项目的信息。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<PrivilegeProjectInfoV5>& getProjectInfo();
    bool projectInfoIsSet() const;
    void unsetprojectInfo();
    void setProjectInfo(const std::vector<PrivilegeProjectInfoV5>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    int32_t repositoryNum_;
    bool repositoryNumIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::string repositoryId_;
    bool repositoryIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::vector<std::string> ids_;
    bool idsIsSet_;
    int32_t totalRecords_;
    bool totalRecordsIsSet_;
    bool associated_;
    bool associatedIsSet_;
    std::vector<PrivilegeProjectInfoV5>* projectInfo_;
    bool projectInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_PrivilegeProjectInfoV5_H_
