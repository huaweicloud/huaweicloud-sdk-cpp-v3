
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_MonitorInfoRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_MonitorInfoRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/Duration.h>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  MonitorInfoRequest
    : public ModelBase
{
public:
    MonitorInfoRequest();
    virtual ~MonitorInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MonitorInfoRequest members

    /// <summary>
    /// 
    /// </summary>

    Duration getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const Duration& value);


protected:
    Duration time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_MonitorInfoRequest_H_
