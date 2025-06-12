
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotQuestionReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotQuestionReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改热点问题请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateHotQuestionReq
    : public ModelBase
{
public:
    UpdateHotQuestionReq();
    virtual ~UpdateHotQuestionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateHotQuestionReq members

    /// <summary>
    /// 热点问题。
    /// </summary>

    std::string getHotQuestion() const;
    bool hotQuestionIsSet() const;
    void unsethotQuestion();
    void setHotQuestion(const std::string& value);


protected:
    std::string hotQuestion_;
    bool hotQuestionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateHotQuestionReq_H_
