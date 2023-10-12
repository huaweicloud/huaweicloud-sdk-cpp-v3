
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_Sentences_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_Sentences_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/FlashScoreResult.h>

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
class HUAWEICLOUD_SIS_V1_EXPORT  Sentences
    : public ModelBase
{
public:
    Sentences();
    virtual ~Sentences();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Sentences members

    /// <summary>
    /// 分句结果信息
    /// </summary>

    int32_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    FlashScoreResult getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const FlashScoreResult& value);

    /// <summary>
    /// 一句话开始时间，单位毫秒
    /// </summary>

    int32_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int32_t value);


protected:
    int32_t endTime_;
    bool endTimeIsSet_;
    FlashScoreResult result_;
    bool resultIsSet_;
    int32_t startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_Sentences_H_
