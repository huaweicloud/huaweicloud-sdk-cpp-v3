
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointAttributesResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointAttributesResponse_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/ListApplicationEndpointAttributesResponseBody_attributes.h>
#include <string>

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
class HUAWEICLOUD_SMN_V2_EXPORT  ListApplicationEndpointAttributesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListApplicationEndpointAttributesResponse();
    virtual ~ListApplicationEndpointAttributesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListApplicationEndpointAttributesResponse members

    /// <summary>
    /// 请求的唯一标识ID。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListApplicationEndpointAttributesResponseBody_attributes getAttributes() const;
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const ListApplicationEndpointAttributesResponseBody_attributes& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    ListApplicationEndpointAttributesResponseBody_attributes attributes_;
    bool attributesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListApplicationEndpointAttributesResponse_H_
