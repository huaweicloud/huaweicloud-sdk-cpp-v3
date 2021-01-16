
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_ListQuotasResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_ListQuotasResponse_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/ResourceResp.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  ListQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListQuotasResponse();
    virtual ~ListQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListQuotasResponse members

    /// <summary>
    /// 
    /// </summary>

    ResourceResp getQuotas() const;
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const ResourceResp& value);


protected:
    ResourceResp quotas_;
    bool quotasIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_ListQuotasResponse_H_
