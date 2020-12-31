
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageSchemasResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageSchemasResponse_H_

#include <huaweicloud/ims/ImsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include "huaweicloud/ims/model/AdditionalProperties.h"
#include <vector>
#include "huaweicloud/ims/model/Links.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IMS_EXPORT  GlanceShowImageSchemasResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceShowImageSchemasResponse();
    virtual ~GlanceShowImageSchemasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceShowImageSchemasResponse members

    /// <summary>
    /// 
    /// </summary>

    AdditionalProperties getAdditionalProperties() const;
    bool additionalPropertiesIsSet() const;
    void unsetadditionalProperties();
    void setAdditionalProperties(const AdditionalProperties& value);

    /// <summary>
    /// 视图名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像属性说明，主要是对基础属性的说明，包含每个属性的取值类型、用途等。
    /// </summary>

    Object getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const Object& value);

    /// <summary>
    /// 视图链接。
    /// </summary>

    std::vector<Links>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<Links>& value);


protected:
    AdditionalProperties additionalProperties_;
    bool additionalPropertiesIsSet_;
    std::string name_;
    bool nameIsSet_;
    Object properties_;
    bool propertiesIsSet_;
    std::vector<Links> links_;
    bool linksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageSchemasResponse_H_
