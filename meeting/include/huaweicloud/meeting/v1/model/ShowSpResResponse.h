
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowSpResResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowSpResResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowSpResResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSpResResponse();
    virtual ~ShowSpResResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSpResResponse members

    /// <summary>
    /// SP下所有企业已使用的会议并发数量。
    /// </summary>

    int32_t getUsedAccountsCount() const;
    bool usedAccountsCountIsSet() const;
    void unsetusedAccountsCount();
    void setUsedAccountsCount(int32_t value);


protected:
    int32_t usedAccountsCount_;
    bool usedAccountsCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowSpResResponse_H_
