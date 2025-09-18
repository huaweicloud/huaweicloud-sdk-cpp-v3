
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListIpGroupsResponse_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListIpGroupsResponse_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/IpGroupDetail.h>
#include <huaweicloud/ga/v1/model/PageInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ListIpGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIpGroupsResponse();
    virtual ~ListIpGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIpGroupsResponse members

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<IpGroupDetail>& getIpGroups();
    bool ipGroupsIsSet() const;
    void unsetipGroups();
    void setIpGroups(const std::vector<IpGroupDetail>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::vector<IpGroupDetail> ipGroups_;
    bool ipGroupsIsSet_;
    PageInfo pageInfo_;
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

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListIpGroupsResponse_H_
