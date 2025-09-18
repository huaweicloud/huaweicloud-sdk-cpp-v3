
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemStatusFlowVo_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemStatusFlowVo_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/StatusFlowDirectToVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项流转数据对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  WorkItemStatusFlowVo
    : public ModelBase
{
public:
    WorkItemStatusFlowVo();
    virtual ~WorkItemStatusFlowVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkItemStatusFlowVo members

    /// <summary>
    ///  父状态的名称
    /// </summary>

    std::string getParentName() const;
    bool parentNameIsSet() const;
    void unsetparentName();
    void setParentName(const std::string& value);

    /// <summary>
    /// 父状态的类型
    /// </summary>

    std::string getParentType() const;
    bool parentTypeIsSet() const;
    void unsetparentType();
    void setParentType(const std::string& value);

    /// <summary>
    /// 状态id
    /// </summary>

    std::string getStatusId() const;
    bool statusIdIsSet() const;
    void unsetstatusId();
    void setStatusId(const std::string& value);

    /// <summary>
    /// 状态名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 状态类型
    /// </summary>

    std::string getStatusType() const;
    bool statusTypeIsSet() const;
    void unsetstatusType();
    void setStatusType(const std::string& value);

    /// <summary>
    /// 流转到的数据
    /// </summary>

    std::vector<StatusFlowDirectToVo>& getDirectTo();
    bool directToIsSet() const;
    void unsetdirectTo();
    void setDirectTo(const std::vector<StatusFlowDirectToVo>& value);

    /// <summary>
    /// 处理人的uuid
    /// </summary>

    std::string getAssignTo() const;
    bool assignToIsSet() const;
    void unsetassignTo();
    void setAssignTo(const std::string& value);

    /// <summary>
    /// 评论内容
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 处理人是否必填
    /// </summary>

    bool isRequiredAssign() const;
    bool requiredAssignIsSet() const;
    void unsetrequiredAssign();
    void setRequiredAssign(bool value);

    /// <summary>
    /// 评论是否必填
    /// </summary>

    bool isRequiredNotes() const;
    bool requiredNotesIsSet() const;
    void unsetrequiredNotes();
    void setRequiredNotes(bool value);

    /// <summary>
    /// 是否是字段值，true 处理人的信息是字段值， false 处理人的值是用户的信息,固定值
    /// </summary>

    bool isFieldType() const;
    bool fieldTypeIsSet() const;
    void unsetfieldType();
    void setFieldType(bool value);

    /// <summary>
    /// 父状态的uuid
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);


protected:
    std::string parentName_;
    bool parentNameIsSet_;
    std::string parentType_;
    bool parentTypeIsSet_;
    std::string statusId_;
    bool statusIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string statusType_;
    bool statusTypeIsSet_;
    std::vector<StatusFlowDirectToVo> directTo_;
    bool directToIsSet_;
    std::string assignTo_;
    bool assignToIsSet_;
    std::string comment_;
    bool commentIsSet_;
    bool requiredAssign_;
    bool requiredAssignIsSet_;
    bool requiredNotes_;
    bool requiredNotesIsSet_;
    bool fieldType_;
    bool fieldTypeIsSet_;
    std::string parentId_;
    bool parentIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_WorkItemStatusFlowVo_H_
