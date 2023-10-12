
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListActiveActiveDomainsResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListActiveActiveDomainsResponse_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowActiveActiveDomainParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListActiveActiveDomainsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListActiveActiveDomainsResponse();
    virtual ~ListActiveActiveDomainsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListActiveActiveDomainsResponse members

    /// <summary>
    /// 双活域列表信息。
    /// </summary>

    std::vector<ShowActiveActiveDomainParams>& getDomains();
    bool domainsIsSet() const;
    void unsetdomains();
    void setDomains(const std::vector<ShowActiveActiveDomainParams>& value);


protected:
    std::vector<ShowActiveActiveDomainParams> domains_;
    bool domainsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListActiveActiveDomainsResponse_H_
