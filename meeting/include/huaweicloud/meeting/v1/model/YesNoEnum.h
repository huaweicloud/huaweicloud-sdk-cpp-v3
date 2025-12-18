
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_YesNoEnum_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_YesNoEnum_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_MEETING_V1_EXPORT  YesNoEnum
: public ModelBase
{
public:
    YesNoEnum();
    virtual ~YesNoEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eYesNoEnum 
    {
        YesNoEnum_Y,
        YesNoEnum_N,
    };

    eYesNoEnum getValue() const;
    void setValue(eYesNoEnum const value);

protected:
    eYesNoEnum value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_YesNoEnum_H_
