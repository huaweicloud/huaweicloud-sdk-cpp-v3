
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIpdIssueCommentRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIpdIssueCommentRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/CommentUpdateVO.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateIpdIssueCommentRequest
    : public ModelBase
{
public:
    UpdateIpdIssueCommentRequest();
    virtual ~UpdateIpdIssueCommentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIpdIssueCommentRequest members

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
    /// **参数解释**： 评论ID。评论唯一标识。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCommentId() const;
    bool commentIdIsSet() const;
    void unsetcommentId();
    void setCommentId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommentUpdateVO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CommentUpdateVO& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    std::string commentId_;
    bool commentIdIsSet_;
    CommentUpdateVO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateIpdIssueCommentRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateIpdIssueCommentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateIpdIssueCommentRequest_H_
