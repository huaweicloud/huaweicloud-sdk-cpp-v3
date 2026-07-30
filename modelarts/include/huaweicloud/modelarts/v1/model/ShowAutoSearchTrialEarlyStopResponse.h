
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchTrialEarlyStopResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchTrialEarlyStopResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAutoSearchTrialEarlyStopResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoSearchTrialEarlyStopResponse();
    virtual ~ShowAutoSearchTrialEarlyStopResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoSearchTrialEarlyStopResponse members

    /// <summary>
    /// 提前终止的trial的trial_id。
    /// </summary>

    std::string getEarlystopTrial() const;
    bool earlystopTrialIsSet() const;
    void unsetearlystopTrial();
    void setEarlystopTrial(const std::string& value);


protected:
    std::string earlystopTrial_;
    bool earlystopTrialIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchTrialEarlyStopResponse_H_
