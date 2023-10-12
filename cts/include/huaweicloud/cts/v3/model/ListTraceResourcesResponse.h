
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTraceResourcesResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTraceResourcesResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/TraceResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListTraceResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTraceResourcesResponse();
    virtual ~ListTraceResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTraceResourcesResponse members

    /// <summary>
    /// 返回的资源类型列表。
    /// </summary>

    std::vector<TraceResource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<TraceResource>& value);


protected:
    std::vector<TraceResource> resources_;
    bool resourcesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTraceResourcesResponse_H_
