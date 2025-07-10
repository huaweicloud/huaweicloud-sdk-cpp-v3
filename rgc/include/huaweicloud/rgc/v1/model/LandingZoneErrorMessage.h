
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_LandingZoneErrorMessage_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_LandingZoneErrorMessage_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Landing Zone错误信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  LandingZoneErrorMessage
    : public ModelBase
{
public:
    LandingZoneErrorMessage();
    virtual ~LandingZoneErrorMessage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LandingZoneErrorMessage members

    /// <summary>
    /// Landing Zone的错误级别。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// Landing Zone详细的错误信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string level_;
    bool levelIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_LandingZoneErrorMessage_H_
