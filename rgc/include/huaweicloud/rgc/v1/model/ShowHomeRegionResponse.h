
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowHomeRegionResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowHomeRegionResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowHomeRegionResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHomeRegionResponse();
    virtual ~ShowHomeRegionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHomeRegionResponse members

    /// <summary>
    /// 区域名称。
    /// </summary>

    std::string getHomeRegion() const;
    bool homeRegionIsSet() const;
    void unsethomeRegion();
    void setHomeRegion(const std::string& value);


protected:
    std::string homeRegion_;
    bool homeRegionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowHomeRegionResponse_H_
