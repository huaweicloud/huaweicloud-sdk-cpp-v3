
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_EnableMultiAccountResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_EnableMultiAccountResp_data_H_


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
/// **参数解释**： 响应信息 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  EnableMultiAccountResp_data
    : public ModelBase
{
public:
    EnableMultiAccountResp_data();
    virtual ~EnableMultiAccountResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnableMultiAccountResp_data members

    /// <summary>
    /// **参数解释**： 防火墙ID **取值范围**： 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 防火墙名称 **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 云防火墙可信服务状态 **取值范围**： 1 已开启
    /// </summary>

    int32_t getTrustServiceStatus() const;
    bool trustServiceStatusIsSet() const;
    void unsettrustServiceStatus();
    void setTrustServiceStatus(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t trustServiceStatus_;
    bool trustServiceStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_EnableMultiAccountResp_data_H_
