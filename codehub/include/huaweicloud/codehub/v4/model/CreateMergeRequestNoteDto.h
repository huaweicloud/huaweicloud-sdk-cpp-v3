
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestNoteDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestNoteDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/PositionDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建合并请求检视意见请求体
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CreateMergeRequestNoteDto
    : public ModelBase
{
public:
    CreateMergeRequestNoteDto();
    virtual ~CreateMergeRequestNoteDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeRequestNoteDto members

    /// <summary>
    /// **参数解释：** 评论内容。  
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见严重程度。
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见指派人id。
    /// </summary>

    std::string getAssigneeId() const;
    bool assigneeIdIsSet() const;
    void unsetassigneeId();
    void setAssigneeId(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见分类。
    /// </summary>

    std::string getReviewCategories() const;
    bool reviewCategoriesIsSet() const;
    void unsetreviewCategories();
    void setReviewCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见模块。
    /// </summary>

    std::string getReviewModules() const;
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视人。
    /// </summary>

    std::string getProposerId() const;
    bool proposerIdIsSet() const;
    void unsetproposerId();
    void setProposerId(const std::string& value);

    /// <summary>
    /// **参数解释：** 检视意见所在行类型(代码行评论需要)。
    /// </summary>

    std::string getLineTypes() const;
    bool lineTypesIsSet() const;
    void unsetlineTypes();
    void setLineTypes(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PositionDto getPosition() const;
    bool positionIsSet() const;
    void unsetposition();
    void setPosition(const PositionDto& value);


protected:
    std::string body_;
    bool bodyIsSet_;
    std::string severity_;
    bool severityIsSet_;
    std::string assigneeId_;
    bool assigneeIdIsSet_;
    std::string reviewCategories_;
    bool reviewCategoriesIsSet_;
    std::string reviewModules_;
    bool reviewModulesIsSet_;
    std::string proposerId_;
    bool proposerIdIsSet_;
    std::string lineTypes_;
    bool lineTypesIsSet_;
    PositionDto position_;
    bool positionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CreateMergeRequestNoteDto_H_
