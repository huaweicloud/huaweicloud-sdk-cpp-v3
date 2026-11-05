
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListServiceStatusesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListServiceStatusesRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListServiceStatusesRequest
    : public ModelBase
{
public:
    ListServiceStatusesRequest();
    virtual ~ListServiceStatusesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListServiceStatusesRequest members

    /// <summary>
    /// **参数解释**：服务编码列表，逗号分隔，如aom,cce,ces,swr-ee。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getServiceCodes() const;
    bool serviceCodesIsSet() const;
    void unsetserviceCodes();
    void setServiceCodes(const std::string& value);


protected:
    std::string serviceCodes_;
    bool serviceCodesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListServiceStatusesRequest& dereference_from_shared_ptr(std::shared_ptr<ListServiceStatusesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListServiceStatusesRequest_H_
