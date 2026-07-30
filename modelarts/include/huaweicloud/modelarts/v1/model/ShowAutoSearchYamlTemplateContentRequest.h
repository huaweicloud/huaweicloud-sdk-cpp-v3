
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplateContentRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplateContentRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAutoSearchYamlTemplateContentRequest
    : public ModelBase
{
public:
    ShowAutoSearchYamlTemplateContentRequest();
    virtual ~ShowAutoSearchYamlTemplateContentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoSearchYamlTemplateContentRequest members

    /// <summary>
    /// 搜索算法类型。
    /// </summary>

    std::string getAlgorithmType() const;
    bool algorithmTypeIsSet() const;
    void unsetalgorithmType();
    void setAlgorithmType(const std::string& value);

    /// <summary>
    /// 搜索算法名称。
    /// </summary>

    std::string getAlgorithmName() const;
    bool algorithmNameIsSet() const;
    void unsetalgorithmName();
    void setAlgorithmName(const std::string& value);


protected:
    std::string algorithmType_;
    bool algorithmTypeIsSet_;
    std::string algorithmName_;
    bool algorithmNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowAutoSearchYamlTemplateContentRequest& dereference_from_shared_ptr(std::shared_ptr<ShowAutoSearchYamlTemplateContentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplateContentRequest_H_
