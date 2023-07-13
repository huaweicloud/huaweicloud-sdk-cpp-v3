
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateReq_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateReq_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/QualityEnhanceTemplate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  UpdateQualityEnhanceTemplateReq
    : public ModelBase
{
public:
    UpdateQualityEnhanceTemplateReq();
    virtual ~UpdateQualityEnhanceTemplateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateQualityEnhanceTemplateReq members

    /// <summary>
    /// 模板ID。 
    /// </summary>

    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    QualityEnhanceTemplate getTemplate() const;
    bool templateIsSet() const;
    void unsettemplate();
    void setTemplate(const QualityEnhanceTemplate& value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;
    QualityEnhanceTemplate template_;
    bool templateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_UpdateQualityEnhanceTemplateReq_H_
