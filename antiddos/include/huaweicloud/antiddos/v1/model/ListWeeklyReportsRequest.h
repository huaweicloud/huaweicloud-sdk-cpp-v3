
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListWeeklyReportsRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListWeeklyReportsRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ListWeeklyReportsRequest
    : public ModelBase
{
public:
    ListWeeklyReportsRequest();
    virtual ~ListWeeklyReportsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWeeklyReportsRequest members

    /// <summary>
    /// 每周的起始时间
    /// </summary>

    std::string getPeriodStartDate() const;
    bool periodStartDateIsSet() const;
    void unsetperiodStartDate();
    void setPeriodStartDate(const std::string& value);


protected:
    std::string periodStartDate_;
    bool periodStartDateIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWeeklyReportsRequest& dereference_from_shared_ptr(std::shared_ptr<ListWeeklyReportsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListWeeklyReportsRequest_H_
