
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetExtendMessageResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetExtendMessageResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <map>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAssetExtendMessageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAssetExtendMessageResponse();
    virtual ~ShowAssetExtendMessageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAssetExtendMessageResponse members

    /// <summary>
    /// 资产在README中的扩展内容。
    /// </summary>

    std::map<std::string, Object>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::map<std::string, Object>& value);


protected:
    std::map<std::string, Object> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAssetExtendMessageResponse_H_
