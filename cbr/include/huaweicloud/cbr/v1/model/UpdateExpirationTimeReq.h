
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  UpdateExpirationTimeReq
    : public ModelBase
{
public:
    UpdateExpirationTimeReq();
    virtual ~UpdateExpirationTimeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateExpirationTimeReq members

    /// <summary>
    /// 预期过期日期，格式：YYYY-MM-DD。
    /// </summary>

    std::string getExpectExpirationDate() const;
    bool expectExpirationDateIsSet() const;
    void unsetexpectExpirationDate();
    void setExpectExpirationDate(const std::string& value);

    /// <summary>
    /// 用户所在时区，格式形如 UTC+08:00
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);


protected:
    std::string expectExpirationDate_;
    bool expectExpirationDateIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_UpdateExpirationTimeReq_H_
