
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowTopDomainNamesResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowTopDomainNamesResponse_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowTopDomainNamesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTopDomainNamesResponse();
    virtual ~ShowTopDomainNamesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowTopDomainNamesResponse members

    /// <summary>
    /// top域名信息
    /// </summary>

    std::vector<std::map<std::string, Object>>& getTopDomainNames();
    bool topDomainNamesIsSet() const;
    void unsettopDomainNames();
    void setTopDomainNames(const std::vector<std::map<std::string, Object>>& value);


protected:
    std::vector<std::map<std::string, Object>> topDomainNames_;
    bool topDomainNamesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowTopDomainNamesResponse_H_
