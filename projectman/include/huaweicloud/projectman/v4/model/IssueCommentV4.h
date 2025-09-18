
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCommentV4_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCommentV4_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/CommentUserV4.h>

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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueCommentV4
    : public ModelBase
{
public:
    IssueCommentV4();
    virtual ~IssueCommentV4();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueCommentV4 members

    /// <summary>
    /// 评论内容
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 评论id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 评论时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 评论时间戳
    /// </summary>

    std::string getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommentUserV4 getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const CommentUserV4& value);


protected:
    std::string comment_;
    bool commentIsSet_;
    int32_t id_;
    bool idIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string timestamp_;
    bool timestampIsSet_;
    CommentUserV4 user_;
    bool userIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueCommentV4_H_
