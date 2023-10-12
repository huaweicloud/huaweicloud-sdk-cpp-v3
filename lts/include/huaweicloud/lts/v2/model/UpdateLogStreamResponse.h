
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateLogStreamResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateLogStreamResponse();
    virtual ~UpdateLogStreamResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLogStreamResponse members

    /// <summary>
    /// 创建该日志流的时间
    /// </summary>

    int64_t getCreationTime() const;
    bool creationTimeIsSet() const;
    void unsetcreationTime();
    void setCreationTime(int64_t value);

    /// <summary>
    /// 日志流的名称。
    /// </summary>

    std::string getLogTopicName() const;
    bool logTopicNameIsSet() const;
    void unsetlogTopicName();
    void setLogTopicName(const std::string& value);

    /// <summary>
    /// 日志流ID。
    /// </summary>

    std::string getLogTopicId() const;
    bool logTopicIdIsSet() const;
    void unsetlogTopicId();
    void setLogTopicId(const std::string& value);

    /// <summary>
    /// 日志存储时间（天）。
    /// </summary>

    int32_t getTtlInDays() const;
    bool ttlInDaysIsSet() const;
    void unsetttlInDays();
    void setTtlInDays(int32_t value);


protected:
    int64_t creationTime_;
    bool creationTimeIsSet_;
    std::string logTopicName_;
    bool logTopicNameIsSet_;
    std::string logTopicId_;
    bool logTopicIdIsSet_;
    int32_t ttlInDays_;
    bool ttlInDaysIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateLogStreamResponse_H_
