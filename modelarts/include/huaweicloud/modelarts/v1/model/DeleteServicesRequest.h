
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteServicesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteServicesRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 提供待删除的services id列表。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteServicesRequest
    : public ModelBase
{
public:
    DeleteServicesRequest();
    virtual ~DeleteServicesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteServicesRequest members

    /// <summary>
    /// **参数解释：** 待删除的servicesid列表。服务ID在[创建服务](CreateInferService.xml)时即可在返回体中获取，也可通过[查询服务列表](ListInferServices.xml)获取当前用户拥有的服务，其中service_id字段即为服务ID。 **约束限制：** 不涉及。 **取值范围：** 服务ID。 **默认取值：** 不涉及。
    /// </summary>

    std::vector<std::string>& getServiceIds();
    bool serviceIdsIsSet() const;
    void unsetserviceIds();
    void setServiceIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> serviceIds_;
    bool serviceIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteServicesRequest_H_
