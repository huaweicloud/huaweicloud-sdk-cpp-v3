
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonTemplate_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonTemplate_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AddonMetadata.h>
#include <string>
#include <huaweicloud/cce/v3/model/Templatespec.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件模板详情-response结构体
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddonTemplate
    : public ModelBase
{
public:
    AddonTemplate();
    virtual ~AddonTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddonTemplate members

    /// <summary>
    /// API类型，固定值“Addon”，该值不可修改。
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API版本，固定值“v3”，该值不可修改。
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddonMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const AddonMetadata& value);

    /// <summary>
    /// 
    /// </summary>

    Templatespec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const Templatespec& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    AddonMetadata metadata_;
    bool metadataIsSet_;
    Templatespec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddonTemplate_H_
