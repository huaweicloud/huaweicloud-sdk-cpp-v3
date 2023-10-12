
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_RangeStatusRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_RangeStatusRequest_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CDN_V1_EXPORT  RangeStatusRequest
    : public ModelBase
{
public:
    RangeStatusRequest();
    virtual ~RangeStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RangeStatusRequest members

    /// <summary>
    /// range状态（\&quot;off\&quot;/\&quot;on\&quot;）
    /// </summary>

    std::string getRangeStatus() const;
    bool rangeStatusIsSet() const;
    void unsetrangeStatus();
    void setRangeStatus(const std::string& value);


protected:
    std::string rangeStatus_;
    bool rangeStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_RangeStatusRequest_H_
