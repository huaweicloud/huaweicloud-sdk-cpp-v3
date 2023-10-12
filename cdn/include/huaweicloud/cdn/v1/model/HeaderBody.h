
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_HeaderBody_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_HeaderBody_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  HeaderBody
    : public ModelBase
{
public:
    HeaderBody();
    virtual ~HeaderBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HeaderBody members

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_HeaderBody_H_
