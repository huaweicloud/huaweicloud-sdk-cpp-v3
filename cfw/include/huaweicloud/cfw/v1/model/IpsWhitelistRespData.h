
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhitelistRespData_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhitelistRespData_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CFW_V1_EXPORT  IpsWhitelistRespData
    : public ModelBase
{
public:
    IpsWhitelistRespData();
    virtual ~IpsWhitelistRespData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpsWhitelistRespData members

    /// <summary>
    /// **参数解释**：  白名单ID列表 **取值范围**：  不涉及
    /// </summary>

    std::vector<std::string>& getListIds();
    bool listIdsIsSet() const;
    void unsetlistIds();
    void setListIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> listIds_;
    bool listIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_IpsWhitelistRespData_H_
