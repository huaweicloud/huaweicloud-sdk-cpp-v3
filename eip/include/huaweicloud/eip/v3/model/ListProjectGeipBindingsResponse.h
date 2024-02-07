
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListProjectGeipBindingsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListProjectGeipBindingsResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/GeipBindingsInternalResp.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListProjectGeipBindingsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProjectGeipBindingsResponse();
    virtual ~ListProjectGeipBindingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProjectGeipBindingsResponse members

    /// <summary>
    /// geip绑定关系对象
    /// </summary>

    std::vector<GeipBindingsInternalResp>& getGeipBindings();
    bool geipBindingsIsSet() const;
    void unsetgeipBindings();
    void setGeipBindings(const std::vector<GeipBindingsInternalResp>& value);

    /// <summary>
    /// 本次请求编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<GeipBindingsInternalResp> geipBindings_;
    bool geipBindingsIsSet_;
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListProjectGeipBindingsResponse_H_
