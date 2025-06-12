
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommentLogInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommentLogInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 评论记录。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CommentLogInfo
    : public ModelBase
{
public:
    CommentLogInfo();
    virtual ~CommentLogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommentLogInfo members

    /// <summary>
    /// 操作时间,格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”
    /// </summary>

    std::string getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(const std::string& value);

    /// <summary>
    /// * USER_REJECT：用户驳回 * USER_COMMENT：用户评论 * ADMIN_COMMENT：管理员评论
    /// </summary>

    std::string getCommentType() const;
    bool commentTypeIsSet() const;
    void unsetcommentType();
    void setCommentType(const std::string& value);

    /// <summary>
    /// 标题。
    /// </summary>

    std::string getCommentTitle() const;
    bool commentTitleIsSet() const;
    void unsetcommentTitle();
    void setCommentTitle(const std::string& value);

    /// <summary>
    /// 消息。
    /// </summary>

    std::string getCommentMessage() const;
    bool commentMessageIsSet() const;
    void unsetcommentMessage();
    void setCommentMessage(const std::string& value);

    /// <summary>
    /// 附件下载地址
    /// </summary>

    std::vector<std::string>& getAttachmentDownloadUrl();
    bool attachmentDownloadUrlIsSet() const;
    void unsetattachmentDownloadUrl();
    void setAttachmentDownloadUrl(const std::vector<std::string>& value);


protected:
    std::string operateTime_;
    bool operateTimeIsSet_;
    std::string commentType_;
    bool commentTypeIsSet_;
    std::string commentTitle_;
    bool commentTitleIsSet_;
    std::string commentMessage_;
    bool commentMessageIsSet_;
    std::vector<std::string> attachmentDownloadUrl_;
    bool attachmentDownloadUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommentLogInfo_H_
