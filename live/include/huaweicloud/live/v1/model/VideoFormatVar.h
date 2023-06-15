
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_VideoFormatVar_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_VideoFormatVar_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_LIVE_V1_EXPORT  VideoFormatVar
: public ModelBase
{
public:
    VideoFormatVar();
    virtual ~VideoFormatVar();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    enum class eVideoFormatVar 
    {
        VideoFormatVar_FLV,
        VideoFormatVar_HLS,
        VideoFormatVar_MP4,
    };

    eVideoFormatVar getValue() const;
    void setValue(eVideoFormatVar const value);

protected:
    eVideoFormatVar value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_VideoFormatVar_H_
