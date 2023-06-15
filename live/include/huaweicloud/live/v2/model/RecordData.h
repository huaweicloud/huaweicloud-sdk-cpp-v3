
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_RecordData_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_RecordData_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  RecordData
    : public ModelBase
{
public:
    RecordData();
    virtual ~RecordData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecordData members

    /// <summary>
    /// 最大并发路数。
    /// </summary>

    int32_t getConcurrentCount() const;
    bool concurrentCountIsSet() const;
    void unsetconcurrentCount();
    void setConcurrentCount(int32_t value);

    /// <summary>
    /// 采样时间，每小时内最大并发路数时间点。日期格式按照ISO8601表示法，并使用UTC时间。 格式为：YYYY-MM-DDThh:mm:ssZ 。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    int32_t concurrentCount_;
    bool concurrentCountIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_RecordData_H_
