
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelAssociateIssueRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelAssociateIssueRequest_H_


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
/// 取消关联工作项请求对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  CancelAssociateIssueRequest
    : public ModelBase
{
public:
    CancelAssociateIssueRequest();
    virtual ~CancelAssociateIssueRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelAssociateIssueRequest members

    /// <summary>
    /// **参数解释**： 源项目UUID。标识执行取消关联操作的源工作项所属项目。 **约束限制**： 32位UUID字符串,必填字段。 **取值范围**： 32个字符,由小写字母和数字组成。 **默认取值**： 不涉及。
    /// </summary>

    std::string getProjectUUId() const;
    bool projectUUIdIsSet() const;
    void unsetprojectUUId();
    void setProjectUUId(const std::string& value);

    /// <summary>
    /// **参数解释**： 目标项目UUID。标识被取消关联工作项所属的项目;跨项目取消时必填。 **约束限制**： 32位UUID字符串。 **取值范围**： 32个字符,由小写字母和数字组成。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAttachProjectUUId() const;
    bool attachProjectUUIdIsSet() const;
    void unsetattachProjectUUId();
    void setAttachProjectUUId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源工作项ID。即需要解除关联关系的工作项唯一ID。 **约束限制**： 工作项必须存在且未被归档。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getIssueId() const;
    bool issueIdIsSet() const;
    void unsetissueId();
    void setIssueId(int32_t value);

    /// <summary>
    /// **参数解释**： 待取消关联的目标工作项ID。 **约束限制**： 必须与源工作项已存在关联关系;不存在则返回错误码DEV_21_400806。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    int32_t getAttachIssueId() const;
    bool attachIssueIdIsSet() const;
    void unsetattachIssueId();
    void setAttachIssueId(int32_t value);


protected:
    std::string projectUUId_;
    bool projectUUIdIsSet_;
    std::string attachProjectUUId_;
    bool attachProjectUUIdIsSet_;
    int32_t issueId_;
    bool issueIdIsSet_;
    int32_t attachIssueId_;
    bool attachIssueIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_CancelAssociateIssueRequest_H_
