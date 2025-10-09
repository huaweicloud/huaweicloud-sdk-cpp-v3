
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvailableZoneResponseBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvailableZoneResponseBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 可用区详情
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetAvailableZoneResponseBody
    : public ModelBase
{
public:
    GetAvailableZoneResponseBody();
    virtual ~GetAvailableZoneResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetAvailableZoneResponseBody members

    /// <summary>
    /// **参数解释**： 可用区ID **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 可用区名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 可用区按所在区域显示的名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**： 可用区所属的可用区组，一个可用区可能属于多个可用区组 **取值范围**： 不涉及
    /// </summary>

    std::vector<std::string>& getAzGroupIds();
    bool azGroupIdsIsSet() const;
    void unsetazGroupIds();
    void setAzGroupIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**： EIP所属的组，IES边缘场景为可用区ID，中心区统一为“center” **取值范围**： 不涉及
    /// </summary>

    std::string getPublicBorderGroup() const;
    bool publicBorderGroupIsSet() const;
    void unsetpublicBorderGroup();
    void setPublicBorderGroup(const std::string& value);

    /// <summary>
    /// **参数解释**： 可用区分类 **取值范围**： - Default: 中心云可用区 - IES: 专属云可用区 - HomeZone: 智能边缘云可用区
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// **参数解释**： 可用区名称别名 **取值范围**： 不涉及
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::vector<std::string> azGroupIds_;
    bool azGroupIdsIsSet_;
    std::string publicBorderGroup_;
    bool publicBorderGroupIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string alias_;
    bool aliasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetAvailableZoneResponseBody_H_
