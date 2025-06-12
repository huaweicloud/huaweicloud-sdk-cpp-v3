
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommentData_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommentData_H_


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
/// 用户提交的评论信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CommentData
    : public ModelBase
{
public:
    CommentData();
    virtual ~CommentData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommentData members

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
    /// 附件名字
    /// </summary>

    std::vector<std::string>& getAttachmentName();
    bool attachmentNameIsSet() const;
    void unsetattachmentName();
    void setAttachmentName(const std::vector<std::string>& value);


protected:
    std::string commentTitle_;
    bool commentTitleIsSet_;
    std::string commentMessage_;
    bool commentMessageIsSet_;
    std::vector<std::string> attachmentName_;
    bool attachmentNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CommentData_H_
