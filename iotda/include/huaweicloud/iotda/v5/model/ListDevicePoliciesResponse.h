
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicePoliciesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicePoliciesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>
#include <huaweicloud/iotda/v5/model/ListDevicePolicyBase.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListDevicePoliciesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDevicePoliciesResponse();
    virtual ~ListDevicePoliciesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDevicePoliciesResponse members

    /// <summary>
    /// 策略信息列表。
    /// </summary>

    std::vector<ListDevicePolicyBase>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<ListDevicePolicyBase>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<ListDevicePolicyBase> policies_;
    bool policiesIsSet_;
    Page page_;
    bool pageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListDevicePoliciesResponse_H_
