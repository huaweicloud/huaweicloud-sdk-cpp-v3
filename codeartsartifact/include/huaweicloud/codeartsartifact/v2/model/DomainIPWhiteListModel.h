
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DomainIPWhiteListModel_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DomainIPWhiteListModel_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  DomainIPWhiteListModel
    : public ModelBase
{
public:
    DomainIPWhiteListModel();
    virtual ~DomainIPWhiteListModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainIPWhiteListModel members

    /// <summary>
    /// **参数解释**: id。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int64_t value);

    /// <summary>
    /// **参数解释**: 租户id。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**: 区域。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**: 类型。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**: ip地址。 **取值范围**: 不涉及。 
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(int64_t value);

    /// <summary>
    /// **参数解释**: 更新时间。 **取值范围**: 不涉及。 
    /// </summary>

    int64_t getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(int64_t value);


protected:
    int64_t id_;
    bool idIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    int64_t created_;
    bool createdIsSet_;
    int64_t updated_;
    bool updatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_DomainIPWhiteListModel_H_
