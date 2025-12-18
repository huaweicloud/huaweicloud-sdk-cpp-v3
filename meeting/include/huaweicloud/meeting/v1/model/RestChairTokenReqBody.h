
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestChairTokenReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestChairTokenReqBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 申请主持人请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestChairTokenReqBody
    : public ModelBase
{
public:
    RestChairTokenReqBody();
    virtual ~RestChairTokenReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestChairTokenReqBody members

    /// <summary>
    /// - 0: 释放主持人 - 1: 申请主持人
    /// </summary>

    int32_t getApplyChair() const;
    bool applyChairIsSet() const;
    void unsetapplyChair();
    void setApplyChair(int32_t value);

    /// <summary>
    /// 当申请主持人时，携带主持人密码。
    /// </summary>

    std::string getChairmanPwd() const;
    bool chairmanPwdIsSet() const;
    void unsetchairmanPwd();
    void setChairmanPwd(const std::string& value);


protected:
    int32_t applyChair_;
    bool applyChairIsSet_;
    std::string chairmanPwd_;
    bool chairmanPwdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestChairTokenReqBody_H_
