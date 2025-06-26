
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_StatisticsDetail_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_StatisticsDetail_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/CountDetail.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  StatisticsDetail
    : public ModelBase
{
public:
    StatisticsDetail();
    virtual ~StatisticsDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StatisticsDetail members

    /// <summary>
    /// 
    /// </summary>

    CountDetail getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const CountDetail& value);

    /// <summary>
    /// 起始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);


protected:
    CountDetail count_;
    bool countIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_StatisticsDetail_H_
