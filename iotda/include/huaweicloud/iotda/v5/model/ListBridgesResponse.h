
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBridgesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBridgesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/BridgeResponse.h>
#include <huaweicloud/iotda/v5/model/Page.h>
#include <vector>

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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListBridgesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBridgesResponse();
    virtual ~ListBridgesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBridgesResponse members

    /// <summary>
    /// 网桥列表。
    /// </summary>

    std::vector<BridgeResponse>& getBridges();
    bool bridgesIsSet() const;
    void unsetbridges();
    void setBridges(const std::vector<BridgeResponse>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<BridgeResponse> bridges_;
    bool bridgesIsSet_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListBridgesResponse_H_
