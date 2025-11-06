
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionBodyDto_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/PositionDto.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CreateMergeRequestDiscussionBodyDto
    : public ModelBase
{
public:
    CreateMergeRequestDiscussionBodyDto();
    virtual ~CreateMergeRequestDiscussionBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMergeRequestDiscussionBodyDto members

    /// <summary>
    /// 检视意见内容
    /// </summary>

    std::string getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::string& value);

    /// <summary>
    /// 严重程度
    /// </summary>

    std::string getSeverity() const;
    bool severityIsSet() const;
    void unsetseverity();
    void setSeverity(const std::string& value);

    /// <summary>
    /// 指派人id
    /// </summary>

    std::string getAssigneeId() const;
    bool assigneeIdIsSet() const;
    void unsetassigneeId();
    void setAssigneeId(const std::string& value);

    /// <summary>
    /// 检视意见分类
    /// </summary>

    std::string getReviewCategories() const;
    bool reviewCategoriesIsSet() const;
    void unsetreviewCategories();
    void setReviewCategories(const std::string& value);

    /// <summary>
    /// 检视意见模块
    /// </summary>

    std::string getReviewModules() const;
    bool reviewModulesIsSet() const;
    void unsetreviewModules();
    void setReviewModules(const std::string& value);

    /// <summary>
    /// 提出人id
    /// </summary>

    std::string getProposerId() const;
    bool proposerIdIsSet() const;
    void unsetproposerId();
    void setProposerId(const std::string& value);

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
    PositionDto position_;
    bool positionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateMergeRequestDiscussionBodyDto_H_
