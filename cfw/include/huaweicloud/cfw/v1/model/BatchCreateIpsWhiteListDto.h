
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchCreateIpsWhiteListDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchCreateIpsWhiteListDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/IpsWhiteListDto.h>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  BatchCreateIpsWhiteListDto
    : public ModelBase
{
public:
    BatchCreateIpsWhiteListDto();
    virtual ~BatchCreateIpsWhiteListDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateIpsWhiteListDto members

    /// <summary>
    /// **参数解释**：  添加的IPS白名单列表 **约束限制**：  不涉及  **取值范围**： 不涉及  **默认取值**：  不涉及
    /// </summary>

    std::vector<IpsWhiteListDto>& getIpsWhiteListDtoList();
    bool ipsWhiteListDtoListIsSet() const;
    void unsetipsWhiteListDtoList();
    void setIpsWhiteListDtoList(const std::vector<IpsWhiteListDto>& value);


protected:
    std::vector<IpsWhiteListDto> ipsWhiteListDtoList_;
    bool ipsWhiteListDtoListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BatchCreateIpsWhiteListDto_H_
