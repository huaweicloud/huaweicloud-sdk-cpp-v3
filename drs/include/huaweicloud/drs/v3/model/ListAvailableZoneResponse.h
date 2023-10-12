
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableZoneResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableZoneResponse_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/AzInfoResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ListAvailableZoneResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAvailableZoneResponse();
    virtual ~ListAvailableZoneResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAvailableZoneResponse members

    /// <summary>
    /// 可用区信息
    /// </summary>

    std::vector<AzInfoResp>& getAzInfos();
    bool azInfosIsSet() const;
    void unsetazInfos();
    void setAzInfos(const std::vector<AzInfoResp>& value);


protected:
    std::vector<AzInfoResp> azInfos_;
    bool azInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ListAvailableZoneResponse_H_
