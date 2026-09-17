
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueNew_assigned_to_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueNew_assigned_to_H_


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
/// **参数解释：** 工作项责任人。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueNew_assigned_to
    : public ModelBase
{
public:
    IssueNew_assigned_to();
    virtual ~IssueNew_assigned_to();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueNew_assigned_to members

    /// <summary>
    /// **参数解释：** 用户名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFirstName() const;
    bool firstNameIsSet() const;
    void unsetfirstName();
    void setFirstName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户姓名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getLastName() const;
    bool lastNameIsSet() const;
    void unsetlastName();
    void setLastName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户32位uuid。 **取值范围：** 不涉及。
    /// </summary>

    std::string getIdentifier() const;
    bool identifierIsSet() const;
    void unsetidentifier();
    void setIdentifier(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户头像id。 **取值范围：** 不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户昵称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getAssignedNickName() const;
    bool assignedNickNameIsSet() const;
    void unsetassignedNickName();
    void setAssignedNickName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户数字id。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);


protected:
    std::string firstName_;
    bool firstNameIsSet_;
    std::string lastName_;
    bool lastNameIsSet_;
    std::string identifier_;
    bool identifierIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    std::string assignedNickName_;
    bool assignedNickNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueNew_assigned_to_H_
