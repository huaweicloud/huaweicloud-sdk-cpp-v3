
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddCommentsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddCommentsRequest_H_


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
/// 工作项添加评论的请求参数。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  AddCommentsRequest
    : public ModelBase
{
public:
    AddCommentsRequest();
    virtual ~AddCommentsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddCommentsRequest members

    /// <summary>
    /// **参数解释：** 工作项id。 **约束限制：** 长度在1位到10位之间的纯数字。 **取值范围：** 最小长度：1，最大长度：10。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 工作项的URL编码后的评论内容。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
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
    /// **参数解释**： 项目的32位uuid。 **约束限制**： 由数字和英文组成的32字符串。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
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


protected:
    std::string id_;
    bool idIsSet_;
    std::string notes_;
    bool notesIsSet_;
    std::string innerText_;
    bool innerTextIsSet_;
    std::string projectUUId_;
    bool projectUUIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_AddCommentsRequest_H_
