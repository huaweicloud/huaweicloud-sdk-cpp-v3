
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListHarmonySoftBusResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListHarmonySoftBusResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/HarmonySoftBusResponseDTO.h>
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
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListHarmonySoftBusResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHarmonySoftBusResponse();
    virtual ~ListHarmonySoftBusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHarmonySoftBusResponse members

    /// <summary>
    /// 设备组信息列表。
    /// </summary>

    std::vector<HarmonySoftBusResponseDTO>& getHarmonySoftBuses();
    bool harmonySoftBusesIsSet() const;
    void unsetharmonySoftBuses();
    void setHarmonySoftBuses(const std::vector<HarmonySoftBusResponseDTO>& value);

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);


protected:
    std::vector<HarmonySoftBusResponseDTO> harmonySoftBuses_;
    bool harmonySoftBusesIsSet_;
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

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListHarmonySoftBusResponse_H_
