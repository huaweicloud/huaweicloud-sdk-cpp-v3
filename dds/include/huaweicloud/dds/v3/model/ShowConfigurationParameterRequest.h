
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConfigurationParameterRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConfigurationParameterRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowConfigurationParameterRequest
    : public ModelBase
{
public:
    ShowConfigurationParameterRequest();
    virtual ~ShowConfigurationParameterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowConfigurationParameterRequest members

    /// <summary>
    /// 参数模板ID。
    /// </summary>

    std::string getConfigId() const;
    bool configIdIsSet() const;
    void unsetconfigId();
    void setConfigId(const std::string& value);


protected:
    std::string configId_;
    bool configIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowConfigurationParameterRequest& dereference_from_shared_ptr(std::shared_ptr<ShowConfigurationParameterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowConfigurationParameterRequest_H_
