
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/Source.h>
#include <huaweicloud/dds/v3/model/Target.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RestoreInstanceRequestBody
    : public ModelBase
{
public:
    RestoreInstanceRequestBody();
    virtual ~RestoreInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreInstanceRequestBody members

    /// <summary>
    /// 
    /// </summary>

    Source getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const Source& value);

    /// <summary>
    /// 
    /// </summary>

    Target getTarget() const;
    bool targetIsSet() const;
    void unsettarget();
    void setTarget(const Target& value);


protected:
    Source source_;
    bool sourceIsSet_;
    Target target_;
    bool targetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreInstanceRequestBody_H_
