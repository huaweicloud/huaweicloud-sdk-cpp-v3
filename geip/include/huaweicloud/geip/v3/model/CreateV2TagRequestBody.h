
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateV2TagRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateV2TagRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/CreateV2TagRequestBody_tag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CreateV2TagRequestBody
    : public ModelBase
{
public:
    CreateV2TagRequestBody();
    virtual ~CreateV2TagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateV2TagRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateV2TagRequestBody_tag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const CreateV2TagRequestBody_tag& value);


protected:
    CreateV2TagRequestBody_tag tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateV2TagRequestBody_H_
