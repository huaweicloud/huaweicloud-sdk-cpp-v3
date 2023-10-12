
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateQualityEnhanceTemplateResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateQualityEnhanceTemplateResponse_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  CreateQualityEnhanceTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateQualityEnhanceTemplateResponse();
    virtual ~CreateQualityEnhanceTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateQualityEnhanceTemplateResponse members

    /// <summary>
    /// 模板ID。 
    /// </summary>

    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_CreateQualityEnhanceTemplateResponse_H_
