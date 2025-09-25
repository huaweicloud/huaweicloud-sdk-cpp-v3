
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ReplyMergeRequestNoteDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ReplyMergeRequestNoteDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回复合并请求检视意见请求体
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ReplyMergeRequestNoteDto
    : public ModelBase
{
public:
    ReplyMergeRequestNoteDto();
    virtual ~ReplyMergeRequestNoteDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplyMergeRequestNoteDto members

    /// <summary>
    /// **参数解释：** 评论内容。  
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);


protected:
    std::string body_;
    bool bodyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ReplyMergeRequestNoteDto_H_
