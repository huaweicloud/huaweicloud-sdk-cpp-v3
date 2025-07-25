
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListProjectJobsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListProjectJobsRequest_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ListProjectJobsRequest
    : public ModelBase
{
public:
    ListProjectJobsRequest();
    virtual ~ListProjectJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectJobsRequest members

    /// <summary>
    /// CodeArts项目ID，32位数字、小写字母组合。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 分页页码， 表示从此页开始查询。 **约束限制**： 不涉及。 **取值范围**： 只能使用数字，大于等于0。
    /// </summary>

    int32_t getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetpageIndex();
    void setPageIndex(int32_t value);

    /// <summary>
    /// **参数解释**： 每页显示的条目数量。 **约束限制**： 不涉及。 **取值范围**： 只能使用数字，小于等于100。
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 查询条件
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// 排序的字段
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// 排序顺序
    /// </summary>

    std::string getSortOrder() const;
    bool sortOrderIsSet() const;
    void unsetsortOrder();
    void setSortOrder(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// 构建状态过滤条件
    /// </summary>

    std::string getBuildStatus() const;
    bool buildStatusIsSet() const;
    void unsetbuildStatus();
    void setBuildStatus(const std::string& value);

    /// <summary>
    /// 是否分组
    /// </summary>

    bool isByGroup() const;
    bool byGroupIsSet() const;
    void unsetbyGroup();
    void setByGroup(bool value);

    /// <summary>
    /// 分组ID
    /// </summary>

    std::string getGroupPathId() const;
    bool groupPathIdIsSet() const;
    void unsetgroupPathId();
    void setGroupPathId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t pageIndex_;
    bool pageIndexIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string search_;
    bool searchIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string sortOrder_;
    bool sortOrderIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string buildStatus_;
    bool buildStatusIsSet_;
    bool byGroup_;
    bool byGroupIsSet_;
    std::string groupPathId_;
    bool groupPathIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProjectJobsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProjectJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ListProjectJobsRequest_H_
