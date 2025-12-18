
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_InviteShareDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_InviteShareDTO_H_


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
/// 邀请共享请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  InviteShareDTO
    : public ModelBase
{
public:
    InviteShareDTO();
    virtual ~InviteShareDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InviteShareDTO members

    /// <summary>
    /// 邀请标志。 * 0：取消邀请 * 1：邀请 
    /// </summary>

    int32_t getShare() const;
    bool shareIsSet() const;
    void unsetshare();
    void setShare(int32_t value);


protected:
    int32_t share_;
    bool shareIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_InviteShareDTO_H_
