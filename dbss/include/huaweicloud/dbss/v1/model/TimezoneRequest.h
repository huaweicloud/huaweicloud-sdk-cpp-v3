
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_TimezoneRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_TimezoneRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  TimezoneRequest
    : public ModelBase
{
public:
    TimezoneRequest();
    virtual ~TimezoneRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TimezoneRequest members

    /// <summary>
    /// 时区信息
    /// </summary>

    std::string getTimezone() const;
    bool timezoneIsSet() const;
    void unsettimezone();
    void setTimezone(const std::string& value);


protected:
    std::string timezone_;
    bool timezoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_TimezoneRequest_H_
