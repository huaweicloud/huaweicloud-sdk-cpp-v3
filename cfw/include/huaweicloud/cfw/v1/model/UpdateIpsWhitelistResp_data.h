
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateIpsWhitelistResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateIpsWhitelistResp_data_H_


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
/// **参数解释** 返回数据 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateIpsWhitelistResp_data
    : public ModelBase
{
public:
    UpdateIpsWhitelistResp_data();
    virtual ~UpdateIpsWhitelistResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIpsWhitelistResp_data members

    /// <summary>
    /// **参数解释** 白名单id  **取值范围**： 不涉及
    /// </summary>

    std::string getIpsWhitelistId() const;
    bool ipsWhitelistIdIsSet() const;
    void unsetipsWhitelistId();
    void setIpsWhitelistId(const std::string& value);


protected:
    std::string ipsWhitelistId_;
    bool ipsWhitelistIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateIpsWhitelistResp_data_H_
