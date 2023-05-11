
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListQuotasResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListQuotasResponse_H_

#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cts/v3/model/CtsQuota.h>

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
class HUAWEICLOUD_CTS_V3_EXPORT  ListQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListQuotasResponse();
    virtual ~ListQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListQuotasResponse members

    /// <summary>
    /// 本次查询追踪器列表返回的追踪器数组。
    /// </summary>

    std::vector<CtsQuota>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<CtsQuota>& value);


protected:
    std::vector<CtsQuota> resources_;
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

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListQuotasResponse_H_
