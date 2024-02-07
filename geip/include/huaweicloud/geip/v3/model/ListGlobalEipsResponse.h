
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipsResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipsResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/geip/v3/model/ListGlobalEips.h>
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
class HUAWEICLOUD_GEIP_V3_EXPORT  ListGlobalEipsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGlobalEipsResponse();
    virtual ~ListGlobalEipsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGlobalEipsResponse members

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 全域弹性公网IP列表
    /// </summary>

    std::vector<ListGlobalEips>& getGlobalEips();
    bool globalEipsIsSet() const;
    void unsetglobalEips();
    void setGlobalEips(const std::vector<ListGlobalEips>& value);

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
    std::vector<ListGlobalEips> globalEips_;
    bool globalEipsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGlobalEipsResponse_H_
