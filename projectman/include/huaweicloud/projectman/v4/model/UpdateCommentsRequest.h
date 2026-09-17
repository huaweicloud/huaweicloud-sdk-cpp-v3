
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateCommentsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateCommentsRequest_H_


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
/// 工作项更新评论的请求参数。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  UpdateCommentsRequest
    : public ModelBase
{
public:
    UpdateCommentsRequest();
    virtual ~UpdateCommentsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateCommentsRequest members

    /// <summary>
    /// **参数解释：** 工作项id，可通过[高级查询工作项](ListIssuesV4.xml)接口获取，响应消息体中的**id**字段的值就是工作项id。 **约束限制：** 长度在1位到10位之间的纯数字。 **取值范围：** 最小长度：1，最大长度：10。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 工作项的评论URL编码内容。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNotes() const;
    bool notesIsSet() const;
    void unsetnotes();
    void setNotes(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项的评论内容。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getInnerText() const;
    bool innerTextIsSet() const;
    void unsetinnerText();
    void setInnerText(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目的32位uuid，项目唯一标识。 **约束限制**： 由数字和英文组成的32字符串。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getProjectUUId() const;
    bool projectUUIdIsSet() const;
    void unsetprojectUUId();
    void setProjectUUId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项所属项目类型。 **约束限制**： 不涉及。 **取值范围**： scrum。 **默认取值**： 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项的评论id。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getNoteId() const;
    bool noteIdIsSet() const;
    void unsetnoteId();
    void setNoteId(int32_t value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string notes_;
    bool notesIsSet_;
    std::string innerText_;
    bool innerTextIsSet_;
    std::string projectUUId_;
    bool projectUUIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t noteId_;
    bool noteIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_UpdateCommentsRequest_H_
