
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdIssueCommentsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdIssueCommentsRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIpdIssueCommentsRequest
    : public ModelBase
{
public:
    ListIpdIssueCommentsRequest();
    virtual ~ListIpdIssueCommentsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIpdIssueCommentsRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项唯一ID。可以通过查询工作项列表或者查询树状工作项接口获取，响应消息体中的id字段的值就是工作项ID。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否按创建日期倒序排列。 **取值范围**： - true：按创建时间倒序排列。 - false：按创建时间正序排列。 **默认取值**： 不涉及。
    /// </summary>

    bool isDateDesc() const;
    bool dateDescIsSet() const;
    void unsetdateDesc();
    void setDateDesc(bool value);

    /// <summary>
    /// **参数解释**： 分页索引。 **约束限制**： 不涉及 **取值范围**： 最小值1，最大值10000 **默认取值**： 1
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// **参数解释**： 分页大小。 **约束限制**： 不涉及 **取值范围**： 最小值5，最大值200 **默认取值**： 200
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// **参数解释**： 评论类型，支持多值，使用英文逗号分隔。 **取值范围**： - comment：评论 - reply：回复 - operation：系统操作。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    bool dateDesc_;
    bool dateDescIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string category_;
    bool categoryIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIpdIssueCommentsRequest& dereference_from_shared_ptr(std::shared_ptr<ListIpdIssueCommentsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIpdIssueCommentsRequest_H_
