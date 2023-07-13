
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowResponseHeaderResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowResponseHeaderResponse_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/HeaderMap.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowResponseHeaderResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowResponseHeaderResponse();
    virtual ~ShowResponseHeaderResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowResponseHeaderResponse members

    /// <summary>
    /// 
    /// </summary>

    HeaderMap getHeaders() const;
    bool headersIsSet() const;
    void unsetheaders();
    void setHeaders(const HeaderMap& value);


protected:
    HeaderMap headers_;
    bool headersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowResponseHeaderResponse_H_
