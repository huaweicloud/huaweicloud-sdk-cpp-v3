
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateAgencyResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateAgencyResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/Agency.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateAgencyResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAgencyResponse();
    virtual ~CreateAgencyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAgencyResponse members

    /// <summary>
    /// 委托详情列表。
    /// </summary>

    std::vector<Agency>& getAgencies();
    bool agenciesIsSet() const;
    void unsetagencies();
    void setAgencies(const std::vector<Agency>& value);


protected:
    std::vector<Agency> agencies_;
    bool agenciesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateAgencyResponse_H_
