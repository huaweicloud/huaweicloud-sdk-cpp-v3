
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineQuery_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineQuery_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询流水线列表请求体
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListPipelineQuery
    : public ModelBase
{
public:
    ListPipelineQuery();
    virtual ~ListPipelineQuery();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPipelineQuery members

    /// <summary>
    /// **参数解释**： CodeArts项目ID。 **约束限制**： 不涉及。 **取值范围**： 每个项目ID为32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： CodeArts项目ID列表。 **约束限制**： 不涉及。 **取值范围**： 每个项目ID为32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getProjectIds();
    bool projectIdsIsSet() const;
    void unsetprojectIds();
    void setProjectIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 微服务ID。可以通过[查询微服务列表](ListMicroservice.xml)接口获取，其中data.id即为微服务ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符串。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getComponentId() const;
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名称，支持模糊查询。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线状态列表。 **约束限制**： 不涉及。 **取值范围**： - COMPLETED：已完成。 - RUNNING：运行中。 - FAILED：失败。 - CANCELED：取消。 - PAUSED：暂停。 - SUSPEND：挂起。 - IGNORED：忽略。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getStatus();
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 是否为变更流水线。 **约束限制**： 不涉及。 **取值范围**： - true：是变更流水线。 - false：非变更流水线。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsPublish() const;
    bool isPublishIsSet() const;
    void unsetisPublish();
    void setIsPublish(bool value);

    /// <summary>
    /// **参数解释**： 创建人ID，用户的userId。 **约束限制**： 不涉及。 **取值范围**： 每个ID为32位字符串。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人ID列表。 **约束限制**： 不涉及。 **取值范围**： 每个ID为32位字符串。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getCreatorIds();
    bool creatorIdsIsSet() const;
    void unsetcreatorIds();
    void setCreatorIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 执行人ID列表。 **约束限制**： 不涉及。 **取值范围**： 每个ID为32位字符串。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getExecutorIds();
    bool executorIdsIsSet() const;
    void unsetexecutorIds();
    void setExecutorIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： 流水线开始时间。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线结束时间。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 起始偏移。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int64_t value);

    /// <summary>
    /// **参数解释**： 查询数量。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int64_t value);

    /// <summary>
    /// **参数解释**： 排序字段名称。 **约束限制**： 不涉及。 **取值范围**： - name：流水线名。 - create_time：创建时间。 - update_time：更新时间。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**： 排序规则。 **约束限制**： 不涉及。 **取值范围**： - asc：按排序字段升序。 - desc：按排序字段降序。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线分组ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGroupPathId() const;
    bool groupPathIdIsSet() const;
    void unsetgroupPathId();
    void setGroupPathId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否分组查询。 **约束限制**： 不涉及。 **取值范围**： - true：是分组查询。 - false：不是分组查询。 **默认取值**： 不涉及。 
    /// </summary>

    bool isByGroup() const;
    bool byGroupIsSet() const;
    void unsetbyGroup();
    void setByGroup(bool value);

    /// <summary>
    /// **参数解释**： 是否包含被禁用的流水线。 **约束限制**： 不涉及。 **取值范围**： - true：包含被禁用的流水线。 - false：不包含被禁用的流水线。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsBanned() const;
    bool isBannedIsSet() const;
    void unsetisBanned();
    void setIsBanned(bool value);

    /// <summary>
    /// **参数解释**： 是否只查询新版流水线。 **约束限制**： 不涉及。 **取值范围**： - true：只查询新版流水线。 - false：不只查询新版流水线。 **默认取值**： true。 
    /// </summary>

    bool isQueryNew() const;
    bool queryNewIsSet() const;
    void unsetqueryNew();
    void setQueryNew(bool value);

    /// <summary>
    /// **参数解释**： 流水线密集等级。 **约束限制**： 非涉密场景无该字段。 **取值范围**： 零及以上正整数。 0：未设置密级。 1：最低密级。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<int32_t>& getSecurityLevelList();
    bool securityLevelListIsSet() const;
    void unsetsecurityLevelList();
    void setSecurityLevelList(std::vector<int32_t> value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::vector<std::string> projectIds_;
    bool projectIdsIsSet_;
    std::string componentId_;
    bool componentIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> status_;
    bool statusIsSet_;
    bool isPublish_;
    bool isPublishIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::vector<std::string> creatorIds_;
    bool creatorIdsIsSet_;
    std::vector<std::string> executorIds_;
    bool executorIdsIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int64_t offset_;
    bool offsetIsSet_;
    int64_t limit_;
    bool limitIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string groupPathId_;
    bool groupPathIdIsSet_;
    bool byGroup_;
    bool byGroupIsSet_;
    bool isBanned_;
    bool isBannedIsSet_;
    bool queryNew_;
    bool queryNewIsSet_;
    std::vector<int32_t> securityLevelList_;
    bool securityLevelListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelineQuery_H_
