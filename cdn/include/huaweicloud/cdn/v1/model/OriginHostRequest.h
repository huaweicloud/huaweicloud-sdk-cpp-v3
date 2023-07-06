
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_OriginHostRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_OriginHostRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/OriginHostBody.h>

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
class HUAWEICLOUD_CDN_V1_EXPORT  OriginHostRequest
    : public ModelBase
{
public:
    OriginHostRequest();
    virtual ~OriginHostRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OriginHostRequest members

    /// <summary>
    /// 
    /// </summary>

    OriginHostBody getOriginHost() const;
    bool originHostIsSet() const;
    void unsetoriginHost();
    void setOriginHost(const OriginHostBody& value);


protected:
    OriginHostBody originHost_;
    bool originHostIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_OriginHostRequest_H_
