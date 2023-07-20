
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreTimeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreTimeInfo_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RestoreTimeInfo
    : public ModelBase
{
public:
    RestoreTimeInfo();
    virtual ~RestoreTimeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreTimeInfo members

    /// <summary>
    /// 可恢复时间段的起始时间点，UNIX时间戳格式，单位是毫秒，时区是UTC。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 可恢复时间段的结束时间点，UNIX时间戳格式，单位是毫秒，时区是UTC。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);


protected:
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestoreTimeInfo_H_
