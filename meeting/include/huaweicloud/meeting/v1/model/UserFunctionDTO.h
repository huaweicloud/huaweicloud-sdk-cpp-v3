
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserFunctionDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserFunctionDTO_H_


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
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UserFunctionDTO
    : public ModelBase
{
public:
    UserFunctionDTO();
    virtual ~UserFunctionDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserFunctionDTO members

    /// <summary>
    /// 是否开启智能协同白板功能。如果开启，表示该帐号是给智能协同白板使用，占用企业智能协同白板的资源，如果资源不足，则无法开启。 默认值：false。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    bool isEnableRoom() const;
    bool enableRoomIsSet() const;
    void unsetenableRoom();
    void setEnableRoom(bool value);


protected:
    bool enableRoom_;
    bool enableRoomIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserFunctionDTO_H_
