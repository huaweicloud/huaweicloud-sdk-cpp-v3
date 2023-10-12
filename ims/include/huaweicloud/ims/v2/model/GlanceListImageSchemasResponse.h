
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageSchemasResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageSchemasResponse_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/ims/v2/model/Links.h>
#include <vector>

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
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceListImageSchemasResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceListImageSchemasResponse();
    virtual ~GlanceListImageSchemasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GlanceListImageSchemasResponse members

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

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceListImageSchemasResponse_H_
