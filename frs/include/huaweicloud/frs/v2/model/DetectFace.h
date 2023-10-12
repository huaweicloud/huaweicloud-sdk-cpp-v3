
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFace_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFace_H_


#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/Attributes.h>
#include <huaweicloud/frs/v2/model/BoundingBox.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  DetectFace
    : public ModelBase
{
public:
    DetectFace();
    virtual ~DetectFace();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DetectFace members

    /// <summary>
    /// 
    /// </summary>

    BoundingBox getBoundingBox() const;
    bool boundingBoxIsSet() const;
    void unsetboundingBox();
    void setBoundingBox(const BoundingBox& value);

    /// <summary>
    /// 
    /// </summary>

    Attributes getAttributes() const;
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const Attributes& value);


protected:
    BoundingBox boundingBox_;
    bool boundingBoxIsSet_;
    Attributes attributes_;
    bool attributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectFace_H_
