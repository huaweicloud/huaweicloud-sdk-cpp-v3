
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_Segment_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_Segment_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/TranscriberResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  Segment
    : public ModelBase
{
public:
    Segment();
    virtual ~Segment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Segment members

    /// <summary>
    /// 一句的起始时间戳，单位ms。
    /// </summary>

    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);

    /// <summary>
    /// 一句的结束时间戳，单位ms。
    /// </summary>

    int32_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    TranscriberResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const TranscriberResult& value);


protected:
    int32_t startTime_;
    bool startTimeIsSet_;
    int32_t endTime_;
    bool endTimeIsSet_;
    TranscriberResult result_;
    bool resultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_Segment_H_
