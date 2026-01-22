
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpRegionDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpRegionDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  IpRegionDto
    : public ModelBase
{
public:
    IpRegionDto();
    virtual ~IpRegionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpRegionDto members

    /// <summary>
    /// **参数解释**： 区域ID，用于明确规则引用地域，可通过[获取账号、IAM用户、项目、用户组、区域、委托的名称和ID](cfw_02_0030.xml)获取。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 区域中文描述，仅当区域为中国区域时使用，可通过[地域信息表](cfw_02_0031.xml)获取 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDescriptionCn() const;
    bool descriptionCnIsSet() const;
    void unsetdescriptionCn();
    void setDescriptionCn(const std::string& value);

    /// <summary>
    /// **参数解释**： 区域英文描述，仅当区域为非中国区域时使用，可通过[地域信息表](cfw_02_0031.xml)获取。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getDescriptionEn() const;
    bool descriptionEnIsSet() const;
    void unsetdescriptionEn();
    void setDescriptionEn(const std::string& value);

    /// <summary>
    /// **参数解释**： 区域类型 **约束限制**： 不涉及 **取值范围**： - 0：国家 - 1：省份 - 2：大洲 **默认取值**： 不涉及
    /// </summary>

    int32_t getRegionType() const;
    bool regionTypeIsSet() const;
    void unsetregionType();
    void setRegionType(int32_t value);


protected:
    std::string regionId_;
    bool regionIdIsSet_;
    std::string descriptionCn_;
    bool descriptionCnIsSet_;
    std::string descriptionEn_;
    bool descriptionEnIsSet_;
    int32_t regionType_;
    bool regionTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpRegionDto_H_
