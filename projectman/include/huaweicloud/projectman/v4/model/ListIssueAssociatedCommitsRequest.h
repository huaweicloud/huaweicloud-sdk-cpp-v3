
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueAssociatedCommitsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueAssociatedCommitsRequest_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueAssociatedCommitsRequest
    : public ModelBase
{
public:
    ListIssueAssociatedCommitsRequest();
    virtual ~ListIssueAssociatedCommitsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueAssociatedCommitsRequest members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项ID
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// 查询类型：commit（提交记录） || branch（分支记录）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 每页数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIssueAssociatedCommitsRequest& dereference_from_shared_ptr(std::shared_ptr<ListIssueAssociatedCommitsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueAssociatedCommitsRequest_H_
