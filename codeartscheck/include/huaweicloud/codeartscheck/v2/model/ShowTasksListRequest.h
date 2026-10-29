
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasksListRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasksListRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTasksListRequest
    : public ModelBase
{
public:
    ShowTasksListRequest();
    virtual ~ShowTasksListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTasksListRequest members

    /// <summary>
    /// **参数解释：** 分页页码。 **约束限制：** 分页页码≥1。 **取值范围:** 1-2147483647 **默认取值：**  不涉及。
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// **参数解释：** 分页大小。 **约束限制：** 数字1-200之间。 **取值范围:** 1-200 **默认取值：** 不涉及。
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// **参数解释：** 需要搜索的任务名。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目的32位UUID，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/zh-cn/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)接口获取。 **约束条件：** 不涉及。 **取值范围：** 长度为[1~32]个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 门禁结果。 **约束限制：** 不涉及。 **取值范围：** - success：门禁通过。 - error：门禁不通过。 **默认取值：** 不涉及。
    /// </summary>

    std::string getReviewResultTypes() const;
    bool reviewResultTypesIsSet() const;
    void unsetreviewResultTypes();
    void setReviewResultTypes(const std::string& value);

    /// <summary>
    /// **参数解释：** 检查状态。 **约束限制：** 不涉及。 **取值范围：** - success：检查成功。 - failed：检查失败。 - aborted：检查终止。 - executing：检查中。 - never_execute：未检查。 **默认取值：** 不涉及。
    /// </summary>

    std::string getJobStatusTypes() const;
    bool jobStatusTypesIsSet() const;
    void unsetjobStatusTypes();
    void setJobStatusTypes(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否按照执行时间排序。 **约束限制：** 不涉及。 **取值范围：** - up：按照执行时间升序排序。 - down：按照执行时间降序排序。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOrderByExecuteTime() const;
    bool orderByExecuteTimeIsSet() const;
    void unsetorderByExecuteTime();
    void setOrderByExecuteTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务的分组ID，可通过列出项目下的分组信息接口获取任务的分组ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getTaskClassificationId() const;
    bool taskClassificationIdIsSet() const;
    void unsettaskClassificationId();
    void setTaskClassificationId(const std::string& value);

    /// <summary>
    /// 列表类接口参数
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 列表类接口参数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 排序字段,任务列表每次只能根据一个字段进行排序。 **约束限制：** 不涉及。
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序顺序，取值范围：\&quot;up\&quot;（升序）、\&quot;down\&quot;（降序） **约束限制：** 不涉及。
    /// </summary>

    std::string getSortOrder() const;
    bool sortOrderIsSet() const;
    void unsetsortOrder();
    void setSortOrder(const std::string& value);

    /// <summary>
    /// **参数解释：** 操作人，填写账号用户名。 **约束限制：** 不涉及。 **取值范围：** 长度为[1~128]个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码仓地址。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getRepoUrl() const;
    bool repoUrlIsSet() const;
    void unsetrepoUrl();
    void setRepoUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 和repo_url配合使用，查询任务时是否完全匹配repo_url。 **约束限制：** 不涉及。 **取值范围：** - true：只查询代码仓地址为repo_url的任务。 - false：查询ssh协议的代码仓地址或http协议的代码仓地址和repo_url匹配的任务。 **默认取值：** false。
    /// </summary>

    std::string getRepoUrlFullMatch() const;
    bool repoUrlFullMatchIsSet() const;
    void unsetrepoUrlFullMatch();
    void setRepoUrlFullMatch(const std::string& value);


protected:
    int32_t page_;
    bool pageIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string reviewResultTypes_;
    bool reviewResultTypesIsSet_;
    std::string jobStatusTypes_;
    bool jobStatusTypesIsSet_;
    std::string orderByExecuteTime_;
    bool orderByExecuteTimeIsSet_;
    std::string taskClassificationId_;
    bool taskClassificationIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortOrder_;
    bool sortOrderIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::string repoUrl_;
    bool repoUrlIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string repoUrlFullMatch_;
    bool repoUrlFullMatchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTasksListRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTasksListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasksListRequest_H_
