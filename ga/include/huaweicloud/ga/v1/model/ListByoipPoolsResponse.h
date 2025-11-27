
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListByoipPoolsResponse_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListByoipPoolsResponse_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/ByoipPool.h>
#include <string>
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
class HUAWEICLOUD_GA_V1_EXPORT  ListByoipPoolsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListByoipPoolsResponse();
    virtual ~ListByoipPoolsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListByoipPoolsResponse members

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 自带IP地址池列表。
    /// </summary>

    std::vector<ByoipPool>& getByoipPools();
    bool byoipPoolsIsSet() const;
    void unsetbyoipPools();
    void setByoipPools(const std::vector<ByoipPool>& value);

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
    std::vector<ByoipPool> byoipPools_;
    bool byoipPoolsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListByoipPoolsResponse_H_
