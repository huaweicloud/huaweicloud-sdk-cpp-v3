
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowClientRecordReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowClientRecordReqBody_H_


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
/// 允许客户端录制请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestAllowClientRecordReqBody
    : public ModelBase
{
public:
    RestAllowClientRecordReqBody();
    virtual ~RestAllowClientRecordReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestAllowClientRecordReqBody members

    /// <summary>
    /// * 0：取消与会者客户端录制权限 * 1：允许与会者客户端录制 
    /// </summary>

    int32_t getAllowClientRecord() const;
    bool allowClientRecordIsSet() const;
    void unsetallowClientRecord();
    void setAllowClientRecord(int32_t value);


protected:
    int32_t allowClientRecord_;
    bool allowClientRecordIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowClientRecordReqBody_H_
