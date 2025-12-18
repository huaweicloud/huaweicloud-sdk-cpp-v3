
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSimultaneousInterpretationBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSimultaneousInterpretationBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 开启/关闭同声传译请求体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSimultaneousInterpretationBody
    : public ModelBase
{
public:
    RestSimultaneousInterpretationBody();
    virtual ~RestSimultaneousInterpretationBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSimultaneousInterpretationBody members

    /// <summary>
    /// * 0：停止同声传译 * 1：启动同声传译 
    /// </summary>

    int32_t getSimultaneousInterpretation() const;
    bool simultaneousInterpretationIsSet() const;
    void unsetsimultaneousInterpretation();
    void setSimultaneousInterpretation(int32_t value);


protected:
    int32_t simultaneousInterpretation_;
    bool simultaneousInterpretationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSimultaneousInterpretationBody_H_
