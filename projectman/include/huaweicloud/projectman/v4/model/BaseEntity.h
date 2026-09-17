
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseEntity_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseEntity_H_


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
/// 通用实体信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BaseEntity
    : public ModelBase
{
public:
    BaseEntity();
    virtual ~BaseEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BaseEntity members

    /// <summary>
    /// **参数解释**： 租户ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改人。 **取值范围**： 不涉及。
    /// </summary>

    std::string getModifiedBy() const;
    bool modifiedByIsSet() const;
    void unsetmodifiedBy();
    void setModifiedBy(const std::string& value);

    /// <summary>
    /// **参数解释**： 修改时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getModifiedDate() const;
    bool modifiedDateIsSet() const;
    void unsetmodifiedDate();
    void setModifiedDate(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建人。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetcreatedDate();
    void setCreatedDate(const std::string& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string modifiedBy_;
    bool modifiedByIsSet_;
    std::string modifiedDate_;
    bool modifiedDateIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string createdDate_;
    bool createdDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseEntity_H_
