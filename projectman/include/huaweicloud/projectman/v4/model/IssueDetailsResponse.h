
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/projectman/v4/model/SecurityLevelResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作项详情响应
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  IssueDetailsResponse
    : public ModelBase
{
public:
    IssueDetailsResponse();
    virtual ~IssueDetailsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IssueDetailsResponse members

    /// <summary>
    /// **参数解释**： 工作项ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项编号。 **取值范围**： 不涉及。
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项类型。 **取值范围**： 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 停留天数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getStayDays() const;
    bool stayDaysIsSet() const;
    void unsetstayDays();
    void setStayDays(int32_t value);

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项创建时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 工作项标题。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SecurityLevelResult getSecurityLevel() const;
    bool securityLevelIsSet() const;
    void unsetsecurityLevel();
    void setSecurityLevel(const SecurityLevelResult& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t stayDays_;
    bool stayDaysIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;
    std::string title_;
    bool titleIsSet_;
    SecurityLevelResult securityLevel_;
    bool securityLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_IssueDetailsResponse_H_
