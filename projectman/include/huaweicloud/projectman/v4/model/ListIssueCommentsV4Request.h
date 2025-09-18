
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCommentsV4Request_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCommentsV4Request_H_


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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueCommentsV4Request
    : public ModelBase
{
public:
    ListIssueCommentsV4Request();
    virtual ~ListIssueCommentsV4Request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueCommentsV4Request members

    /// <summary>
    /// devcloud项目的32位id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 工作项id
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// 分页索引，偏移量
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条数,最大显示100条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListIssueCommentsV4Request& dereference_from_shared_ptr(std::shared_ptr<ListIssueCommentsV4Request> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCommentsV4Request_H_
