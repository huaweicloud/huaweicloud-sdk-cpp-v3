
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequestBody_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerMetadataRequestBody
    : public ModelBase
{
public:
    UpdateServerMetadataRequestBody();
    virtual ~UpdateServerMetadataRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateServerMetadataRequestBody members

    /// <summary>
    /// 用户自定义metadata键值对。  结构体允许为空，取值为空时不更新数据。  键。最大长度255个Unicode字符，不能为空。可以为大写字母（A-Z）、小写字母（a-z）、数字（0-9）、中划线（-）、下划线（_）、冒号（:）和小数点（.）。  值。最大长度为255个Unicode字符。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerMetadataRequestBody_H_
