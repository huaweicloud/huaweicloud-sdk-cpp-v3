
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListProtocolsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListProtocolsResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_SMN_V2_EXPORT  ListProtocolsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProtocolsResponse();
    virtual ~ListProtocolsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProtocolsResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 协议列表。
    /// </summary>

    std::vector<std::string>& getProtocols();
    bool protocolsIsSet() const;
    void unsetprotocols();
    void setProtocols(const std::vector<std::string>& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    std::vector<std::string> protocols_;
    bool protocolsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListProtocolsResponse_H_
