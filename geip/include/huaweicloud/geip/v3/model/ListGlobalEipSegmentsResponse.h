
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipSegmentsResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipSegmentsResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/ListGlobalEipSegments.h>
#include <string>
#include <vector>
#include <huaweicloud/geip/v3/model/ListGlobalEipsResponseBody_page_info.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListGlobalEipSegmentsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGlobalEipSegmentsResponse();
    virtual ~ListGlobalEipSegmentsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGlobalEipSegmentsResponse members

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 全域弹性公网IP段对象
    /// </summary>

    std::vector<ListGlobalEipSegments>& getGlobalEipSegments();
    bool globalEipSegmentsIsSet() const;
    void unsetglobalEipSegments();
    void setGlobalEipSegments(const std::vector<ListGlobalEipSegments>& value);

    /// <summary>
    /// 
    /// </summary>

    ListGlobalEipsResponseBody_page_info getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const ListGlobalEipsResponseBody_page_info& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::vector<ListGlobalEipSegments> globalEipSegments_;
    bool globalEipSegmentsIsSet_;
    ListGlobalEipsResponseBody_page_info pageInfo_;
    bool pageInfoIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipSegmentsResponse_H_
