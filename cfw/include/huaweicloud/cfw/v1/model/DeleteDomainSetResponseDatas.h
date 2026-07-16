
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteDomainSetResponseDatas_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteDomainSetResponseDatas_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/DomainSetId.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteDomainSetResponseDatas
    : public ModelBase
{
public:
    DeleteDomainSetResponseDatas();
    virtual ~DeleteDomainSetResponseDatas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDomainSetResponseDatas members

    /// <summary>
    /// **参数解释**： 批量删除域名组响应信息 **取值范围**： 不涉及 
    /// </summary>

    std::vector<DomainSetId>& getResponseDatas();
    bool responseDatasIsSet() const;
    void unsetresponseDatas();
    void setResponseDatas(const std::vector<DomainSetId>& value);


protected:
    std::vector<DomainSetId> responseDatas_;
    bool responseDatasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteDomainSetResponseDatas_H_
