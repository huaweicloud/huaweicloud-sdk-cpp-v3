
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointsResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/smn/v2/model/ApplicationEndpoint.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListApplicationEndpointsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApplicationEndpointsResponse();
    virtual ~ListApplicationEndpointsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListApplicationEndpointsResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 是否有下一页标识。
    /// </summary>

    bool isNextPageFlag() const;
    bool nextPageFlagIsSet() const;
    void unsetnextPageFlag();
    void setNextPageFlag(bool value);

    /// <summary>
    /// Application_endpoint结构体数。
    /// </summary>

    std::vector<ApplicationEndpoint>& getEndpoints();
    bool endpointsIsSet() const;
    void unsetendpoints();
    void setEndpoints(const std::vector<ApplicationEndpoint>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    bool nextPageFlag_;
    bool nextPageFlagIsSet_;
    std::vector<ApplicationEndpoint> endpoints_;
    bool endpointsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointsResponse_H_
