
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeConNumData_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeConNumData_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_LIVE_V2_EXPORT  TranscodeConNumData
    : public ModelBase
{
public:
    TranscodeConNumData();
    virtual ~TranscodeConNumData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TranscodeConNumData members

    /// <summary>
    /// 采样时间。日期格式按照ISO8601表示法，并使用UTC时间。 格式为：YYYY-MM-DDThh:mm:ssZ。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 转码路数。
    /// </summary>

    int64_t getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(int64_t value);


protected:
    std::string time_;
    bool timeIsSet_;
    int64_t value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeConNumData_H_
