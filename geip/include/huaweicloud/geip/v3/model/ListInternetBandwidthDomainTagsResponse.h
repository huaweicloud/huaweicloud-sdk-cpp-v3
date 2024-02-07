
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthDomainTagsResponse_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthDomainTagsResponse_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/CreateTag.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListInternetBandwidthDomainTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInternetBandwidthDomainTagsResponse();
    virtual ~ListInternetBandwidthDomainTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInternetBandwidthDomainTagsResponse members

    /// <summary>
    /// 所有标签。
    /// </summary>

    std::vector<CreateTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateTag>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<CreateTag> tags_;
    bool tagsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListInternetBandwidthDomainTagsResponse_H_
