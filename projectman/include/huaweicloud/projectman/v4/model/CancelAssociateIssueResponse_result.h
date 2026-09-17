
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelAssociateIssueResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelAssociateIssueResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 被取消的关联关系记录详情,包含关联关系的所有属性信息。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CancelAssociateIssueResponse_result
    : public ModelBase
{
public:
    CancelAssociateIssueResponse_result();
    virtual ~CancelAssociateIssueResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelAssociateIssueResponse_result members

    /// <summary>
    /// **参数解释**： 关联关系唯一标识。 **取值范围**： 32个字符,由小写字母和数字组成。
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// **参数解释**： 源工作项ID。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// **参数解释**： 源项目数字ID。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int32_t value);

    /// <summary>
    /// **参数解释**： 关联类型。 **取值范围**： - associate：关联工作项。
    /// </summary>

    std::string getAssociateType() const;
    bool associateTypeIsSet() const;
    void unsetassociateType();
    void setAssociateType(const std::string& value);

    /// <summary>
    /// **参数解释**： 被关联工作项ID。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getAssociateIssueId() const;
    bool associateIssueIdIsSet() const;
    void unsetassociateIssueId();
    void setAssociateIssueId(int32_t value);

    /// <summary>
    /// **参数解释**： 被关联项目数字ID。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getAssociateProjectId() const;
    bool associateProjectIdIsSet() const;
    void unsetassociateProjectId();
    void setAssociateProjectId(int32_t value);

    /// <summary>
    /// **参数解释**： 关联关系创建时间。 **取值范围**： 格式为yyyy-MM-dd HH:mm:ss。
    /// </summary>

    utility::datetime getCreatedOn() const;
    bool createdOnIsSet() const;
    void unsetcreatedOn();
    void setCreatedOn(const utility::datetime& value);

    /// <summary>
    /// **参数解释**： 创建该关联关系的用户ID。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getAuthorId() const;
    bool authorIdIsSet() const;
    void unsetauthorId();
    void setAuthorId(int32_t value);

    /// <summary>
    /// **参数解释**： 关联关系有效标识。 **取值范围**： - true：关联有效。 - false：关联已失效。
    /// </summary>

    bool isFlag() const;
    bool flagIsSet() const;
    void unsetflag();
    void setFlag(bool value);


protected:
    std::string identifier_;
    bool identifierIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    int32_t projectId_;
    bool projectIdIsSet_;
    std::string associateType_;
    bool associateTypeIsSet_;
    int32_t associateIssueId_;
    bool associateIssueIdIsSet_;
    int32_t associateProjectId_;
    bool associateProjectIdIsSet_;
    utility::datetime createdOn_;
    bool createdOnIsSet_;
    int32_t authorId_;
    bool authorIdIsSet_;
    bool flag_;
    bool flagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelAssociateIssueResponse_result_H_
