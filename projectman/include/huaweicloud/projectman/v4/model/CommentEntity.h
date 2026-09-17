
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentEntity_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CommentExtendAttribute.h>
#include <huaweicloud/projectman/v4/model/UserVO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 评论实体对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CommentEntity
    : public ModelBase
{
public:
    CommentEntity();
    virtual ~CommentEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommentEntity members

    /// <summary>
    /// **参数解释**： 评论ID。 **默认取值**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论类型。 **取值范围**： - comment：评论 - reply：回复 - operation：系统操作。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论元数据类型。 **取值范围**： 固定为comment。 **默认取值**： 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否显示在置顶区域。 **取值范围**： - true：显示。 - false： 不显示。 **默认取值**： 不涉及。
    /// </summary>

    bool isTop() const;
    bool topIsSet() const;
    void unsettop();
    void setTop(bool value);

    /// <summary>
    /// **参数解释**： 置顶时间的unix时间戳，单位：毫秒。当有多条置顶评论时，最后置顶的评论显示在最上层。 **默认取值**： 不涉及。
    /// </summary>

    std::string getTopTime() const;
    bool topTimeIsSet() const;
    void unsettopTime();
    void setTopTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论内容，表现形式为html标签。 **默认取值**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论关联的工作项ID。 **默认取值**： 不涉及。
    /// </summary>

    std::string getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前评论是否被置顶。 **取值范围**： - true：置顶。 - false： 不置顶。 **默认取值**： 不涉及。
    /// </summary>

    bool isTopFlag() const;
    bool topFlagIsSet() const;
    void unsettopFlag();
    void setTopFlag(bool value);

    /// <summary>
    /// **参数解释**： 评论创建人ID。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释**： 评论创建时间。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserVO getCreatorInfo() const;
    bool creatorInfoIsSet() const;
    void unsetcreatorInfo();
    void setCreatorInfo(const UserVO& value);

    /// <summary>
    /// **参数解释**： 评论的一些扩展属性，表现为json字符串。 **默认取值**： 不涉及。
    /// </summary>

    std::string getExtendAttribute() const;
    bool extendAttributeIsSet() const;
    void unsetextendAttribute();
    void setExtendAttribute(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommentExtendAttribute getExtendAttributeObj() const;
    bool extendAttributeObjIsSet() const;
    void unsetextendAttributeObj();
    void setExtendAttributeObj(const CommentExtendAttribute& value);

    /// <summary>
    /// **参数解释**： 评论的扩展属性对象数组。 **默认取值**： 不涉及。
    /// </summary>

    std::vector<CommentExtendAttribute>& getExtendAttributeObjs();
    bool extendAttributeObjsIsSet() const;
    void unsetextendAttributeObjs();
    void setExtendAttributeObjs(const std::vector<CommentExtendAttribute>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string type_;
    bool typeIsSet_;
    bool top_;
    bool topIsSet_;
    std::string topTime_;
    bool topTimeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string issueId_;
    bool issueIdIsSet_;
    bool topFlag_;
    bool topFlagIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    UserVO creatorInfo_;
    bool creatorInfoIsSet_;
    std::string extendAttribute_;
    bool extendAttributeIsSet_;
    CommentExtendAttribute extendAttributeObj_;
    bool extendAttributeObjIsSet_;
    std::vector<CommentExtendAttribute> extendAttributeObjs_;
    bool extendAttributeObjsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CommentEntity_H_
