
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponse_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/ListOsVersionsResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ListOsVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOsVersionsResponse();
    virtual ~ListOsVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListOsVersionsResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ListOsVersionsResponseBody>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ListOsVersionsResponseBody>& value);


protected:
    std::vector<ListOsVersionsResponseBody> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponse_H_
