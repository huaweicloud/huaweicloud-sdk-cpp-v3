
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ListListenersResponse_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ListListenersResponse_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ga/v1/model/ListenerDetail.h>
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
class HUAWEICLOUD_GA_V1_EXPORT  ListListenersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListListenersResponse();
    virtual ~ListListenersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListListenersResponse members

    /// <summary>
    /// 监听器列表。
    /// </summary>

    std::vector<ListenerDetail>& getListeners();
    bool listenersIsSet() const;
    void unsetlisteners();
    void setListeners(const std::vector<ListenerDetail>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);

    /// <summary>
    /// 请求ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<ListenerDetail> listeners_;
    bool listenersIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ListListenersResponse_H_
