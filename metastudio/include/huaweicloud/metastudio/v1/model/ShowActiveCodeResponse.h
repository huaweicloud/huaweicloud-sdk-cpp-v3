
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowActiveCodeResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowActiveCodeResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowActiveCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowActiveCodeResponse();
    virtual ~ShowActiveCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowActiveCodeResponse members

    /// <summary>
    /// 激活码ID。
    /// </summary>

    std::string getActiveCodeId() const;
    bool activeCodeIdIsSet() const;
    void unsetactiveCodeId();
    void setActiveCodeId(const std::string& value);

    /// <summary>
    /// 激活码。
    /// </summary>

    std::string getActiveCode() const;
    bool activeCodeIsSet() const;
    void unsetactiveCode();
    void setActiveCode(const std::string& value);

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 智能交互对话ID。
    /// </summary>

    std::string getRoomId() const;
    bool roomIdIsSet() const;
    void unsetroomId();
    void setRoomId(const std::string& value);

    /// <summary>
    /// 有效天数（0表示长期有效）。
    /// </summary>

    int32_t getValidPeriod() const;
    bool validPeriodIsSet() const;
    void unsetvalidPeriod();
    void setValidPeriod(int32_t value);

    /// <summary>
    /// 过期时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string activeCodeId_;
    bool activeCodeIdIsSet_;
    std::string activeCode_;
    bool activeCodeIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    std::string roomId_;
    bool roomIdIsSet_;
    int32_t validPeriod_;
    bool validPeriodIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowActiveCodeResponse_H_
