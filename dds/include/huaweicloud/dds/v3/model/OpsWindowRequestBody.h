
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_OpsWindowRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_OpsWindowRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  OpsWindowRequestBody
    : public ModelBase
{
public:
    OpsWindowRequestBody();
    virtual ~OpsWindowRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OpsWindowRequestBody members

    /// <summary>
    /// 开始时间，格式必须为HH:MM且有效，当前时间指UTC时间。不能与结束时间相同，只能为整点。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，格式必须为HH:MM且有效，当前时间指UTC时间。不能与开始时间相同，只能为整点。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_OpsWindowRequestBody_H_
