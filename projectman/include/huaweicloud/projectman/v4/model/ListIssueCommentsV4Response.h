
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCommentsV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCommentsV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueCommentV4.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueCommentsV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListIssueCommentsV4Response();
    virtual ~ListIssueCommentsV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueCommentsV4Response members

    /// <summary>
    /// 评论总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 品论列表
    /// </summary>

    std::vector<IssueCommentV4>& getComments();
    bool commentsIsSet() const;
    void unsetcomments();
    void setComments(const std::vector<IssueCommentV4>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<IssueCommentV4> comments_;
    bool commentsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueCommentsV4Response_H_
