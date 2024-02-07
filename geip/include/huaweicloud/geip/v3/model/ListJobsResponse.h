
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListJobsResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListJobsResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/ListJobs.h>
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
class HUAWEICLOUD_GEIP_V3_EXPORT  ListJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListJobsResponse();
    virtual ~ListJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobsResponse members

    /// <summary>
    /// 本次请求的编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 响应job对象
    /// </summary>

    std::vector<ListJobs>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<ListJobs>& value);

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
    std::vector<ListJobs> jobs_;
    bool jobsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListJobsResponse_H_
