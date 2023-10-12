
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateConfigurationParameterRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateConfigurationParameterRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/UpdateConfigurationParameterRequestBody.h>

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
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateConfigurationParameterRequest
    : public ModelBase
{
public:
    UpdateConfigurationParameterRequest();
    virtual ~UpdateConfigurationParameterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateConfigurationParameterRequest members

    /// <summary>
    /// 参数模板ID。
    /// </summary>

    std::string getConfigId() const;
    bool configIdIsSet() const;
    void unsetconfigId();
    void setConfigId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateConfigurationParameterRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateConfigurationParameterRequestBody& value);


protected:
    std::string configId_;
    bool configIdIsSet_;
    UpdateConfigurationParameterRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateConfigurationParameterRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateConfigurationParameterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateConfigurationParameterRequest_H_
