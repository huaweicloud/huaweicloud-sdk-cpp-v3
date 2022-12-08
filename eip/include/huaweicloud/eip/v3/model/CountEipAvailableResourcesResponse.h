
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_CountEipAvailableResourcesResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_CountEipAvailableResourcesResponse_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  CountEipAvailableResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    CountEipAvailableResourcesResponse();
    virtual ~CountEipAvailableResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CountEipAvailableResourcesResponse members

    /// <summary>
    /// - 功能说明：返回结果
    /// </summary>

    int32_t getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(int32_t value);


protected:
    int32_t result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_CountEipAvailableResourcesResponse_H_
