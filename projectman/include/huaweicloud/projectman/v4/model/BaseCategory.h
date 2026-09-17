
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseCategory_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseCategory_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/BaseEntity.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Category基础信息
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BaseCategory
    : public ModelBase
{
public:
    BaseCategory();
    virtual ~BaseCategory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BaseCategory members

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

    /// <summary>
    /// **参数解释**： 对象类型编码。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 编号前缀。 **取值范围**： 不涉及。
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户下项目空间唯一标识ID。 **取值范围**： - -1：自定义工作项类型 - 0：预设工作项模型
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 图标。 **取值范围**： 不涉及。
    /// </summary>

    std::string getIcon() const;
    bool iconIsSet() const;
    void unseticon();
    void setIcon(const std::string& value);

    /// <summary>
    /// **参数解释**： 颜色。 **取值范围**： 不涉及。
    /// </summary>

    std::string getColor() const;
    bool colorIsSet() const;
    void unsetcolor();
    void setColor(const std::string& value);

    /// <summary>
    /// **参数解释**： 描述信息。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 定义类型。 **取值范围**： - 1~3 系统级别 - 4 租户级别
    /// </summary>

    int64_t getDefinitionType() const;
    bool definitionTypeIsSet() const;
    void unsetdefinitionType();
    void setDefinitionType(int64_t value);

    /// <summary>
    /// **参数解释**： 类别ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTypeId() const;
    bool typeIdIsSet() const;
    void unsettypeId();
    void setTypeId(const std::string& value);


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
    std::string code_;
    bool codeIsSet_;
    std::string prefix_;
    bool prefixIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string icon_;
    bool iconIsSet_;
    std::string color_;
    bool colorIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t definitionType_;
    bool definitionTypeIsSet_;
    std::string typeId_;
    bool typeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BaseCategory_H_
