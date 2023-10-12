
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_AddImageTagRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_AddImageTagRequestBody_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求参数
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  AddImageTagRequestBody
    : public ModelBase
{
public:
    AddImageTagRequestBody();
    virtual ~AddImageTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddImageTagRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResourceTag getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const ResourceTag& value);


protected:
    ResourceTag tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_AddImageTagRequestBody_H_
