
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAlarmStatisticsUsingResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAlarmStatisticsUsingResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/AlertStatisticsDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListAlarmStatisticsUsingResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAlarmStatisticsUsingResponse();
    virtual ~ListAlarmStatisticsUsingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAlarmStatisticsUsingResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<AlertStatisticsDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<AlertStatisticsDto>& value);


protected:
    std::vector<AlertStatisticsDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListAlarmStatisticsUsingResponse_H_
