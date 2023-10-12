
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplate_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplate_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/QualityEnhanceVideo.h>
#include <string>

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
class HUAWEICLOUD_MPC_V1_EXPORT  QualityEnhanceTemplate
    : public ModelBase
{
public:
    QualityEnhanceTemplate();
    virtual ~QualityEnhanceTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QualityEnhanceTemplate members

    /// <summary>
    /// 模板名称。 
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 模板描述，查询预置模板时才会返回。 
    /// </summary>

    std::string getTemplateDescription() const;
    bool templateDescriptionIsSet() const;
    void unsettemplateDescription();
    void setTemplateDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QualityEnhanceVideo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const QualityEnhanceVideo& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    std::string templateDescription_;
    bool templateDescriptionIsSet_;
    QualityEnhanceVideo video_;
    bool videoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_QualityEnhanceTemplate_H_
