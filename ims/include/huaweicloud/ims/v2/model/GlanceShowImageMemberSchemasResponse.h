
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasResponse_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasResponse_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

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
class HUAWEICLOUD_IMS_V2_EXPORT  GlanceShowImageMemberSchemasResponse
    : public ModelBase, public HttpResponse
{
public:
    GlanceShowImageMemberSchemasResponse();
    virtual ~GlanceShowImageMemberSchemasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GlanceShowImageMemberSchemasResponse members

    /// <summary>
    /// 视图名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 镜像成员属性说明，主要是对基础属性的说明，包含每个属性的取值类型、用途等。
    /// </summary>

    Object getProperties() const;
    bool propertiesIsSet() const;
    void unsetproperties();
    void setProperties(const Object& value);


protected:
    std::string name_;
    bool nameIsSet_;
    Object properties_;
    bool propertiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_GlanceShowImageMemberSchemasResponse_H_
