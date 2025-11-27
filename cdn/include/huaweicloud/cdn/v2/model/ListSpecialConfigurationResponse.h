
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSpecialConfigurationResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSpecialConfigurationResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/SpeicialConfiguration.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListSpecialConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSpecialConfigurationResponse();
    virtual ~ListSpecialConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSpecialConfigurationResponse members

    /// <summary>
    /// 总条数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 域名特殊配置信息。
    /// </summary>

    std::vector<SpeicialConfiguration>& getSpecialConfigurations();
    bool specialConfigurationsIsSet() const;
    void unsetspecialConfigurations();
    void setSpecialConfigurations(const std::vector<SpeicialConfiguration>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<SpeicialConfiguration> specialConfigurations_;
    bool specialConfigurationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSpecialConfigurationResponse_H_
