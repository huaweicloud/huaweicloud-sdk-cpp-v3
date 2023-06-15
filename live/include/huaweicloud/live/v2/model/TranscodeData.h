
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeData_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeData_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v2/model/TranscodeSpec.h>

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
class HUAWEICLOUD_LIVE_V2_EXPORT  TranscodeData
    : public ModelBase
{
public:
    TranscodeData();
    virtual ~TranscodeData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TranscodeData members

    /// <summary>
    /// 每个采样时间中的转码时长信息。
    /// </summary>

    std::vector<TranscodeSpec>& getSpecList();
    bool specListIsSet() const;
    void unsetspecList();
    void setSpecList(const std::vector<TranscodeSpec>& value);

    /// <summary>
    /// 采样时间。日期格式按照ISO8601表示法，并使用UTC时间。 格式为：YYYY-MM-DDThh:mm:ssZ 。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    std::vector<TranscodeSpec> specList_;
    bool specListIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_TranscodeData_H_
