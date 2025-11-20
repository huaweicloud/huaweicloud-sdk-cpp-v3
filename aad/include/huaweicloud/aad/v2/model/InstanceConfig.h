
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_InstanceConfig_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_InstanceConfig_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  InstanceConfig
    : public ModelBase
{
public:
    InstanceConfig();
    virtual ~InstanceConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceConfig members

    /// <summary>
    /// 实例级别标签
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 冻结类型
    /// </summary>

    std::vector<int32_t>& getFreezeType();
    bool freezeTypeIsSet() const;
    void unsetfreezeType();
    void setFreezeType(std::vector<int32_t> value);


protected:
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::vector<int32_t> freezeType_;
    bool freezeTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_InstanceConfig_H_
