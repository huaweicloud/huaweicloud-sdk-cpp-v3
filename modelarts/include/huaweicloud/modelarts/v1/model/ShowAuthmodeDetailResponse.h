
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAuthmodeDetailResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAuthmodeDetailResponse_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAuthmodeDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAuthmodeDetailResponse();
    virtual ~ShowAuthmodeDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAuthmodeDetailResponse members

    /// <summary>
    /// **参数解释**：账号domainId。 **取值范围**：不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**：授权模式。 **取值范围**： - strict：严格模式。 - loose：非严格模式。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    std::string mode_;
    bool modeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAuthmodeDetailResponse_H_
