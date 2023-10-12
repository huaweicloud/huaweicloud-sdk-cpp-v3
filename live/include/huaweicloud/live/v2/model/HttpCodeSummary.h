
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_HttpCodeSummary_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_HttpCodeSummary_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v2/model/HttpCode.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_LIVE_V2_EXPORT  HttpCodeSummary
    : public ModelBase
{
public:
    HttpCodeSummary();
    virtual ~HttpCodeSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpCodeSummary members

    /// <summary>
    /// 状态码信息
    /// </summary>

    std::vector<HttpCode>& getHttpCodes();
    bool httpCodesIsSet() const;
    void unsethttpCodes();
    void setHttpCodes(const std::vector<HttpCode>& value);

    /// <summary>
    /// 采样时间。日期格式按照ISO8601表示法，并使用UTC时间。 格式为：YYYY-MM-DDThh:mm:ssZ 。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    std::vector<HttpCode> httpCodes_;
    bool httpCodesIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_HttpCodeSummary_H_
