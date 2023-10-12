
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipTagRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipTagRequestBody_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/ResourceTagOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建tag对象的请求体
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  CreatePublicipTagRequestBody
    : public ModelBase
{
public:
    CreatePublicipTagRequestBody();
    virtual ~CreatePublicipTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePublicipTagRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ResourceTagOption getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const ResourceTagOption& value);


protected:
    ResourceTagOption tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipTagRequestBody_H_
