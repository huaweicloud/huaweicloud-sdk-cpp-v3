
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListEnabledControlsResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListEnabledControlsResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/EnabledControl.h>
#include <huaweicloud/rgc/v1/model/PageInfoDto.h>
#include <vector>

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
class HUAWEICLOUD_RGC_V1_EXPORT  ListEnabledControlsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEnabledControlsResponse();
    virtual ~ListEnabledControlsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnabledControlsResponse members

    /// <summary>
    /// 开启控制策略信息。
    /// </summary>

    std::vector<EnabledControl>& getEnabledControls();
    bool enabledControlsIsSet() const;
    void unsetenabledControls();
    void setEnabledControls(const std::vector<EnabledControl>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoDto getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoDto& value);


protected:
    std::vector<EnabledControl> enabledControls_;
    bool enabledControlsIsSet_;
    PageInfoDto pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListEnabledControlsResponse_H_
