
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainFullConfigResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainFullConfigResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/ConfigsGetBody.h>
#include <string>

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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowDomainFullConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDomainFullConfigResponse();
    virtual ~ShowDomainFullConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainFullConfigResponse members

    /// <summary>
    /// 
    /// </summary>

    ConfigsGetBody getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const ConfigsGetBody& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    ConfigsGetBody configs_;
    bool configsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowDomainFullConfigResponse_H_
