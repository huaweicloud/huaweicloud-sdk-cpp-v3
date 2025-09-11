
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListCloudServiceResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListCloudServiceResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/ListCloudServiceResponseItemInfo.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_SMN_V2_EXPORT  ListCloudServiceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCloudServiceResponse();
    virtual ~ListCloudServiceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCloudServiceResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 云服务信息列表。
    /// </summary>

    std::vector<ListCloudServiceResponseItemInfo>& getCloudServices();
    bool cloudServicesIsSet() const;
    void unsetcloudServices();
    void setCloudServices(const std::vector<ListCloudServiceResponseItemInfo>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::vector<ListCloudServiceResponseItemInfo> cloudServices_;
    bool cloudServicesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListCloudServiceResponse_H_
