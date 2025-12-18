
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_MeetingStatus_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_MeetingStatus_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  MeetingStatus
: public ModelBase
{
public:
    MeetingStatus();
    virtual ~MeetingStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eMeetingStatus 
    {
        MeetingStatus_schedule,
        MeetingStatus_created,
        MeetingStatus_destroyed,
    };

    eMeetingStatus getValue() const;
    void setValue(eMeetingStatus const value);

protected:
    eMeetingStatus value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_MeetingStatus_H_
