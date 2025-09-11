
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstanceFlavorsResponse_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstanceFlavorsResponse_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/InstanceFlavor.h>
#include <huaweicloud/iotdm/v5/model/Page.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  ListInstanceFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceFlavorsResponse();
    virtual ~ListInstanceFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceFlavorsResponse members

    /// <summary>
    /// 
    /// </summary>

    Page getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const Page& value);

    /// <summary>
    /// **参数说明**：设备接入实例规格的详情列表。 
    /// </summary>

    std::vector<InstanceFlavor>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<InstanceFlavor>& value);


protected:
    Page page_;
    bool pageIsSet_;
    std::vector<InstanceFlavor> flavors_;
    bool flavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_ListInstanceFlavorsResponse_H_
