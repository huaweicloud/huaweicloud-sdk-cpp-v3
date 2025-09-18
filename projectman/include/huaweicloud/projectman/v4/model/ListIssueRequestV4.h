
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRequestV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRequestV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/ListIssueRequestV4_custom_fields.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueRequestV4
    : public ModelBase
{
public:
    ListIssueRequestV4();
    virtual ~ListIssueRequestV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueRequestV4 members

    /// <summary>
    /// 处理人id
    /// </summary>

    std::vector<int32_t>& getAssignedIds();
    bool assignedIdsIsSet() const;
    void unsetassignedIds();
    void setAssignedIds(std::vector<int32_t> value);

    /// <summary>
    /// 创建者id
    /// </summary>

    std::vector<int32_t>& getCreatorIds();
    bool creatorIdsIsSet() const;
    void unsetcreatorIds();
    void setCreatorIds(std::vector<int32_t> value);

    /// <summary>
    /// 开发人id,对应用户信息的数字id
    /// </summary>

    std::vector<int32_t>& getDeveloperIds();
    bool developerIdsIsSet() const;
    void unsetdeveloperIds();
    void setDeveloperIds(std::vector<int32_t> value);

    /// <summary>
    /// id, 领域, 14 &#39;性能&#39;, 15 &#39;功能&#39;, 16 &#39;可靠性&#39;, 17 &#39;网络安全&#39;, 18 &#39;可维护性&#39;, 19 &#39;其他DFX&#39;, 20 &#39;可用性&#39;,
    /// </summary>

    std::vector<int32_t>& getDomainIds();
    bool domainIdsIsSet() const;
    void unsetdomainIds();
    void setDomainIds(std::vector<int32_t> value);

    /// <summary>
    /// 完成度
    /// </summary>

    std::vector<int32_t>& getDoneRatios();
    bool doneRatiosIsSet() const;
    void unsetdoneRatios();
    void setDoneRatios(std::vector<int32_t> value);

    /// <summary>
    /// 迭代id
    /// </summary>

    std::vector<int32_t>& getIterationIds();
    bool iterationIdsIsSet() const;
    void unsetiterationIds();
    void setIterationIds(std::vector<int32_t> value);

    /// <summary>
    /// 每页显示数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页索引，偏移量，offset是limit的整数倍数，limit&#x3D;10,offset&#x3D;0,10,20...
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 模块id
    /// </summary>

    std::vector<int32_t>& getModuleIds();
    bool moduleIdsIsSet() const;
    void unsetmoduleIds();
    void setModuleIds(std::vector<int32_t> value);

    /// <summary>
    /// 优先级
    /// </summary>

    std::vector<int32_t>& getPriorityIds();
    bool priorityIdsIsSet() const;
    void unsetpriorityIds();
    void setPriorityIds(std::vector<int32_t> value);

    /// <summary>
    /// 查询类型 backlog feature epic
    /// </summary>

    std::string getQueryType() const;
    bool queryTypeIsSet() const;
    void unsetqueryType();
    void setQueryType(const std::string& value);

    /// <summary>
    /// 查询类型
    /// </summary>

    std::vector<int32_t>& getSeverityIds();
    bool severityIdsIsSet() const;
    void unsetseverityIds();
    void setSeverityIds(std::vector<int32_t> value);

    /// <summary>
    /// 状态   id, 新建   1, 进行中 2, 已解决 3, 测试中 4, 已关闭 5, 已拒绝 6,
    /// </summary>

    std::vector<int32_t>& getStatusIds();
    bool statusIdsIsSet() const;
    void unsetstatusIds();
    void setStatusIds(std::vector<int32_t> value);

    /// <summary>
    /// 故事点id
    /// </summary>

    std::vector<int32_t>& getStoryPointIds();
    bool storyPointIdsIsSet() const;
    void unsetstoryPointIds();
    void setStoryPointIds(std::vector<int32_t> value);

    /// <summary>
    /// 工作项类型,2任务/Task,3缺陷/Bug,5Epic,6Feature,7Story
    /// </summary>

    std::vector<int32_t>& getTrackerIds();
    bool trackerIdsIsSet() const;
    void unsettrackerIds();
    void setTrackerIds(std::vector<int32_t> value);

    /// <summary>
    /// true 查询的工作项包含已经逻辑删除的，false 查询的工作项不包含已经删除的
    /// </summary>

    bool isIncludeDeleted() const;
    bool includeDeletedIsSet() const;
    void unsetincludeDeleted();
    void setIncludeDeleted(bool value);

    /// <summary>
    /// 根据工作项的创建时间查询工作项，(查询的起始时间,查询的结束时间)
    /// </summary>

    std::string getCreatedTimeInterval() const;
    bool createdTimeIntervalIsSet() const;
    void unsetcreatedTimeInterval();
    void setCreatedTimeInterval(const std::string& value);

    /// <summary>
    /// 根据工作项的更新时间查询工作项，(查询的起始时间,查询的结束时间)
    /// </summary>

    std::string getUpdatedTimeInterval() const;
    bool updatedTimeIntervalIsSet() const;
    void unsetupdatedTimeInterval();
    void setUpdatedTimeInterval(const std::string& value);

    /// <summary>
    /// 根据工作项的结束时间查询工作项，(查询的起始时间,查询的结束时间)
    /// </summary>

    std::string getClosedTimeInterval() const;
    bool closedTimeIntervalIsSet() const;
    void unsetclosedTimeInterval();
    void setClosedTimeInterval(const std::string& value);

    /// <summary>
    /// 自定义字段
    /// </summary>

    std::vector<ListIssueRequestV4_custom_fields>& getCustomFields();
    bool customFieldsIsSet() const;
    void unsetcustomFields();
    void setCustomFields(const std::vector<ListIssueRequestV4_custom_fields>& value);


protected:
    std::vector<int32_t> assignedIds_;
    bool assignedIdsIsSet_;
    std::vector<int32_t> creatorIds_;
    bool creatorIdsIsSet_;
    std::vector<int32_t> developerIds_;
    bool developerIdsIsSet_;
    std::vector<int32_t> domainIds_;
    bool domainIdsIsSet_;
    std::vector<int32_t> doneRatios_;
    bool doneRatiosIsSet_;
    std::vector<int32_t> iterationIds_;
    bool iterationIdsIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::vector<int32_t> moduleIds_;
    bool moduleIdsIsSet_;
    std::vector<int32_t> priorityIds_;
    bool priorityIdsIsSet_;
    std::string queryType_;
    bool queryTypeIsSet_;
    std::vector<int32_t> severityIds_;
    bool severityIdsIsSet_;
    std::vector<int32_t> statusIds_;
    bool statusIdsIsSet_;
    std::vector<int32_t> storyPointIds_;
    bool storyPointIdsIsSet_;
    std::vector<int32_t> trackerIds_;
    bool trackerIdsIsSet_;
    bool includeDeleted_;
    bool includeDeletedIsSet_;
    std::string createdTimeInterval_;
    bool createdTimeIntervalIsSet_;
    std::string updatedTimeInterval_;
    bool updatedTimeIntervalIsSet_;
    std::string closedTimeInterval_;
    bool closedTimeIntervalIsSet_;
    std::vector<ListIssueRequestV4_custom_fields> customFields_;
    bool customFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueRequestV4_H_
