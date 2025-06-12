
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SupportedServiceEnum_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SupportedServiceEnum_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SupportedServiceEnum
: public ModelBase
{
public:
    SupportedServiceEnum();
    virtual ~SupportedServiceEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eSupportedServiceEnum 
    {
        SupportedServiceEnum_VIDEO_2D,
        SupportedServiceEnum_LIVE_2D,
        SupportedServiceEnum_CHAT_2D,
    };

    eSupportedServiceEnum getValue() const;
    void setValue(eSupportedServiceEnum const value);

protected:
    eSupportedServiceEnum value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SupportedServiceEnum_H_
